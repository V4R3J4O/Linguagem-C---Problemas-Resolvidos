#include <stdio.h>

int main (void)
{
    int valor;
    int i = 0;
    float soma = 0;


    printf("Digite valores, ate que tenham sido digitados um total de 10 valores positivos: \n");

    while (i!=10)
    {
        scanf("%d",&valor);
        if (valor >= 0)
        {
            soma+=valor;
            i++;
        }
        
    }
    
    printf("\n\nA media dos valores positivos digitados e: %0.2f",soma/10);
}