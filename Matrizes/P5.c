#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int valor, linha, coluna, achou = 0;
    int matriz[5][5];

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            matriz[i][j] = rand()%89 +10;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nQue valor voce deseja encontrar na matriz: ");
    scanf("%d",&valor);

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (matriz[i][j] == valor)
            {
                achou = 1;
                linha = i;
                coluna = j;
            }
            
        }
        
    }
    if (achou == 1)
    {
        printf("\n\n%d encontra-se na linha: %d, coluna: %d\n\n",valor,linha,coluna);
    }
    else
    {
        printf("\n\nValor nao esta presente na matriz!\n\n");
    }
    
    
}