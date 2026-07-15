#include <stdlib.h>
#include <stdio.h>

int main(){
	/*Para o "nome* do arquivo, podemos usar caminho
	- absoluto (endereço completo)
	- relativo (relativo a pasta do programa)
	Exemplo: 
	*/
	FILE *f;
	// Caminho absoluto
	f = fopen("C:\\Projeto\\arq.txt","w");
	// Caminho relativo
	f = fopen("arquivo.txt","w");
	f = fopen("..\\Novo\\arq2.txt","w");
	
	/*O modo de abertura determina  que tipo de uso sera feito do arquivo
	Exemplo:*/
	FILE *f;
	//Leitura de arquivo texto
	f = fopen("arquivo.txt","r");
	//Escrita de arquivo texto
	f = fopen("arquivo.txt","w");
	//Leitura de arquivo binario
	f = fopen("arquivo.txt","rb");
	//Escrita de arquivo binario
	f = fopen("arquivo.txt","wb");
	
	/*Sempre que terminar de usar um arquivo devemos fecha-lo, para realizar
	esta tarefa usa-se a função fclose()*/
	// Forma geral
	int fclose(FILE *f);
	/*fclose() retorna ZERO no caso de sucesso no fechamento do arquivo*/
	
	f = fopen("C:\\arquivo.txt","w");
	if (f == NULL){
		printf("Erro na abertura!\n");
		system("pause");
		exit(1);//Aborta o programa
	}
	/*Fechar o arquivo garante que todos os dados foram realmente gravados*/
	fclose(f);
	
	return 0;
}
