#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int matriz [5][4] = {0};
    float soma = 0;
    int maior;
    int aluno;
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                printf("Digite o numero da matricula do aluno: ");
                scanf(" %d",&matriz[i][j]);
                printf("\n");
            }
            else if (j == 1)
            {
                printf("Digite a media das provas: ");
                scanf(" %d",&matriz[i][j]);
                printf("\n");
            }
            else if (j == 2)
            {
                printf("Digite a media dos trabalhos: ");
                scanf(" %d",&matriz[i][j]);
                printf("\n");
            }
            else
            {
                matriz[i][j] = matriz[i][j-1]+matriz[i][j-2];
                soma += matriz[i][j];
                if (i == 0)
                {
                    maior = matriz[i][j];
                }
                else
                {
                    if (matriz[i][j] > maior)
                    {
                        maior = matriz[i][j];
                        aluno = matriz[i][0];
                    }
                    
                }
                
                
            }
            
        }
        
    }
    printf("\n");
/*    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
*/
    printf("O aluno que obteve a maior nota final foi o aluno %d com nota = %d\n",aluno, maior);
    printf("A media aritimedica das notas finais foi: %0.2f\n\n",soma/5);
}