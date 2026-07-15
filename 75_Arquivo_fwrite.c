#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){
	/*Para se escrever um bloco de bytes em um arquivo usamos a função fwrite()*/
	//int fwrite(void *buffer, int bytes, int count, FILE *fp);
	/*Parametros:
	buffer: ponteiro generico para os dados
	bytes: tamanho, em bytes, de cada unidade de dado a ser gravada
	count: total de unidades de dados que devem ser gravadas
	fp: o ponteiro para o arquivo
	*/
	FILE *arq;
	arq = fopen ("dados.txt","wb");
	if (arq == NULL){
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	char str[20] = "Hello World!";
	float x = 5;
	int v[5] = {1,2,3,4,5};
	fwrite(str, sizeof(char),20,arq);
	fwrite(&x, sizeof(float),1,arq);
	fwrite(v,sizeof(int),5,arq);
	fclose("pause");
	
	
	printf("---FIM---");
	return 0;
}
