#include <stdio.h>
#include <stdlib.h>
union tipo{
	//16bits para armazenamento
	short int x;
	unsigned char c[2];
};

int main(){
	/* Um dos usos mais comum de uma união e unir um tipo básico a
	um array de tipos menores*/
	union tipo v;
	v.x = 1545;//00000110 00001001
	printf("x = %d\n",v.x);
	//00000110 ->9
	printf("c[0] = %d\n",v.c[0]);
	//00001001 ->6
	printf("c[1] = %d\n",v.c[1]);
	
	
	
	return 0;
}
