#include <stdio.h>

int main (void)
{
    int soma = 0;

    for (int i = 0; i <=1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            soma+=i;
        }
        
    }
    
    printf("Soma: %d ",soma);
    
}