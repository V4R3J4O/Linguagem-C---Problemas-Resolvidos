#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));
    int tam;
    double *vet;
    
    printf("\n\nQual o tamnho do vetor que deseja inserir: ");
    scanf("%d",&tam);
    getchar();

    vet = malloc(tam * sizeof(double));

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor a ser armazenado na posicao %d: ",i);
        scanf("%lf",&vet[i]);
        getchar();
    }
    printf("\n\nVetor fornecido : { ");
    
    for (int k = 0; k < tam; k++)
    {
        printf("%0.2f ",vet[k]);
    }
    
    printf("}\n\n");
    printf("Size of Interger: %d\nsize of float: %d\nSize of Double: %d",sizeof(int),sizeof(float),sizeof(double));
    return 0;
}