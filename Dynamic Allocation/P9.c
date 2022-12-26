#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *vet, tam = 1, contador = 0;

    vet = calloc(1, tam * sizeof(int));

    printf("Digite o valor na posicao %d: ",contador);
    scanf("%d",&vet[contador]);
    getchar();
    tam++;

    while (vet[contador] >= 0)
    {
        contador++;
        vet = realloc(vet,tam * sizeof(int));
        printf("Digite o valor na posicao %d: ",contador);
        scanf("%d",&vet[contador]);
        getchar();
        tam++;
    
    }
    
    printf("\n\nVetor inserido : { ");
    for (int i = 0; i < tam -1; i++)
    {
        printf("%d ",vet[i]);
    }
    printf("}\n\n");
    free(vet);

}