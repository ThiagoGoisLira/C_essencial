#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	printf("Digite dois valores inteiros: ");
	scanf("%d %d",&a,&b);
	
	while(a < b && a > 0){
		printf("-- %d --\n",a);
		a++;
	}
	
	printf("--FIM--");
	return 0;
}
