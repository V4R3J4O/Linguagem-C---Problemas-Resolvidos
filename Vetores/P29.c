#include <stdio.h>

int main (void)
{
    int vetor[6];
    int contador1 = 0;
    int contador2 = 0;
    int soma = 0;

    for (size_t i = 0; i < 6; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d",&vetor[i]);
        printf("\n");

        if (vetor[i]%2 == 0)
        {
            soma += vetor[i];
            contador1++;
        }
        else
        {
            contador2++;
        }
        
    }

        printf("Valores impares inseridos: ");

    for (size_t i = 0; i < 6; i++)
    {
        if (vetor[i]%2 != 0)
        {
            printf("%d ",vetor[i]);
        }
        
    }

        printf("\n");
        printf("Foram inseridos %d numeros impares!\n",contador2);
        printf("Valores pares inseridos: ");

    for (size_t i = 0; i < 6; i++)
    {
        if (vetor[i]%2 == 0)
        {
            printf("%d ",vetor[i]);
        }
        
    }

    printf("\nA soma dos numeros pares inseridos e igual a %d\n\n", soma);
    
    
}