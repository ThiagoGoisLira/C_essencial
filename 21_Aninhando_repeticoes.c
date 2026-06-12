 #include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	for (i = 1 ;i < 5; i++){
		for(j = 1;j < 5;j++){
			i == j ? printf("-1-") : printf("-0-");/*Equivale a If(i==j){printf("1 ")}else{printf("0")}*/
			}
		printf("\n");
	}
		
	printf("--FIM--");
	return 0;
}
