#include <stdio.h>

void pares (int x)
{
    if (x == 0)
        printf("%d ",x);
    else
    {
        pares(x-1);
        
        if (x%2 == 0)
            printf("%d ",x);
    }
    
}

int main (void)
{
    int n;
    printf("Digite o N-esimo termo da sequencia dos pares: ");
    scanf("%d",&n);
    printf("\n\nEssa e a sequencia crescente dos pares ate %d ->\n",n);
    pares(n);
    printf("\n\n");
}