#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	int i;
	for (i = 0;i < 5;i++){
		printf("Digite o %d caracter: ",i+1);
		scanf("%c", &ch);
		setbuf(stdin, NULL);//Aplicando a limpeza de buffer
	}
	return 0;
}
