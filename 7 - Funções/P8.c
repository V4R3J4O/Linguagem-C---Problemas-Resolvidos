#include <stdio.h>
#include <math.h>

float hipotenusa (float x, float f)
{
    return sqrt((pow(x,2)+pow(f,2)));
}

int main (void)
{
    float a,b;
    printf("Digite o valor do cateto A: ");
    scanf(" %f",&a);
    printf("\nDigite o valor do cateto B: ");
    scanf(" %f",&b);

    printf("\nOvalor da Hipotenusa e : %0.1f\n\n",hipotenusa(a,b));
}