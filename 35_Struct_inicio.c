#include <stdio.h>
#include <stdlib.h>

// Estruturas struct
struct pessoa{
	char nome [50], rua[50];
	int idade, numero;
};

int main(){

// Cada campo (variavel) da struct pode ser acessada usando o operador "." 
	struct pessoa p;
	p.idade = 31;// Atribuindo valor para idade em p
	scanf("%d", &p.numero);
	gets(p.nome);// Comando de leitura
	p.numero = p.numero + p.idade - 100;

	
	
	return 0;
}
