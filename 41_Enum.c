#include <stdio.h>
#include <stdlib.h>

// Posso atribuir numeração
enum semana{Domingo=1, Segunda, Terca, Quarta=7, Quinta,Sexta, Sabado};
enum escapes{retrocesso='\b', tabulacao='\t',novalinha='\n'};
int main (){
	
	enum semana s;
	enum escapes e = novalinha;
	s = Segunda;
	printf("valor = %d %c",s,e);
	s = Quarta;
	printf("valor = %d %c",s,e);
		
	return 0;
}
