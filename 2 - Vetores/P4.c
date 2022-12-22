#include <stdio.h>

int main (void)
{
    int vetor[8];
    int a,b;


    for (int i = 0; i < 8; i++)
    {
        printf("\n");
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }
    printf("\n\nValores armazenados no vetor[8] = {");

    for (int i = 0; i < 8; i++ )
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n\n");

    printf("Some duas posicoes deste vetor.\n");
    printf("Escolha uma posicao presente no interval [0,7]: ");
    scanf("%d",&a);
    printf("\nEscolha outra posicao presente no interval [0,7]: ");
    scanf("%d",&b);

    printf("\n\nA soma dos valores armazenados nas posicoes %d e %d = %d\n\n",a,b,vetor[a]+vetor[b]);
}