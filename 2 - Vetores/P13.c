#include <stdio.h>

int main()
{
    int vetor [5];
    int maior, menor;
    int posicao1=0;
    int posicao2=0;

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
            posicao1 = i;
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posicao2 = i;
        }
        
    }

    printf("\n\nVetor = { ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",vetor[i]);
    }

    printf("}\n");

    printf("O maior valor: %d fica na posicao: %d \nO menor valor: %d fica na posicao: %d\n\n",maior,posicao1,menor,posicao2);
    

    return 0;
}