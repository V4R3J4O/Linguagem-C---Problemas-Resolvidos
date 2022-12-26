#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *arraydinamico;
    
    arraydinamico = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o inteiro aramazenado na posicao %d: ",i);
        scanf("%d",&arraydinamico[i]);
        fflush(stdin);
        printf("\n");
    }
    
    printf("\n\nArray criado e lido dinamicamente = { ");
    for (int j = 0; j < 5; j++)
    {
        printf("%d ",arraydinamico[j]);
    }
    printf("}\n\n");
    free(arraydinamico);

}