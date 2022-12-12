#include <stdio.h>

int main (void)
{
    float vetor[15];
    float soma = 0;
    float media;

    for (int i = 0; i < 15; i++)
    {
        printf("\n");
        printf("Insira a nota do aluno %d: ",i+1);
        scanf("%f",&vetor[i]);

        soma += vetor[i];
    }
    
    media = soma/15;

    printf("\n\nA media das notas dos alunos foi de: %0.2f\n\n",media);
}