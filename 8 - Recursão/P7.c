#include <stdio.h>

void crescente (int x)
{
    if (x == 0)
        printf("%d ",x);
    else
    {
       crescente(x-1);
       printf("%d ", x); 
    }
        
}

int main (void)
{
    int n;
    printf("Digite o N-esimo termo natural: ");
    scanf("%d",&n);
    printf("\n\nEssa e a sequencia natural ate %d: ",n);
    crescente(n);
}