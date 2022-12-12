#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int acertos = 0;
    char notas[5][10];

    char gabarito[10] = {"abcdaacbcd"};

    for (size_t i = 0; i < 5; i++)
    {
        printf("\nDigite o gabarito do aluno %d: \n",i);
        for (size_t j = 0; j < 10; j++)
        {
            if (i == 0 && j == 0)
            {
                scanf("%c",&notas[i][j]);
            }
            else
            scanf(" %c",&notas[i][j]);
        }
        
    }

    printf("\n\n");
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            printf("%c ", notas[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            if (notas[i][j] == gabarito[j])
            {
                acertos++;
            }
            
        }
        printf("Aluno %d: %d acertos!\n",i,acertos);
        acertos = 0;
    }
    
}