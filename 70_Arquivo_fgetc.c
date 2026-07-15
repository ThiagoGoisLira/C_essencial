#include<stdlib.h>
#include<stdio.h>

int main(){
	/* Para ler um caractere de um arquivo usamos a função fgetc()*/
	//Forma geral
	int fgetc(FILE *fp);
	/*retorna
	- Em caso de erro: a constante EOF
	- Em caso de sucesso: o caractere lido do arquivo
	*/
	FILE *f;
	f = fopen("arquivo.txt","r");
	if (f == NULL){
		printf("Erro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	char c;
	int i;
	//Lê o arquivo, um  caractere por vez
	while(c != EOF){
		c = fgetc(f);
		printf("%c",c);
	}
	printf("\nFIM\n");
	return 0;
}
