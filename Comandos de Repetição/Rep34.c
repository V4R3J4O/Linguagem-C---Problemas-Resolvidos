#include <stdio.h>

int main (void)
{
    long long int j = 1;
    int contador1 = 0;
    int contador2 = 0;

    while (contador1 == 0)
    {
        for (int i = 1; i <= 20; i++)
        {
            if (j%i == 0)
            {
                contador2++;
                
            }
            
        }

        if (contador2 == 20)
        {
            contador1 = 1;
        }

        contador2 = 0;
        j++;
    }
    
    printf("%lld",j-1);
    
}