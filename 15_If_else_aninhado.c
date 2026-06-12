#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x;
	printf("Digite um valor inteiro: ");
	scanf("%d", &x);
	
	if (x == 0){
		printf("O numero e igual a 0.\n");
	}else{
		if(x > 0){
			printf("O numero e maior que 0.\n");
		}else{
			printf("O numero e menor do que 0.\n");
		}
	}
	
	printf("--FIM--");
	return 0;
}
