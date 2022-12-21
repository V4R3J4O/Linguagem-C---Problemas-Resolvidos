#include <stdio.h>

int main (void){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptrvet;
    ptrvet = vet;

    for (int i = 0; i < 10; i++)
    {
        *(ptrvet + i) += 1;
    }

    for (int k = 0; k < 10; k++)
    {
        printf("%d ",vet[k]);
    }
    printf("\n\n");
    
}