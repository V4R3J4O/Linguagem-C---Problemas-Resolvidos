#include <stdlib.h>
#include <stdio.h>


void modificaA (int *a, int *b)
{
    *a += *b;
}

int main (void)
{
    int a,b;
    printf ("Digite o valor da primeira variavel: ");
    scanf("%d",&a);
    printf ("Digite o valor da segunda variavel: ");
    scanf(" %d",&b);

    modificaA(&a,&b);

    printf("\nNovo valor da primeira variavel: %d\nValor permanente da segunda variavel: %d\n\n",
    a,b);
}