#include <stdio.h>

int duplicate (int number)
{
    return number * 2;
}

int main (void)
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf(" %d",&num);

    printf("\nEste e o valor dobrado do numero fornecido utilizando a funcao duplicate: %d\n\n", duplicate(num));
}