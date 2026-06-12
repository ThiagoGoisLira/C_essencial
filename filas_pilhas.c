#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Define o tamanho máximo para as estruturas de dados
#define MAX 50
 
// Estrutura que representa uma Pessoa com nome e idade
typedef struct {
    char nome[30];
    int idade;
} Pessoa;
 
// Estrutura da Fila (FIFO)
typedef struct {
    Pessoa dados[MAX]; // Array para armazenar as pessoas
    int inicio, fim;   // Controladores da fila: onde começa e onde termina
} Fila;
 
// Estrutura da Pilha (LIFO)
typedef struct {
    Pessoa dados[MAX]; // Array para armazenar as pessoas
    int topo;          // Controlador da pilha: aponta para o elemento mais recente
} Pilha;
 
// --- FUNÇÕES DA FILA ---

// Prepara a fila para uso, zerando os marcadores
void inicializarFila(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
}
 
// Insere uma pessoa no final da fila
void inserir(Fila *f, Pessoa p) {
    // Verifica se ainda há espaço na fila
    if (f->fim < MAX) {
        // Adiciona a pessoa na posição 'fim' e depois incrementa o 'fim'
        f->dados[f->fim++] = p;
    }
}
 
// Remove e retorna a pessoa que está no início da fila
Pessoa remover(Fila *f) {
    // Retorna a pessoa na posição 'inicio' e depois incrementa o 'inicio'
    // (Avançando a fila para o próximo elemento)
    return f->dados[f->inicio++];
}

// --- FUNÇÕES DA PILHA ---
 
// Prepara a pilha para uso, indicando que está vazia (-1)
void inicializarPilha(Pilha *p) {
    p->topo = -1;
}
 
// Empilha (insere) uma pessoa no topo da pilha
void push(Pilha *p, Pessoa pes) {
    // Verifica se a pilha não está cheia
    if (p->topo < MAX - 1) {
        // Incrementa o 'topo' primeiro e depois insere a pessoa nessa nova posição
        p->dados[++p->topo] = pes;
    }
}
 
// Desempilha (remove) a pessoa do topo da pilha e a retorna
Pessoa pop(Pilha *p) {
    // Retorna a pessoa na posição 'topo' e depois decrementa o 'topo'
    return p->dados[p->topo--];
}
 
// Apenas observa quem está no topo da pilha, sem remover
Pessoa peek(Pilha *p) {
    return p->dados[p->topo];
}
 
// Exibe todos os elementos da pilha
// Nota: A pilha 'p' é passada por valor (cópia), então a original na main não será esvaziada
void exibirPilha(Pilha p) {
    // Enquanto houver elementos na pilha (topo >= 0)
    while (p.topo >= 0) {
        // Remove do topo e imprime
        Pessoa atual = pop(&p);
        printf("Nome: %s | Idade: %d\n", atual.nome, atual.idade);
    }
}
 
// --- PROGRAMA PRINCIPAL ---

int main() {
    Fila fila;
    Pilha pilhaPrioridade;
 
    // 1. Inicialização das estruturas
    inicializarFila(&fila);
    inicializarPilha(&pilhaPrioridade);
 
    // 2. Criação de um grupo de pessoas para teste
    Pessoa pessoas[] = {
        {"Carlos", 45}, {"Joana", 62}, {"Lucas", 30}, {"Maria", 75}
    };
 
    // 3. Preenchendo a Fila
    int i;
    for (i = 0; i < 4; i++) {
        inserir(&fila, pessoas[i]);
    }
 
    // 4. Processamento da Fila para separar as prioridades
    // Enquanto o início não alcançar o fim (ou seja, enquanto a fila não estiver vazia)
    while (fila.inicio < fila.fim) {
        // Remove a pessoa atual da fila
        Pessoa atual = remover(&fila);
        
        // Regra de negócio: Se tiver mais de 60 anos, vai para a pilha de prioridade
        if (atual.idade > 60) {
            push(&pilhaPrioridade, atual);
        }
    }
 
    // 5. Exibição dos Resultados
    printf("Pessoas com prioridade:\n");
    exibirPilha(pilhaPrioridade);
 
    return 0;
}
