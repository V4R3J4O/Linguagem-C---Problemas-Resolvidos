#include <stdio.h>

int main (void)
{
    char gabarito[10] = {"acdeeccbad"};
    int matricula[3];
    char respostas[3][10];
    float aprovados = 0;
    int acertos = 0;

    for (size_t i = 0; i < 3; i++)
    {
        printf("Digite a matricula do Aluno %d: \n",i);
        scanf("%d",&matricula[i]);
        printf("Insira o gabarito do aluno [%d]: \n",matricula[i]);
        
        for (size_t j = 0; j < 10; j++)
        {
            scanf(" %c",&respostas[i][j]);
        }
        printf("\n");
    }
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            if (respostas[i][j] == gabarito[j])
            {
                acertos++;
            }
            
        }
        if (acertos >= 7)
        {
            aprovados++;
        }
        printf("\nAluno [%d]: obteve nota %d",matricula[i],acertos);
        acertos = 0;
    }

    printf("\nO percentual de aprovacao da turma foi de %0.f%% \n\n",aprovados/3*100);
}