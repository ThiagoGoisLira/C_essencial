#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){
    float notas[N], media = 0.0;
    int i;
    
    for (i = 0; i < N; i++){
        printf("Digite a nota do aluno %d: ", i + 1); // Exibe Aluno 1, Aluno 2...
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    
    media = media / N;
    printf("\nMedia da turma: %.2f\n\n", media);
    
    printf("Alunos com nota acima da media:\n");
    for (i = 0; i < N; i++){
        if(notas[i] > media){
            printf("Aluno %d: %.2f\n", i + 1, notas[i]); 
        }
    }
    
    printf("--FIM--\n");
    system("pause");
    return 0;
}
