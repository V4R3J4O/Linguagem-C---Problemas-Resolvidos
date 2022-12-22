#include <stdio.h>

int main (void)
{
    float b,h;
    float area;

    printf("Digite a base do seu triangulo: ");
    scanf("%f",&b);
    printf("\nDigite agora a altura do seu triangulo: ");
    scanf("%f",&h);
    
    if (b == 0 || h == 0)
    {
        printf("Valor informado invalido!");
    }
    
    if (b&&h != 0)
    {
        area = (b*h)/2;

        printf("\n\nA area do seu triangulo: %0.2f\n\n",area);
    }
    

    

}