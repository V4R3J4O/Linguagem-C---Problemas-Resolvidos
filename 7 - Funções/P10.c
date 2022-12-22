#include <stdio.h>

void maior (float a, float b)
{
    if (a > b)
    {
        printf("\n\n%0.2f e maior que %0.2f\n\n",a,b);
    }
    if (a < b)
    {
        printf("\n\n%0.2f e maior que %0.2f\n\n",b,a);
    }
    if (a == b)
    {
        printf("\n\n%0.2f e igual a %0.2f\n\n",a,b);
    }
    
}

int main (void)
{
    float num1,num2;
    printf("Digite o primeiro valor: ");
    scanf(" %f", &num1);
    printf("\nDigite o segundo valor: ");
    scanf(" %f", &num2);

    maior(num1,num2);
}