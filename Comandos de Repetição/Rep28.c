#include <stdio.h>
#include <math.h>

int main (void)
{
    float en = 1;
    float n;
    float fatorial = 1;
    printf ("Digite o valor 'n' para funcao E(n): ");
    scanf("%f",&n);

    printf ("\nE(%0.2f) = 1",n);

    for (float i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
        en = en + (1/fatorial);

        printf (" + 1/%0.f!",i);
    }

    printf (" = %0.5f",en);
    
}