#include <stdio.h>

int main (void)
{
    int vetor[10];
    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        printf("Forneca um valor: ");
        scanf("%d",&vetor[i]);

        if (vetor[i]%2 == 0)
        {
            contador++;
        }
        
    }
    
    printf("\n\nForam fornecidos um total de %d numeros pares.\n",contador);

    printf("Valores fornecidos e armazenados no vetor: { ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n\n");

    printf ("Valores pares extraidos dos valores fornecidos = { ");

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i]%2 == 0)
        {
            printf("%d ",vetor[i]);
        }
        
    }
    printf("}\n\n");
}