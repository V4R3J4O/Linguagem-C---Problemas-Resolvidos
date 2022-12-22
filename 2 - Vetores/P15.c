#include <stdio.h>

int main (void)
{
    int vetor[20];
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
                printf("\n %d  ja foi inserido antes na posicao %d\nPor favor insira um novo numero...\n",vetor[i],j);
                i--;
            }
            
        }
        contador = 1;
    }
    
}