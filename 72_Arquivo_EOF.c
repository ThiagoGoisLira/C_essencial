#include<stdlib.h>
#include<stdio.h>

int main(){
	FILE *f;
	f = fopen("arquivo.txt","r");
	if (f == NULL){
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char c = fgetc(f);
	while(!feof(f)){
		printf("%c",c);
		c = fgetc(f);
	}
	printf("\nFIM\n");
	
	return 0;
}

