#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	// Conta a quantidade de caracteres
	char palavra1 [20] = "Linguagem C";
	int tamanho = strlen(palavra1);// Conta a quantidade de caracteres
	printf("Tamanho = %d\n", tamanho);
	
	printf("--------------------------------\n");
	
	// Copiando uma string
	char palavra2 [20] = "Linguagem C 2";
	char novapalavra [30];
	strcpy(novapalavra, palavra2);
	printf("Copia = %s\n", novapalavra);	
	
	printf("--------------------------------\n");
		
	//	Concatenar palavras (unir)
	char palavra3 [20]="Bom ";
	char palavra4 [30]="dia";
	strcat(palavra3, palavra4);
	printf("Palavra = %s\n", palavra3);
	
	printf("--------------------------------\n");
	
	//	Comparando duas palavras
	char palavra5[20] = "Linguagem C";
	char palavra6[30] = "LINGUAGEM C";
	if (strcmp(palavra5,palavra6)==0){// Devolve 0 se as palavras forem iguais
		printf("Strings IGUAIS\n");
	}else{
		printf("Strings DIFERENTES\n");
	}
	
	printf("--------------------------------\n");
	printf("--FIM--");
	return 0;
}
