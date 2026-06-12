#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("Digite dois valores inteiros: ");
	scanf("%d %d",&a,&b);
	
	do{
		printf("__%d__\n",a);
		a++;
	}while (a < b);
	
	printf("--FIM--");
	return 0;
}
