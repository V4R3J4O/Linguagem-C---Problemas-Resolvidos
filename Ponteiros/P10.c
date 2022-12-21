#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int vetor[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o valor para a posicao %d: ",i);
        scanf("%d", (vetor+i));
        fflush(stdin);
    }
    
    printf("\nVetor inserido por meio de aritimetica de ponteiros: { ");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ",*(vetor+i));
    }
    printf("}\n\n");
    printf("\nVetor alterado por meio de aritimetica de ponteiros: { ");
    for (size_t i = 0; i < 5; i++)
    {
        *(vetor+i)*=2;
        printf("%d ",*(vetor+i));
    }
    printf("}\n\n");


}