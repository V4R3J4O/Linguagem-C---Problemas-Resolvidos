#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirarray (int v[], int size)
{
    if (size == 1)
        printf("%d ", v[size-1]);
    else
    {
        imprimirarray(v,size-1);
        printf("%d ",v[size -1]);
    }
}

int main (void)
{
    srand(time(NULL));

    int v [10];

    for (size_t i = 0; i < 10; i++)
    {
        v[i] = rand()%10;
    }
    
    imprimirarray(v,10);
}
