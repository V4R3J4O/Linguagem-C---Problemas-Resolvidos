#include <stdio.h>

int main (void)
{
    int vetor[6];

    for (int i = 0; i < 6; i++)
    {
        printf("\n");
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }
    printf("\n\nValores armazenados no vetor[6] exibidos na ordem inversa = { ");

    for (int i = 5; i >= 0; i--)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n\n");
}