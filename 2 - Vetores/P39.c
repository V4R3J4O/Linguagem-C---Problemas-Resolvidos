#include <stdio.h>

int main (void)
{
    int linha;
    printf("Digite ate que linha do tringulo de pascal voce quer imprimir? ");
    scanf("%d",&linha);

    int vetor[100];
    int memoria[100]={1,1};

    int contador = 1; 

    while (contador <= linha)
    {
        printf("\n");
        for (size_t i = 0; i < contador; i++)
        {
            if (contador <= 2)
            {
                printf("%d ",memoria[i]);
            }
            
            if (contador >= 3)
            {   
                if (i != 0 || i != contador - 1)
                {
                    vetor[i] = memoria[i] + memoria[i-1];
                }
                if (i == 0 || i == contador-1)
                {
                    vetor[0] = 1;
                    vetor[contador-1] = 1;
                }
                
                printf("%d ", vetor[i]);
            }
            
        }
        if (contador > 2)
        {
            for (size_t i = 0; i < 100; i++)
            {
                memoria[i]=vetor[i];
            }
        }
        contador++;
        
    }
}