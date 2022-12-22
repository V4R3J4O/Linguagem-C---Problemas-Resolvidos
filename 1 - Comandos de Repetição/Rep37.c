#include <stdio.h>

int main (void)
{
    int d1, d2; 
    int prod;

    for (int i = 1000; i <= 9999; i++)
    {
        d1=i/100;
        d2=i%100;

        prod = d1+d2;

        if ((prod*prod)==i)
        {
            printf("%d + %d  = %d\n", d1,d2,d1+d2);
            printf("(%d)^2 = %d\n\n\n",prod,prod*prod);
        }
        
    }
    
}