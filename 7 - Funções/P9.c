#include <stdio.h>
#include <math.h>

float cilindro (float h, float r)
{
    return M_PI * pow(r,2) * h;
}

int main (void)
{
    float altura, raio;
    printf("Digite o valor da altura do cilindro: ");
    scanf(" %f", &altura);
    printf("\nDigite o valor do raio do cilindro: ");
    scanf(" %f", &raio);

    printf("\n\nO volume do cilindro e de: %0.2f\n\n", cilindro(altura,raio));
}