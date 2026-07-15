#include<stdio.h>
#include<stdlib.h>
void imprime(int *n, int m){// * ele identifica o endereço
	/*Na função, continuamos usando colchete e indice*/
	
	int i;
	for (i = 0;i < m;i++){
		printf("%d \n",n[i]);
	}
}

void imprime_matriz(int m[][2], int n){//Notação para matriz obrigado informa quantidade de colunas
	int i, j;
	for (i = 0;i < n;i++){
		for(j = 0;j < 2;j++){
			printf("%d \n",m [i][j]);
		}
	}
}

int main(){
	/*Na chamda da função, usa-se apenas o numero do array (sem colchete e indice),
	e sem o operador de "&"*/
	int v[5] = {1,2,3,4,5};
	imprime(v,5);// O nome do vetor ja e o endereço dele, 5 e o tamanho do vetor podendo ser outro valor
	
	/*Arrays com mais de uma dimensao precisam da informação do tamanho das outras dimensões*/
	int mat[3][2] = {{1,2},{3,4},{5,6}};
	imprime_matriz(mat,3);
	
	printf("---FIM---");
	return 0;
}
