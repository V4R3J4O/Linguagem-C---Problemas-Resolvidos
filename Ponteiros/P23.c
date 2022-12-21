#include <stdio.h>

void imprimevet (int vet[],int tam, int linhas){

    int imprime = 0;
    int maior;
    for (int i = 0; i < (tam/linhas); i++)
    {
        for (int j = 0; j < linhas; j++)
        {
            if (j == 0)
            {
                maior = vet[imprime];
                printf("%02d ",vet[imprime]);
                imprime += 1;
            }
            else
            {
                printf("%02d ",vet[imprime]);
                if (maior < vet[imprime])
                {
                    maior = vet[imprime];
                }
                imprime+=1;   
            }  
        }
        printf("\t\tMaior elemento da linha: %d\n",maior);
    }
    
}


int main (void)
{
    int tam, linhas;
    printf("Qual o tamnho do array de inteiros que deseja criar: ");
    scanf("%d",&tam);
    fflush(stdin);
    printf("\n\n");

    int contador = 0;
    int vet[tam];
    do
    {
        printf("\nDigite um valor para a posicao %d: ",contador);
        scanf("%d",&vet[contador]);
        fflush(stdin);
        contador += 1;

    } while (contador < tam);

    do
    {
        printf("\n\nAgora informe quantos elementos por linha deseja imprimir (note que quantidade de elementos por linhas deve ser um numero divisor do tamnho do array): ");
        scanf("%d",&linhas);
        fflush(stdin);
        if (linhas == 0)
        {
            do
            {
                printf("\nO numero de elementos por linhas nao pode ser zero -");
                printf("\n\nAgora informe quantos elementos por linha deseja imprimir (note que quantidade de elementos por linhas deve ser um numero divisor do tamnho do array): ");
                scanf("%d",&linhas);
                fflush(stdin);
            } while (linhas == 0);
        }
        
        
    } while (tam%linhas != 0);
    
    
    imprimevet(vet,tam,linhas);
    
}