#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int matrizA[4][4];
    int matrizB[4][4];
    int matrizC[4][4];

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            matrizA[i][j] = rand()%9;
            matrizB[i][j] = rand()%9;
            if (matrizA[i][j] >= matrizB[i][j])
            {
                matrizC[i][j] = matrizA[i][j];
            }
            else
            {
                matrizC[i][j] = matrizB[i][j];
            }
            
            
        }
        
    }
    
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d ",matrizA[i][j]);
        }
        printf("    ");
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d ",matrizB[i][j]);
        }
        printf("    ");
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d ",matrizC[i][j]);
        }
        printf("\n");
    }
    
}