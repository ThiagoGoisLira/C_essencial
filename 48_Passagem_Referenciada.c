#include<stdio.h>
#include<stdlib.h>

void soma_mais_um (int *n){// O uso do *pega o endereço e trabalha com ele
	*n = *n+1;
	printf("Dentro da funcao: x = %d\n", *n);
}

int main(){
	/*Parametro por referência: toda vez que a variavel for usada, o operador"*"
	deverar ser usado na frente do nome da variavel */
	int x = 5;
	printf("Antes da funcao: x = %d\n",x);
	soma_mais_um(&x);
	printf("Depois da funcao: x = %d\n",x);
	
	printf("---FIM---");
	return 0;
}
