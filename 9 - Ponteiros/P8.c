#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int vetA[10];
    int vetB[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("\n\nVetor A = { ");
    for (size_t i = 0; i < 10; i++)
    {
        vetA[i] = rand()%101;
        printf("%d ",vetA[i]);
    }
    printf("}\n\n");
    printf("\n\nVetor B = { ");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",vetB[i]);
    }
    printf("}\n\n");

    printf("---- ENDERECO DE CADA POSICAO DO VETOR A ----\n");

    for (size_t i = 0; i < 10; i++)
    {
        printf("endereco da posicao %i : %p\n",i,vetA[i]);
    }
    printf("---------------------------------------------\n");
    printf("\n\n---- ENDERECO DE CADA POSICAO DO VETOR B ----\n");

    for (size_t i = 0; i < 10; i++)
    {
        printf("endereco da posicao %i : %p\n",i,vetB[i]);
    }
    printf("---------------------------------------------\n");
}