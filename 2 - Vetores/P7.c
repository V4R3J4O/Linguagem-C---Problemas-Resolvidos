#include <stdio.h>

int main (void)
{
    int vetor[10];
    int maior;
    int posicao;

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        printf("Forneca um valor: ");
        scanf("%d",&vetor[i]);      
    }

    printf("Valores fornecidos e armazenados no vetor: { ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n\n");

    maior = vetor[0];

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
        
    }
    printf("O maior valor fornecido foi: %d, que se encontra na posicao [%d]\n\n",maior,posicao);
}