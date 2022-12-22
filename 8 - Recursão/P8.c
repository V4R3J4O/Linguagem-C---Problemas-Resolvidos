#include <stdio.h>

void decrescente (int x)
{
    if (x == 0)
        printf("%d ",x);
    else
    {
       printf("%d ", x);
       decrescente(x-1);
    }
        
}

int main (void)
{
    int n;
    printf("Digite o N-esimo termo natural: ");
    scanf("%d",&n);
    printf("\n\nEssa e a sequencia natural decrescente de %d ate 0: ",n);
    decrescente(n);
}