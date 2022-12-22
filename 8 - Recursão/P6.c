#include <stdio.h>

int multiplicacao (int x, int f)
{
    if (x == 0 || f == 0)
        return 0;
    else if (x == 1)
        return f;
    else if (f == 1)
        return x;
    else
        return x + multiplicacao(x,f-1);
}

int main (void)
{
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("\nAgora digite o segundo numero: ");
    scanf(" %d", &b);

    printf("\n\n %d * %d = %d\n\n",a,b,multiplicacao(a,b));
}