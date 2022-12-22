#include <stdio.h>

int main (void)
{
    int vetor[10];
    int contador = 1;
    int memoria;
    int k = 0;

    while (contador <= 10)
    {
        printf("\nInsira um valor %d: ",k);
        scanf("%d",&vetor[k]);
        k++;
        
        for (size_t i = 0; i < k; i++)
        {
            for (size_t j = 0; j < k; j++)
            {
                if (vetor[j]>vetor[i])
                {
                    
                    memoria = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = memoria;
                }
                
            }
            
        }
        contador++;
    }
    
    printf("\nVetor inserido ordenado de forma crescente: { ");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n\n");
}