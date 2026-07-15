#include<stdio.h>
#include<stdlib.h>

int main(){
	/*Ponteiro genérico: pode apontar para todos os tipos de dados existentes 
	que ainda serão criados*/
	// Forma geral:
	void *nome_ponteiro;
	
	//Exemplo
	void *pp;
	int *p1, p2 = 10;
	p1 = &p2;
	pp = &p2;// Endereço de int
	printf("Endereco em  pp: %p \n",pp);
	pp = &p1;// Endereço de ponteiro int*
	printf("Endereco em  pp: %p \n",pp);
	pp = p1;//Endereço de int
	printf("Endereco em  pp: %p \n",pp);
	
	/*Antes de acessar o conteudo e preciso converter o ponteiro generico para o 
	tipo de ponteiro com o qual se deseja trabalhar*/
	
	void *pgenerico;
	int x = 10;
	pgenerico = &x;// Endereco de int x
	//printf("Conteudo: %d\n", *pgenerico);// Erro não define o tipo de ponteiro
	
	printf("Conteudo: %d\n", *(int*)pgenerico);//Converte para int (int*)

	printf("---FIM---");
	return 0;
}
