#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *x = malloc(sizeof(int));
    if (x)
    {
        printf("Sucesso!");
        printf("\n%d",*x);
        *x = 5;
        printf("\n%d",*x);
    }
    else
    {
        printf("Deu ruim");
    }
    
    
}