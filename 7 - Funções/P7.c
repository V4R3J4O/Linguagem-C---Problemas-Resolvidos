#include <stdio.h>
#include <math.h>

float fahrenheit (float x)  
{
    return x * (9.0/5) +32;
}

int main (void)
{
    printf("Qual a temperatura em celcius: ");
    float temperatura;
    scanf(" %f", &temperatura);

    printf("\nA temperatura convertida para Fahrenheit: %0.1fF\n\n",fahrenheit(temperatura));
}