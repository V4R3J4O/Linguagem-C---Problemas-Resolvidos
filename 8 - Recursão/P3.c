#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int somacubo (int x)
{
    if (x == 1)
        return 1;
    else
    {
        return pow(x,3) + somacubo(x-1);
    }   
}

int main (void)
{
    printf("Digite ate que numero deseja calcular o somatorio dos cubos ate ele: ");
    int n;
    scanf("%d",&n);

    printf("\n\nsomatorio dos cubos ate %d = %lld\n\n",n,somacubo(n));
}