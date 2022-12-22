#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    float matrizA [3][6];
    float soma = 0, media = 0;
    
    printf("-----------MATRIZ ORIGINAL------------");
    printf("\n\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            matrizA[i][j] = (rand()%200)/1.9;
            printf("%0.1f  ",matrizA[i][j]);
            if (j%2 != 0)
            {
                soma += matrizA[i][j];
            }
            if (j == 1 || j == 3)
            {
                media += matrizA[i][j];
            }
            
            
        }
        printf("\n\n");
    }
    printf("--------------------------------------\n\n");
    printf("A soma dos elementos das colunas impares e: %0.1f\n",soma);
    printf("A media aritmedica dos elementos da segunda e quarta coluna e: %0.1f\n",media/12);

    printf("\n\n");

    printf("----------MATRIZ MODIFICADA-----------");
    printf("\n\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            if (j == 5)
            {
                matrizA[i][j] = matrizA[i][1] + matrizA[i][2];   
            }
            
            printf("%0.1f  ",matrizA[i][j]);
                
        }
        printf("\n\n");
    }
    printf("--------------------------------------\n\n");
}