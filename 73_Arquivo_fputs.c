#include <stdio.h>
#include <stdlib.h>

int main(){
	/* Para se escrever uma string em um arquivo usamos a função fputs()
	A função fputs não coloca o caracter de nov linha '\n', nem nenhum outro tipo de
	caractere, no final da string escrita.*/
	FILE *f;
	f = fopen("arquivo.txt","w");
	if (f == NULL){
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	fputs("Hello\n",f);
	fputs("World\n",f);
	fclose(f);
	
	printf("---FIM---\n");
	return 0;
}
