#include <stdio.h>

int main (void)
{
    float soma = 1;
    int harmonico;

    printf("De fina o 'n' para A serie Harmonica H(n): \n");
    scanf("%d",&harmonico);

    printf("\n\n");

    printf ("H(%d) = 1  ",harmonico);

    for (float i = 2; i <= harmonico; i++)
    {
        printf("+ (1/%0.1f) ",i);
        soma = soma + (1/i);
    }
    
    printf(" = %0.5f",soma);
}