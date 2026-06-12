#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cub [5] [5] [5];
	int i, j, k;
	// Preenchedo o array de 3 dimensões com zeros
	for (i = 0;i < 5; i++){
		for(j = 0;j < 5; j++){
			for(k = 0;k < 5; k++){
				cub[i][j][k] = 0;
				printf("0",cub[i][j][k]);
			}
			printf("\n");
			//printf("1",cub[i][j][k]);
		}
		printf("\n");
		//printf("2",cub[i][j][k]);
	}
	
	return 0;
}
