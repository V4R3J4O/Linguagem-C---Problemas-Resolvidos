#include <stdio.h>

int main()
{
    int vetor [5];
    int maior, menor;
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d",&vetor[i]);

        if (i == 0)
        {
            maior = vetor[i];
            menor = vetor[i];
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        
        soma += vetor[i];
    }

    printf("\n\nVetor = { ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",vetor[i]);
    }

    printf("}\n");

    printf("Maior valor do vetor = %d \nMenor valor do vetor = %d \nMedia dos valores do vetor = %d\n\n",maior,menor,soma/5);
    
    

    return 0;
}