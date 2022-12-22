#include <stdio.h>
#include <stdlib.h>

int ordena (int *a, int *b, int *c)
{
    int aux;

    if (*b > *a && *b > *c)
    {
        aux = *a;
        *a = *b;
        if (aux > *c)
        {
            *b = aux;
        }
        else
        {
            *b = *c;
            *c = aux;
        }
        
    }
    else if (*c > *a && *c > *b)
    {
        aux = *a;
        *a = *c;
        if (aux > *b)
        {
            *c = *b;
            *b = aux;
        }
        else
        {
            *c = aux;
        }
        
    }
    else if (*a >*b && *a > *c)
    {
        if (*b < *c)
        {
            aux = *b;
            *b = *c;
            *c = aux;
        }
        
    }
    
    if (*a == *b && *a ==*c)
    {
        return 1;
    }
    return 0;
    

    
}
int main (void)
{
    int a,b,c;
    printf("\nDigite um valor para a primeira variavel: ");
    scanf("%d",&a);
    printf("\nDigite um valor para a segunda variavel: ");
    scanf(" %d",&b);
    printf("\nDigite um valor para a terceira variavel: ");
    scanf(" %d",&c);

    ordena(&a,&b,&c);
    printf("\n\nValor de A: %d\tB: %d\tC: %d\n\n",a,b,c);
}