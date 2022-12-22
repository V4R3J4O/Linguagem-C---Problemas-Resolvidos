#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int vetor[5] = {10, 7 ,8, 4, 5};

    printf("\nVetor: { ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n\n");

    printf("ENDERECO DAS POSICOES QUE COTEM VALORES PARES:\n");
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i]%2 == 0)
        {
            printf("Posicao %d - Conteudo : %d - Endereco de memoria: %p\n",i,vetor[i],&vetor[i]);
        }
        
    }
    
}