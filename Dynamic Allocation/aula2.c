#include <stdio.h>
#include <stdlib.h>


int main ()
{

    int *x;

    x = calloc(1,sizeof(x));

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
    

    return 0;
}