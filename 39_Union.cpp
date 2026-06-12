#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union tipoU{
	short int x;//16bits
	unsigned char c;//8bits
};

int main (){
	
	//Union: espaço para armazenar Apenas o maior elemento - Memoria compartilhada
	uniot tipoU v;
	v.x = 5;
	v.c = 'a';
	printf("x = %d\n",v.x);
	printf("c = %c\n",v.c);
	
	
	return 0;
}
