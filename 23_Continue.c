#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("Digite o valor de a:");
	scanf("%d", &a);
	printf("Digite o valor de b:");
	scanf("%d", &b);
	
	while(a <= b){
		a++;
		if(a == 5){
			continue;// Continue pula a parte de baixo da extrutura, e continua o laço pulando apenas essa execução dela quando chamada
		}
		printf("%d\n",a);
	}	
	
	
	printf("--FIM--");
	return 0;
}
