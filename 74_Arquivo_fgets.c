#include<stdlib.h>
#include<stdio.h>

int main(){
	/*Para ler uma string de um arquivo usamos a função fgets()*/
	char str[20];
	FILE *arq;
	arq = fopen("arquivo.txt","r");
	if(arq == NULL){
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	char *result = fgets(str,12,arq);//le 11
	if(result == NULL){
		printf("Erro na leitura\n");
	}
	else{
		printf("%s\n",str);
	}
	fclose(arq);
	
	printf("---FIM---");
	return 0;
}
