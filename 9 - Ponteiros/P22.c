#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumvet (int vet1[], int tam1, int vet2[], int tam2, int vet3[]){

if (tam1 != tam2)
{
    return 0;
}
else
{
    for (int i = 0; i < tam1; i++)
    {
        vet3[i]=vet1[i]+vet2[i];
    }
    return 1;
}


}


int main (void){
    printf("Qual o tamnho que deseja para o primeiro array de inteiros: ");
    int tam1;
    scanf("%d",&tam1);
    fflush(stdin);
    printf("\nQual o tamnho que deseja para o segundo array de inteiros: ");
    int tam2;
    scanf("%d",&tam2);

    int vet1[tam1];
    printf("\n\n");
    for (int i = 0; i < tam1; i++)
    {
        vet1[i]= rand()%101;
        printf("%d ",vet1[i]);
    }
    printf("\n\n");
    int vet2[tam2];
    for (int j = 0; j < tam2; j++)
    {
        vet2[j] = rand()%101;
        printf("%d ",vet2[j]);
    }
    printf("\n\n");

    int sum[tam1];
    if (sumvet(vet1,tam1,vet2,tam2,sum))
    {
            printf("\n\nResultado do array soma: = {");
            for (int i = 0; i < tam1; i++)
            {
                printf(" %d ",sum[i]);
            }
            printf("}\n\n");
    }
    else
        printf("\n\nERROR 403: ARRAYS POSSUEM TAMANHOS DIFERENTES!\n\n");
    

}