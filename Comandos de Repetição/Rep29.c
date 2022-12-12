#include <stdio.h>
#include <math.h>

int main (void)
{
    float en = 0;
    float n;
    float fatorial = 1;
    
    printf ("Digite o valor 'n' para funcao E(n): ");
    scanf("%f",&n);

    printf ("\nE(%0.f) = 0",n);

    for (int i = 1; i <= n-1; i++)
    {   
        fatorial=1;
        
        for (float j = 1; j <= i*2 ; j++)
        { 
            fatorial *= j;
        }
         
        en = en + (i/fatorial);

        printf (" + %d/%d!",i,i*2);
    }

    printf (" = %0.5f",en);
    
}