#include <stdio.h>
#include <math.h>

int main (void)
{
    int ligado = 1;
    float n;

    while (ligado != 0)
    {
        printf("\nDigite um numero: ");
        scanf("%f",&n);

        if (n <= 0)
        {
            printf("O valor informado e negativo. Fim de programa!");
            ligado = 0;
        }
        else
        {
            printf("%0.2f ao quadrado = %0.2f\n",n,pow(n,2));
            printf("%0.2f ao cubo = %0.2f\n",n,pow(n,3));
            printf("A raiz quadra de %0.2f  = %0.2f\n",n,pow(n,1.0/2));
        }
        
        
    }
    
}