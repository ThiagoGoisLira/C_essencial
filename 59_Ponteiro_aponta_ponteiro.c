#include<stdio.h>
#include<stdlib.h>

int main(){
	/*A linguagem C permite criar ponteiros com diferentes niveis de apontamento:
	ponteiro que apontam para outros ponteiros.*/
	int x = 10; // Variavel 
	int *p = &x; // Ponteiro apontando para o endereço do ponteiro
	int **p2 = &p;// Ponteiro apontando para o endereço do ponteiro anterior
	
	printf("Endereco p2: %d\n" , p2);//Endereço de p2: &p
	printf("Endereco de x *p2: %d\n", *p2);//&x
	printf("Conteudo do endereco do endereco **p2: %d\n",**p2);//x	
	printf("---FIM---");
	return 0;
}
