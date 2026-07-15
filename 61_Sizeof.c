#include <stdio.h>
#include <stdlib.h>

struct ponto{
	int x, y;
};
int main(){
	/*A linguagem C ANSI usa apenas 4 funções para a alocação dinamica,
	disponivel na biblioteca stdlib.h
	-malloc
	-calloc
	-realoc
	-free
	
	existe tambem o operador "sizeof" que retorna quantos bytes necessarios para
	alocar um unico elemento de um determinado tipo de dado
	char: 1 byte
	int: 4 bytes
	float: 4 bytes
	double: 8 bytes
	*/
	
	printf("char: %d bytes\n", sizeof(char));
	printf("int: %d bytes\n", sizeof(int));
	printf("float: %d bytes\n", sizeof(float));
	printf("double: %d bytes\n", sizeof(double));
	printf("struct ponto: %d bytes\n", sizeof(struct ponto));
	
	printf("----THE END----");
	return 0;
}
