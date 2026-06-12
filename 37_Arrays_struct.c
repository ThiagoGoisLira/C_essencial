#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(){
	/* Acesso aos campos do arrays de structs.
	Em um array de estruturas, o operador de ponto (.)
	vem depois dos colchetes [] doindice do array*/
	struct pessoa p[4];
	int i;
	for (i = 0;i < 4;i++){
		gets(p[i].nome);// ler um campo da estrutura
		scanf("%d",&p[i].idade);
		gets(p[i].rua);
		scanf("%d",&p[i].numero);
	}
	
		
	return 0;
}
