#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x;
	printf("Digite um valor inteiro: ");
	scanf("%d", &x);
	
	if(x % 2 == 0){// Tendo so um comando if e so um else não precisa de {}
		printf("O valor e PAR. : %d\n",x);
	}
	else{
		printf("O valor e IMPAR. : %d\n",x);
	}
	
	
	printf("--FIM--");
	return 0;
}
