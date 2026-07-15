#include<stdio.h>
#include<stdlib.h>

struct ponto{
	int x, y;
};
void atribui (struct ponto *p){
	(*p).x = 10;
	(*p).y = 20;
	/*
	p->x = 10;//Pode ser usado seta para refenciar
	p->y = 20;
	*/
}

int main(){
	//Passando uma struct por referencia
	struct ponto p1;
	atribui(&p1);
	printf("x = %d\n",p1.x);
	printf("y = %d\n",p1.y);
	
	printf("---FIM---");
	return 0;
}
