#include <stdio.h>

int main (void)
{
    int valor;
    int soma = 0;

    printf("Digite um numero inteiro positivo\n Sera realizada a soma de todos os seus antecessores ate o 0. : ");
    scanf("%d",&valor);
    for (int i = 0; i <= valor; i++)
    {
        soma+=i;
    }
    printf("\n\nA soma e igual a: %d",soma);
}