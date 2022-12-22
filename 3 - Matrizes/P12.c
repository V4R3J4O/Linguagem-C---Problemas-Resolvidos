#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main (void)
{
    srand(time(NULL));
    int matriz[3][2];
    int transposta[2][3];

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            matriz[i][j] = rand()%50;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            transposta[i][j] = matriz[j][i];
            printf("%d ",transposta[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}