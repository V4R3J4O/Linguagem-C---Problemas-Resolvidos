#include <stdio.h>

int main (void)
{
    int ligado = 1;
    float soma = 0;
    int idade;
    int quantidade = 0;

    while (ligado != 0)
    {
        printf("\nInforme a idade (digite \"0\" para finalizar o programa): ");
        scanf("%d",&idade);
        
        if (idade == 0)
        {
            ligado = 0;
        }
        else
        {
            soma+=idade;
            quantidade++;
        }
        
        
    }
    
    printf("\n\nA medida das idades fornecidas e = %0.2f\n\n", soma/quantidade);
}