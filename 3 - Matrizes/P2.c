#include <stdio.h>

int main (void)
{
    int matriz[5][5];

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}