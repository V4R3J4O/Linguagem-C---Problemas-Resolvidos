#include <stdio.h>

int main (void)
{
    int i=0;

    for (i; i<=100; i++)
    {
        printf("%d+1\n",i);
    }

    while (i<=100)
    {
        printf("%d\n",i);
        i++;
    }
    
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=99);
    
    
}