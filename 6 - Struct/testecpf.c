#include <stdio.h>
#include <stdlib.h>


int main (void){
    int vet[11];
    printf("Digite seu CPF: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d",vet);
    printf("\n\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d",vet[i]);
    }
    
}