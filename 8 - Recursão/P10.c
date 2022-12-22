#include <stdio.h>

void pares (int x)
{
    if (x == 0)
        printf("%d ",x);
    else
    {
        
        
        if (x%2 == 0)
            printf("%d ",x);
        pares(x-1);
    }
    
}

int main (void)
{
    int n;
    printf("Digite o N-esimo termo da sequencia dos pares: ");
    scanf("%d",&n);
    printf("\n\nEssa e a sequencia decrescente dos pares de %d ate 0 -> ",n);
    pares(n);
    printf("\n\n");
}