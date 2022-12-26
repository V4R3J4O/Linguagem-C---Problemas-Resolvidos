#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int **mat;
    mat = malloc(4 * sizeof(int*));

    for (int i = 0; i < 4; i++)
    {
        mat[i] = malloc(3*sizeof(int));       
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            mat[i][j] = rand()%100;
            printf("%02d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    free(mat);
}