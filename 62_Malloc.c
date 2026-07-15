#include <stdio.h>
#include <stdlib.h>

int main(){
	/* Função malloc():
	serve para alocar memoria durante a execução do programa.
	Ela faz o pedido de memoria ao computador e retorna um ponteiro com o endereço
	do inicio do espaço de memoria alocado
	*/
	/* Na alocaçao da memoria, deve-se levar em conta o tamanho do tipo.*/
	//Exemplo: criar um array de tamanho 50
	
	int *v = (int*) malloc(50 * sizeof(int));
	char *c = (char*) malloc(50 * sizeof (char));
	
	/* Se não houver memoria suficiente para alocar a memoria requisitada,
	a função malloc() retorna NULL*/
	int *p;
	p = (int *) malloc(5*sizeof(int));
	if(p == NULL){
		printf("Erro: sem memoria!\n");
		exit(1);//Termina o programa
	}

	
	int i, j;
	for (i = 0;i < 5;i++){
		printf("Digite p[%d] ",i);
		scanf("%d", &p[i]);
	}
	for (j = 0;j < 5;j++){
		printf("Para p[%d] valor: %d \n",j,p[j]);
		printf("------------------------\n");
	}
	
	free(p);//Liberar a memoria alocada
	
	printf("---THE END---");
	return 0;
}
