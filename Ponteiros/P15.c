#include <stdio.h>
#include <stdlib.h>

void imprimearray (int vet[], int tam)
{
    int contador = 0;

    while (contador <= 9)
    {
        printf("%d\n",*(vet+contador));
        contador++;
    }
    
}
int main (void)
{
    int vetor[10]= {1,2,3,4,5,6,7,8,9,10};
    imprimearray(vetor, 10);
}