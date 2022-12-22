#include <stdio.h>

int main (void)
{
    float chico = 1.5;
    float ze = 1.1;
    int anos = 0;

    while (ze <= chico)
    {
        chico += 0.02;
        ze += 0.03;
        anos++;
        printf("----------------------ANO %d-------------------\n",anos);
        printf("Altura do Chico: %0.2f,   Altura do Ze: %0.2f\n\n", chico, ze);
    }
    
    printf("\nLevara um total de %d, para que o Ze se torne maior que o Chico.\n\n",anos);
}