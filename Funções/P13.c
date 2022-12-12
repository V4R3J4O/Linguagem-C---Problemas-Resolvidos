#include <stdio.h>
#include <stdlib.h>


float calculadora (float x, char g, float f)
{
    switch (g)
    {
    case '+':
        return x + f;
        break;
    case '-':
        return x - f;
        break;
    case '*':
        return x * f;
        break;
    case '/':
        return x / f;
        break;
    
    default:
        break;
    }
}



int main (void)
{
    float a,b;
    char operacao;

    printf("Vamos realizar algumas operacoes matematicas ->\n");
    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("\n\n---------TABELA DE OPERACOES--------");
    printf("\n '+' Para adicao.");
    printf("\n '-' Para subtracao.");
    printf("\n '*' Para multiplicacao.");
    printf("\n '/' Para divisao.\n");
    printf("------------------------------------");
    printf("\nDigite a operacao que deseja fazer: ");
    scanf(" %c", &operacao);
    printf("\nAgora digite outro numero: ");
    scanf(" %f", &b);

    printf("\n\n%0.2f %c %0.2f = %0.2f\n\n",a,operacao,b,calculadora(a,operacao,b));
}