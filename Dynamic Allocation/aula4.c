#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
    srand(time(NULL));
    int tam, *vet;
    printf("Digite o tamnho do vetor: ");
    scanf("%d",&tam);
    vet = malloc(tam* sizeof(int));


    if (vet)
    {
        printf("Memoria Alocada com Sucesso!\n");
        printf("Vetor : { ");
        for (int i = 0; i < tam; i++)
        {
            *(vet+i) = rand()%101;
            printf("%d ",*(vet+i));

        }
        printf("}\n\n");
        
        printf("Digite um novo tamanho para o vetor: ");
        fflush(stdin);
        scanf("%d",&tam);

        vet = realloc(vet,tam*sizeof(int));

        printf("Vetor Reallocado : { ");
        for (int i = 0; i < tam; i++)
        {         
            printf("%d ",*(vet+i));
        }
        printf("}\n\n");
        free(vet);
    }
    else
        printf("\nErro ao alocar memoria!\n\n");
    return 0;
} 