#include <stdio.h>

int main (void)
{
    float r1,r2;
    float paralelo;
    int ligado = 1;

    while (ligado != 0)
    {
        printf("Digite o valor do primeiro resistor: ");
        scanf("%f",&r1);
        printf("\nAgora digite o valor do segundo resitor: ");
        scanf("%f",&r2);

        if (r1 == 0 || r2 == 0)
        {
            ligado = 0;
            printf("Insira somente valores maiores que zero. Fim do programa!");
        }
        
        if (r1 != 0 && r2 != 0)
        {
            paralelo = (r1*r2)/(r1+r2);
            printf("\n\nO valor da associacao em paralelo de %0.2f e %0.2f = %0.2f\n", r1, r2, paralelo);
        }
        
    }
    
}