#include <stdio.h>

int main(){
	char letra;
	int num;
	float f;
	double d;
	
	printf("Digite um caracter: \n");
	scanf("%c", &letra);
	printf("Digite um numero inteiro: \n");
	scanf("%d", &num);
	printf("Digite um numero real: \n");
	scanf("%f",&f);

	
	printf("Caracter: %c, Inteiro: %d, Real: %f",letra,num,f);
	return 0;
	
}
