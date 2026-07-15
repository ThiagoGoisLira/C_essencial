#include<stdio.h>
#include<stdlib.h>

int main(){
	/* Para acessar o valor da variavel apontada por um ponteiro, basta
	usar o operadorasterisco *  
	*/
	int x = 10;
	int *p;
	
	// O ponteiro p aponta para a variavel x
	p = &x;
	
	printf("x = %d\n",x);// Imprime a variavel
	printf("p = %d\n",p);// Imprime o endereço
	printf("*p = %d\n",*p);// Imprime o valor dentro do endereço
	
	*p = 12;// Atribui o novo valor
	printf("*p = %d\n",*p);// Imprime o novo valor dentro do endereço
	
	
	
	printf("---FIM---");
	return 0;
}
