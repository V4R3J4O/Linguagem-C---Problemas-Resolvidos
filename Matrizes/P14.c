#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int bingo[5][5];

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            bingo[i][j] = rand()%99;
        }   
    }

    int ligado = 1;
    int achou = 0;
    int verifica;

    while (ligado == 1)
    {
        for (size_t i = 0; i < 5; i++)
        {
            for (size_t j = 0; j < 5; j++)
            {
                for (size_t g = 0; g < 5; g++)
                {
                    for (size_t f = 0; f < 5; f++)
                    {
                        if (bingo[i][j] == bingo[g][f] && (g != i || f != j))
                        {
                            achou++;
                            bingo[i][j] = rand()%99;
                        }
                        
                    }
                    
                }
                               
            }
            
        }
        if (achou == 0)
        {
            ligado = 0;
        }
        if (achou != 0)
        {
            achou = 0;
        }    
    }
    
    
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("%d ",bingo[i][j]);
        }
        printf("\n");
    }
    
}