#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,z;
	
	printf("Digite x:");
	scanf("%d", &x);
	printf("Digite y:");
	scanf("%d", &y);
			
	z = x > y ? x : y;// Aplicando um operador ternario para se
	
	printf("Maior = %d\n",z);
	
	return 0;
}
