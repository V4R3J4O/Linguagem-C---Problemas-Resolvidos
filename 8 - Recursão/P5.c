#include <stdio.h>

int fibonacci (int x)
{
    if (x == 1)
        return 0;
    else if (x == 2)
        return 1;
    else
        return fibonacci(x-1) + fibonacci(x-2);   
}

int main (void)
{
    int n;

    printf("Digite qual a posicao do elemento da sequencia de fibonacci que deseja descobrir o valor: ");
    scanf("%d",&n);

    printf("\n\nO elemento de numero %d da sequencia de Fibonacci = %d\n\n",n,fibonacci(n));
}