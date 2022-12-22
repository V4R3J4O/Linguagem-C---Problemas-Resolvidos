#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int matriz1[3][3];
    int quadrado[3][3];
    int soma = 0;
    int contador  = 0;
    int cconstante  = 0;
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matriz1[i][j] = rand()%5;
        }
        
    }
    
    printf("\n\nMatriz A:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",matriz1[i][j]);
        }
        printf("\n");
    }
    
    
    for (size_t g = 0; g < 3; g++)
    {
        for (size_t i = 0; i < 3; i++)
        {
            for (size_t j = 0; j < 3; j++)
            {
                soma += (matriz1[g][j] * matriz1[j][i]);
            }
            quadrado[g][i] = soma;
            soma = 0;
            
        }
    }
    
    

    printf("\n\nMatrizA ao quadrado:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",quadrado[i][j]);
        }
        printf("\n");
    }
}