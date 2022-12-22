#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int vetor[10];
    int par[10] = {0};
    int impar[10] = {0};
    int contapar = 0;
    int contaimpar = 0;

    for (size_t i = 0; i < 10; i++)
    {
        vetor[i] = rand()%100;
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        if (vetor[i]%2 == 0)
        {
            par[contapar] = vetor[i];
            contapar++;
        }
        else
        {
            impar[contaimpar] = vetor[i];
            contaimpar++;
        }
        
    }
    
    
    
    printf("Vetor gerado = { ");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n\n");

    printf("Vetor que armazena os numeros pares = { ");
    for (size_t i = 0; i < 10; i++)
    {
        if (par[i]!=0)
        {
            printf("%d ", par[i]);
        }
        
        
    }
    printf("}\n");

    printf("Vetor que armazena os numeros impares = { ");
    for (size_t i = 0; i < 10; i++)
    {
        if (impar[i]!=0)
        {
            printf("%d ",impar[i]);
        }
        
        
    }
    printf("}\n\n");

    printf("Foram usadas %d posicoes do vetor par e %d posicoes do vetor impar!\n\n",contapar,contaimpar);
}