#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float matriz[3][3] = {1,2,3,
    4,5,6,
    7,8,9};

    printf("\n\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%0.1f ",matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEndereco de cada posicao da matriz:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("Endereco da posicao M%d%d: %p",i,j,&matriz[i][j]);
            printf("\n");
        }
        
    }
}