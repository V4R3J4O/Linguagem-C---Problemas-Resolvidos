#include <stdio.h>

int main (void)
{
    int matriz[4][4];

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            matriz[i][j] = i*j;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}