#include <stdio.h>
#include <stdlib.h>
#include <string.c>
struct endereco {
	char rua;
	char numero;
};

struct pessoa{
	char nome[50];
	int idade;
	struct endereco ender;// Chamei a estrutura endereço atribuindo o nome ender.
};

int main(){
	struct pessoa p;
	p.idade = 32;
	p.ender.numero = 101;
	
	return 0;
}
