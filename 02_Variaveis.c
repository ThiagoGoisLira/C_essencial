#include<stdio.h>
#include <stdlib.h>

int main(){
	
	char a = 'A'; // Caracteres
	int x = 10; // Numeros inteiros
	float y = 1.5; // Numeros reais
	double z = 5.0e3;// Anotações cientifica
	
	printf("String: %c \n",a);
	printf("Numero inteiro: %d \n",x); //%d ou %i: Imprime números inteiros.
	printf("Numero real: %f \n",y);
	printf("Numero Longo: %.2f \n",z); // Use %.2f para limitar a 2 casas decimais.
	
	
	return 0;
}
