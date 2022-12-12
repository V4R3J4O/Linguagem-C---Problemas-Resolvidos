#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void volumedaesfera (float x)
{
    float volume;

    volume = (4.0/3) * M_PI * pow(x,3);

    printf("\n Este e o volume da esfera de raio %0.2f: %0.2f\n\n",x,volume);
}

int main (void)
{
    float raio;
    printf("Digite o valor do raio da esfera cuja qual quer determinar o seu volume: ");
    scanf(" %f",&raio);
    volumedaesfera(raio);
}