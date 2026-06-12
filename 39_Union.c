#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union tipoU{
	short int x;//16bits Armazena os dados dentro da maior variavel ou seja armazea tbm o 'c'
	unsigned char c;//8bits
};

int main (){
	
	//Union: espaço para armazenar Apenas o maior elemento - Memoria compartilhada
	union tipoU v;
	v.x = 5;
	v.c = 'a';
	printf("x = %d\n",v.x);
	printf("c = %c\n",v.c);
	
	
	return 0;
}
