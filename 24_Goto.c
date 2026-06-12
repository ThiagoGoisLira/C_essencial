#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0;
	inicio:
	if (i < 5){
		printf("Numero: %d\n",i);
		i++;
		goto inicio;// Retorna para o ponto definido "inicio"
	}	
	printf("--FIM--");
	return 0;
}
