#include<stdio.h>
#include<stdlib.h>

int main(){
	// Lendo e escrevendo uma string
	
	char palavra[20];
	printf("Digite uma palavra: ");
	scanf("%s",&palavra);
	// Gets (palavra);
	printf("Palavra lida: %s\n", palavra);
	
	
	char testpalavra [20] = "TESTE";// String usa "" para evitar disperdicio de memoria usar \0 ou seja apos teste ela naoa loca mais espaços
	printf("Palavra = %s\n",testpalavra);
	testpalavra[0] = 'L';// Acessar um caracter ''
	printf("Palavra = %s\n",testpalavra);

	return 0;
}
