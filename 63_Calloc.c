#include <stdio.h>
#include <stdlib.h>

int main(){
	/*Funcionamento:
	a função calloc() recebe por parâmetro
	- número de elementos do array a ser alocado;
	- tamanho de cada elemento do array e retorna
	- NULL: no caso de erro;
	- ponteiro para a primeira posição do array
	*/
	/*Na alocaçao da memoria, deve-se levar em conta o tamanho do tipo
	*/
	/*Se não houver memoria suficiente para alocar a memoria requisitada
	a função calloc() retorna NULL*/
	int *p;
	p = (int *) calloc(5,sizeof(int));
	if (p == NULL){
		printf("ERRO: Sem Memoria!\n");
		exit(1);
	}
	int i;
	for (i = 0;i < 5; i++){
		printf("Digite p[%d]: ",i);
		scanf("%d",&p[i]);
	}
	
	free(p);
	printf("---THE END---");
	return 0;
}
