#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int tam;
    printf("Qual o tamanho do array que deseja criar: ");
    scanf("%d",&tam);
    int *vet = malloc(tam*sizeof(int));


    printf("\n\n");
    for (int i = 0; i < tam; i++)
    {
        printf("Foreca o valor a ser armazenado na posicao %d: ",i);
        scanf("%d",&vet[i]);
        fflush(stdin);
    }
    printf("\n\nVetor criado dinamicamente = { ");

    for (int j = 0; j < tam; j++)
    {
        printf("%d ",vet[j]);
    }
    printf("}\n\n");
    free(vet);
}