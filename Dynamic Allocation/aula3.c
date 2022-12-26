#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int tam, *vet;

    printf("Digite o tamnho do vetor: ");
    scanf("%d",&tam);

    vet = malloc(sizeof(int)*tam);

    if (vet)
    {
        printf("Sucesso\n");
        for (int i = 0; i < tam; i++)
        {
            *(vet+i)= rand()%101;
            printf("%d ",*(vet+i));
        }
    }
    else
    {
        printf("Falha");
    }

}