#include <stdio.h>

long long int fatorial (int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * fatorial(x-1);
}

int main (void)
{
    printf("Digite o numero que deseja calcular o fatorial: ");
    int n;
    scanf("%d",&n);

    printf("\n\n%d! = %lld\n\n",n,fatorial(n));
}