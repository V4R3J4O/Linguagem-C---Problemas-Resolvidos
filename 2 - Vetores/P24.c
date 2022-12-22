#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int aluno[10];
    int altura[10];
    int maior;
    int posicao;

    for (int i = 0; i < 10; i++)
    {
        aluno[i] = rand()%100;
        altura[i] = rand()%100 + 100;

        if (i == 0)
        {
            maior = altura[i];
            posicao = aluno[i];
        }
        else if (altura[i] > maior)
        {
            maior = altura[i];
            posicao = i;
        }
        
    }
    
    printf ("Vetor contendo o numero dos alunos [0,100] = { ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",aluno[i]);
    }
    printf("}\n");
    printf ("Vetor contendo a altura dos alunos dos alunos [100,200] (Cm) = { ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",altura[i]);
    }
    printf("}\n");
    
    printf("O maior aluno tem %d centimetros de altura e seu numero e: %d\n\n", maior, aluno[posicao]);
}