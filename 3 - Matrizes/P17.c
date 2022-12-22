#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int resultados [10][3];
    int menor1, aluno1;
    int menor2, aluno2;
    int menor3, aluno3;

    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            resultados[i][j] = rand()%10;
            
            if (i == 0 && j == 0)
            {
                menor1 = resultados[i][j];
                aluno1 = i;
            }
            if (i == 0 && j == 1)
            {
                menor2 = resultados[i][j];
                aluno2 = i;
            }
            if (i == 0 && j == 2)
            {
                menor3 = resultados[i][j];
                aluno3 = i;
            }   
        }   
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                if (resultados[i][j] < menor1)
                {
                    menor1 = resultados[i][j];
                    aluno1 = i;
                }
                
            }
            if (j == 1)
            {
                if (resultados[i][j] < menor2)
                {
                    menor2 = resultados[i][j];
                    aluno2 = i;
                }
                
            }
            if (j == 2)
            {
                if (resultados[i][j] < menor3)
                {
                    menor3 = resultados[i][j];
                    aluno3 = i;
                }
            }
        } 
    }


    printf("MATRIZ COM AS NOTAS DOS ALUNOS - CADA LINHA REPRESENTA UM ALUNO E CADA COLUNA SUA NOTA NA PROVA:\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("Notas do aluno %d: ",i);
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",resultados[i][j]);
        }
        printf("\n");
    }
    
    printf("\nO pior aluno na PRIMEIRA prova foi: %d com nota: %d\n",aluno1,menor1);
    printf("O pior aluno na SEGUNDA prova foi: %d com nota: %d\n",aluno2,menor2);
    printf("O pior aluno na TERCEIRA prova foi: %d com nota: %d\n\n",aluno3,menor3);
}