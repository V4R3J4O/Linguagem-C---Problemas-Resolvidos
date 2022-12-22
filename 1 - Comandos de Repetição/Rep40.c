#include <stdio.h>

int main (void)
{
    int n;

    while (n >= 0)
    {
        printf ("Digite um numero inteiro positivo: ");
        scanf("%d",&n);
        printf ("\n");
    }

    printf ("%d nao e um numero positivo.",n);
}