#include <stdio.h>

int main (void)
{
    int long long soma1 = 0;
    int long long soma2 = 0;

    for (int i = 1; i <= 100; i++)
    {
        soma1 += (i*i);
    }
    for (int i = 1; i <= 100; i++)
    {
        soma2 += i;
    }
    
    soma2 = soma2 * soma2;

    printf("A soma dos quadrados do intervalo [1 , 100] = %lld\n",soma1);
    printf("O quadrado da soma do intervalo [1 , 100] = %lld\n\n",soma2);

    printf("%lld - %lld = %lld\n\n",soma2, soma1, soma2 - soma1);

    
}