#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int matriz[3][3];
    int soma = 0;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matriz[i][j] = rand()%50;

            if (i > j)
            {
                soma += matriz[i][j];
            }
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\nA soma dos elementos abaixo da diagonal e igual a: %d\n\n",soma);

}