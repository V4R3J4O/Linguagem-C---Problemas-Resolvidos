#include <stdio.h>

int main (void)
{
    int soma = 0;
    int valor;

    printf("Digite 10 valores inteiros: \n");

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d",&valor);
        soma = soma + valor;
    }
    
    printf ("\n\n A soma dos Valores Digitados é: %d", soma);
}