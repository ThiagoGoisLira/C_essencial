#include<stdio.h>
#include<stdlib.h>

struct cadastro{
	char nome[50], rua[50];
	int idade, numero;
}typedef struct cadastro cad;

int main(){
	/* Struct "cadastro" e "cad" são o mesmo tipo*/
	struct cadastro c1;
	cad c2;
	
	return 0;
}
