#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int matriz[20][20];

    for (size_t i = 0; i < 20; i++)
    {
        for (size_t j = 0; j < 20; j++)
        {
            matriz[i][j] = rand()%100;
        }
        
    }
    
    for (size_t i = 0; i < 20; i++)
    {
        for (size_t j = 0; j < 20; j++)
        {
            printf("%02d ",matriz[i][j]);
        }
        printf("\n");
    }

    long long int produto = 0;
    long long int maior;
    int linha, coluna;
    int ordenacao;

    for (size_t i = 0; i < 20; i++)
    {
        for (size_t j = 0; j < 20; j++)
        {
            //                                  HORIZONTAL DIREITA ->   
            if (j <= 15)
            {
                produto = (matriz[i][j]*matriz[i][j+1]*matriz[i][j+2]*matriz[i][j+3]*matriz[i][j+4]);
                if (i == 0 && j == 0)
                {
                    maior = produto;
                    linha = i;
                    coluna = j;
                    ordenacao = 0;
                }
                if (produto > maior)
                {
                    maior = produto;
                    linha = i;
                    coluna = j;
                    ordenacao = 0;
                }
                
            }

            //                                  HORIZONTAL ESQUERDA ->

            if (j >= 4)
            {
                produto = (matriz[i][j]*matriz[i][j-1]*matriz[i][j-2]*matriz[i][j-3]*matriz[i][j-4]);
                if (produto > maior)
                {
                    maior = produto;
                    linha = i;
                    coluna = j;
                    ordenacao = 1;
                }
            }

            //                                  VERTICAL CIMA ->

            if (i >= 4)
            {
                produto = (matriz[i][j]*matriz[i-1][j]*matriz[i-2][j]*matriz[i-3][j]*matriz[i-4][j]);
                if (produto > maior)
                {
                    maior = produto;
                    linha = i;
                    coluna = j;
                    ordenacao = 2;
                }
            }

            //                                  VERTICAL BAIXO ->
            
            if (i <= 15)
            {
                produto = (matriz[i][j]*matriz[i+1][j]*matriz[i+2][j]*matriz[i+3][j]*matriz[i+4][j]);
                if (produto > maior)
                {
                    maior = produto;
                    linha = i;
                    coluna = j;
                    ordenacao = 3;
                }
            }

            //                                  DIAGONAL SUPERIOR DIREITA ->

            if (i >= 4 && j <= 15 && j >= 4)
            {
                produto = (matriz[i][j]*matriz[i-1][j+1]*matriz[i-2][j+2]*matriz[i-3][j+3]*matriz[i-4][j+4]);
                if (produto > maior)
                {
                    maior = produto;
                    linha = i;
                    coluna = j;
                    ordenacao = 4;
                }
            }
            
            //                                  DIAGONAL SUPERIOR ESQUERDA ->

            if (i >= 4 && j >= 4)
            {
                produto = (matriz[i][j]*matriz[i-1][j-1]*matriz[i-2][j-2]*matriz[i-3][j-3]*matriz[i-4][j-4]);
                if (produto > maior)
                {
                    maior = produto;
                    linha = i;
                    coluna = j;
                    ordenacao = 5;
                }
            }
            
            //                                  DIAGONAL INFERIOR DIREITA ->

            if (i <= 15 && j <= 15)
            {
                produto = (matriz[i][j]*matriz[i+1][j+1]*matriz[i+2][j+2]*matriz[i+3][j+3]*matriz[i+4][j+4]);
                if (produto > maior)
                {
                    maior = produto;
                    linha = i;
                    coluna = j;
                    ordenacao = 6;
                }
            }
            
            //                                  DIAGONAL INFERIOR ESQUERDA ->

            if (i <= 15 && j >= 4 && j <= 15)
            {
                produto = (matriz[i][j]*matriz[i+1][j-1]*matriz[i+2][j-2]*matriz[i+3][j-3]*matriz[i+4][j-4]);
                if (produto > maior)
                {
                    maior = produto;
                    linha = i;
                    coluna = j;
                    ordenacao = 7;
                }
            }
            
            
            
            
            
        }
        
    }
    
    printf("\n\nO maior produto feito a partir da combinacao ordenada de 5 elementos da matriz e igual a: %lld",maior);
    printf("\nO valor e obtido a partir do elemento localizado na linha: %d, coluna: %d na orientacao: ",linha,coluna);

    switch (ordenacao)
    {
    case 0:
        printf("HORIZONTAL DIREITA.");
        printf("\n\n");
        printf("%d * %d * %d * %d * %d = %lld",matriz[linha][coluna],matriz[linha][coluna+1],matriz[linha][coluna+2],matriz[linha][coluna+3],matriz[linha][coluna+4],maior);
        printf("\n\n");
        break;
    case 1:
        printf("HORIZONTAL ESQUERDA.");
        printf("\n\n");
        printf("%d * %d * %d * %d * %d = %lld",matriz[linha][coluna],matriz[linha][coluna-1],matriz[linha][coluna-2],matriz[linha][coluna-3],matriz[linha][coluna-4],maior);
        printf("\n\n");
        break;
    case 2:
        printf("VERTICAL CIMA.");
        printf("\n\n");
        printf("%d * %d * %d * %d * %d = %lld",matriz[linha][coluna],matriz[linha-1][coluna],matriz[linha-2][coluna],matriz[linha-3][coluna],matriz[linha-4][coluna],maior);
        printf("\n\n");
        break;
    case 3:
        printf("VERTICAL BAIXO.");
        printf("\n\n");
        printf("%d * %d * %d * %d * %d = %lld",matriz[linha][coluna],matriz[linha+1][coluna],matriz[linha+2][coluna],matriz[linha+3][coluna],matriz[linha+4][coluna],maior);
        printf("\n\n");
        break;
    case 4:
        printf("DIAGONAL SUPERIOR DIREITA.");
        printf("\n\n");
        printf("%d * %d * %d * %d * %d = %lld",matriz[linha][coluna],matriz[linha-1][coluna+1],matriz[linha-2][coluna+2],matriz[linha-3][coluna+3],matriz[linha-4][coluna+4],maior);
        printf("\n\n");
        break;
    case 5:
        printf("DIAGONAL SUPERIOR ESQUERDA.");
        printf("\n\n");
        printf("%d * %d * %d * %d * %d = %lld",matriz[linha][coluna],matriz[linha-1][coluna-1],matriz[linha-2][coluna-2],matriz[linha-3][coluna-3],matriz[linha-4][coluna-4],maior);
        printf("\n\n");
        break;
    case 6:
        printf("DIAGONAL INFERIOR DIREITA.");
        printf("\n\n");
        printf("%d * %d * %d * %d * %d = %lld",matriz[linha][coluna],matriz[linha+1][coluna+1],matriz[linha+2][coluna+2],matriz[linha+3][coluna+3],matriz[linha+4][coluna+4],maior);
        printf("\n\n");
        break;
    case 7:
        printf("DIAGONAL INFERIOR ESQUERDA.");
        printf("\n\n");
        printf("%d * %d * %d * %d * %d = %lld",matriz[linha][coluna],matriz[linha+1][coluna-1],matriz[linha+2][coluna-2],matriz[linha+3][coluna-3],matriz[linha+4][coluna-4],maior);
        printf("\n\n");
        break;
    
    default:
        
        break;
    }
}