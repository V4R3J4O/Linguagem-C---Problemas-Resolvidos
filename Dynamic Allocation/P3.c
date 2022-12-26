#include <stdio.h>
#include <stdlib.h>

int main (void){

    int tam;
    printf("Qual o tamnho do vetor que deseja criar: ");
    scanf("%d",&tam);
    getchar();

    int *vet = calloc(1,tam*sizeof(int));
    printf("\n\n");

    for (size_t i = 0; i < tam; i++)
    {
        printf("Digite o valor a ser armazenado na posicao %d: ",i);
        scanf("%d",&vet[i]);
        getchar();
    }
    
    printf("\n\nVetor criado dinamicamente = { ");

    for (int j = 0; j < tam; j++)
    {
        printf("%d ",vet[j]);
    }
    printf("}\n\n");
}