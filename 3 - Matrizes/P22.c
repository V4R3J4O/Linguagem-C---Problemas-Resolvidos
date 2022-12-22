#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int matriz1[3][3];
    int matriz2[3][3];
    int multiplicao[3][3];
    int soma = 0;
    int contador  = 0;
    int cconstante  = 0;
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matriz1[i][j] = rand()%3;
            matriz2[i][j] = rand()%3;
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
    
    printf("\n\nMatriz B:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",matriz2[i][j]);
        }
        printf("\n");
    }
 /* 
    while (contador <= 3)
    {
        for (size_t i = 0; i < 3; i++)
        {
            for (size_t j = 0; j < 3; j++)
            {
                soma += (matriz1[cconstante][j] * matriz2[j][i]);
            }
            multiplicao[cconstante][i] = soma;
            soma = 0;
            
        }
        cconstante++;
        contador++;
    }
    */
    
    for (size_t g = 0; g < 3; g++)
    {
        for (size_t i = 0; i < 3; i++)
        {
            for (size_t j = 0; j < 3; j++)
            {
                soma += (matriz1[g][j] * matriz2[j][i]);
            }
            multiplicao[g][i] = soma;
            soma = 0;
            
        }
    }
    
    

    printf("\n\nMatrizA * MatrizB:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",multiplicao[i][j]);
        }
        printf("\n");
    }
}