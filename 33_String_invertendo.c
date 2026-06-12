#include <stdio.h>
#include <stdlib.h>

int main(){
	// Invertendo uma string
	char str[20] = "Linguagem C";
	char str2[20];
	int i, j;
	for (i=strlen(str)-1;i>=0; i--){
		str2[j] = str[i];// Armazena a inversao nesse novo array
		j++;
		printf("%c",str[i]);
	}
	printf("\n");
	str2[j] = '\0';
	printf("str2 = %s\n", str2);
	
	
	
	
	
	return 0;
}
