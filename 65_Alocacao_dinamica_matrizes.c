#include <stdio.h>
#include <stdlib.h>

int main(){
	/*Alocação de arrays multidimensionais:
	Pra alocar um array com mais de 1 dimensão precisamos utilizar
	o conceito de "ponteiro para ponteiro"*/
	
	//ponteiro nivel 1 cria um vetor
	int i, j , N = 2;
	int *p = (int *) malloc(5 * sizeof(int));
	
	//ponteiro nivel 2 permite criar matriz
	int **pp = (int **) malloc(N * sizeof(int *));
	for (i = 0;i < N;i++){
		//Criar um array de int
		p[i] = (int *) malloc(N * sizeof(int));
		for(j = 0;j < N;j++){
			//Le a matriz de inteiros
			scanf("%d", &p[i][j]);
		}
	}
	
	//Liberando as memorias alocadas
	for (i = 0;i < N;i++){
		free(p[i]);
	}
	free(p);
	//ponteiro nivel 3 ponteiro para ponteiro cria um array multidimensional
	int ***d;
	
	
	
	printf("---THE END---");
	return 0;
}
