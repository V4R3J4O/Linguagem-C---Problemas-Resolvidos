#include <stdio.h>

int main (void)
{
    int valor;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&valor);

    for (int i = valor; i >= 0; i--)
    {
        printf("%d\n",i);
    }
    
}