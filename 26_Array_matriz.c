#include <stdio.h>
#include <stdlib.h>

#define LINHAS 10
#define COLUNAS 10
int main(){
	
	int matriz [LINHAS][COLUNAS];
	int i, j;
	
	for (i = 0;i < LINHAS;i++){
		for (j = 0;j < COLUNAS;j++){
			printf("MATRIZ -[%d]- -[%d]-\n",i,j);
			
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
