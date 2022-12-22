#include <stdio.h>

int main (void)
{
    int vetor[10];
    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        printf("Digite um valor inteiro: ");
        scanf("%d",&vetor[i]);
        
        for (int j = 0; j < i; j++)
        {
            if (vetor[i]==vetor[j] && contador != 0)
            {
                printf("\n %d e um valor que ja foi inserido antes na posicao %d\n",vetor[i],j);
            }
            
        }
        contador = 1;
    }
    
}