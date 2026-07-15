#include<stdio.h>
#include<stdlib.h>

int main (){
	/*Array: conjunto de dados armazenados de forma sequencial*/
	
	int vet[5] = {1,2,3,4,5};
	int *p = vet;
	int i;
	for (i = 0;i < 5;i++){
		printf("%d\n",p[i]);
	}
	printf("Conteudo Vet[2] = %d\n",vet[2]);//Acessar o conteudo do vetor 2
	printf("Endereco Vet[2] = %d\n",&vet[2]);//Acessar o endereco do vetor 2
	printf("--------------------------------------\n");
	
	/*Cada elemento do array pode apontar para um endereco de memoria,
	seja ele de uma vairavel ou de um array*/
	
	int *pvet[2];
	int x = 10,y[2] = {20,30};
	pvet[0] = &x;
	pvet[1] = y;
	
	printf("pvet [0]: %p\n",pvet[0]);//&x
	printf("pvet [1]: %p\n",pvet[1]);//&y[0]
	
	printf("*pvet [0]: %p\n",*pvet[0]);//x
	printf("pvet [1][1]: %p\n",pvet[1][1]);//y[1]
	
	
	return 0;
}
