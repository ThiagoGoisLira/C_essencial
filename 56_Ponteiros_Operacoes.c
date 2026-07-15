#include<stdio.h>
#include<stdlib.h>

int main(){
	/* Atribuição: um ponteiro so pode receber o endereço de uma variavel do mesmo
	tipo de ponteiro*/
	int *p, *p1, x = 10;
	float y = 20.0;
	p = &x;
	printf("*p: %d \n",*p);
	p1 = p;
	printf("*p1: %d \n", *p1);
	// p = &y; // ERRADO
	
	/* Sobre o valor de endereço armazenado por um ponteiro podemos apenas somar
	e subtrair valores INTEIROS*/
	
	int *end = 0x5DC;// 1500
	printf("end = %d \n",end);
	end++;
	printf("end = %d \n",end);// 1504
	end = end +15;
	printf("end = %d \n",end);// 1564
	end = end -2;
	printf("end = %d \n",end);// 1556
	
	printf("---FIM---");
	return 0;
}
