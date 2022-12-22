#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int matriz[10][10];
    int maior;
    int linha, coluna;

    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            matriz[i][j] = rand()%50;
            if (i == 0 && j == 0)
            {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
            printf("%d ",matriz[i][j]);
            
        }
        printf("\n");
    }
    printf("\nO maior elemento dessa matriz e igual a %d e esta localizado na linha: %d, coluna: %d\n\n",maior,linha,coluna);
}