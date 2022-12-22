#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int matrizA[2][2];
    int matrizB[2][2];
    int soma[2][2];
    int subtracao[2][2];
    int constante;
    int opcao;
    int ligado = 1;

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            matrizA[i][j] = rand()%100;
            matrizB[i][j] = rand()%100;
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
            subtracao[i][j] = matrizB[i][j] - matrizA[i][j];
        }
        
    }
    
    printf("---------------------------------------------------\n\n");
    printf("            Foram geradas 2 matriz 2x2\n\n");
    printf("OPCAO 1: Somar e imprimir as duas matrizes.\n");
    printf("OPCAO 2: Subtrair e imprimir as duas matrizes. (MatrizB - MatrizA).\n");
    printf("OPCAO 3: Adicionar uma constante as duas matrizes.\n");
    printf("OPCAO 4: Imprimir as matrizes.\n\n");
    printf("---------------------------------------------------\n\n");

    

    while (ligado == 1)
    {
        
        printf("Digite a operacao que deseja que aconteca: ");
        scanf("%d",&opcao);
        printf("\n\n");
        
        
        switch (opcao)
        {
        case 1:
            
            printf("Soma da matrizA com matrizB:\n\n");
            for (size_t i = 0; i < 2; i++)
            {
                for (size_t j = 0; j < 2; j++)
                {
                    printf("%d ",soma[i][j]);
                }
                printf("\n");
            }
            
            break;
        case 2:
            
            printf("Subtracao da matrizB com matrizA:\n\n");
            for (size_t i = 0; i < 2; i++)
            {
                for (size_t j = 0; j < 2; j++)
                {
                    printf("%d ",subtracao[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            
            printf("Digite a constante que deseja adicionar as duas matrizes: ");
            scanf(" %d",&constante);
            for (size_t i = 0; i < 2; i++)
            {
                for (size_t j = 0; j < 2; j++)
                {
                    matrizA[i][j] += constante;
                    matrizB[i][j] += constante;
                }
                
            }
            
            break;
        case 4:
            printf("matrizA:\n\n");
            for (size_t i = 0; i < 2; i++)
            {
                for (size_t j = 0; j < 2; j++)
                {
                    printf("%d ",matrizA[i][j]);
                }
                printf("\n");
            }
            printf("\nmatrizB:\n\n");
            for (size_t i = 0; i < 2; i++)
            {
                for (size_t j = 0; j < 2; j++)
                {
                    printf("%d ",matrizB[i][j]);
                }
                printf("\n");
            }
            break;
        
        default:
            ligado = 0;
            break;
        }
        printf("\n\n");
    }
    

}