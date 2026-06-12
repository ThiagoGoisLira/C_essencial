#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	printf("Digite um valor inteiro: ");
	scanf("%d", &x);
	
	if (x > 0){
		printf("O valor digitado: - %d - e maior que zero \n",x);
	}
	
	if ((x % 2 == 0) || (x < 0)){
		printf ("O valor e par ou negativo\n");
	}
	if ((x % 2 == 1) || (x < 0)){
		printf ("O valor e inpar ou negativo\n");
	}
	
	
	return 0;
}
