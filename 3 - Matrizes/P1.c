#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int matriz[4][4];
    int contador =0;

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            matriz[i][j] = rand()%30;
            if (matriz [i][j] > 10)
            {
                contador++;
            }
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nExistem %d numeros maiores que 10 nesta matriz!\n\n",contador);
}