#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// Operador E &&
	int r, x = 5, y = 3;
	r = (x>2) && (y<x);
	printf("Resultado (x > 2) && (y < x) = %d\n",r);
	
	r = (x%2 == 0) && (y>0);
	printf("Resultado (x % 2 == 0) && (y > 0) = %d \n",r);
	
	
	// Operador OU ||
	r = (x>2) || (y<x);
	printf("Resultado (x > 2) || (y < x) = %d\n",r);
	
	r = (x%2 == 0) || (y>0);
	printf("Resultado (x % 2 == 0) || (y > 0) = %d \n",r);
	
	// Operador logico Negação
	r = !(x>2);
	printf("Resultado !(x > 2) = %d\n",r);
	
	
	return 0;
}
