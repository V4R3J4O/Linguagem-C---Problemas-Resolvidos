#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int tam, multiplo;
    printf("\n\n\nDigite o tamnho do vetor que deseja criar: ");
    scanf("%d",&tam);
    int *vet = malloc(tam *sizeof(int));
    int cont = 0;
    printf("Agora informe o numero que deseja encontrar os respectivos multiplos no vetor: ");
    fflush(stdin);
    scanf("%d",&multiplo);

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor a ser armazenado na posicao %d: ",i);
        scanf("%d",&vet[i]);
        fflush(stdin);
        if (vet[i]%multiplo == 0)
        {
            cont++;
        }
    }

    printf("\n\nExistem %d multiplo(s) de %d neste vetor : { ",cont,multiplo);
    for (int j = 0; j < tam; j++)
    {
        if (vet[j]%multiplo == 0)
        {
            printf("%d ",vet[j]);
        }
        
    }
    printf("}\n\n");
    free(vet);
    
}