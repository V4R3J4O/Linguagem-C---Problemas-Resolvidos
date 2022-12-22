#include <stdio.h>

int potencia (int x, int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return x * potencia(x,n-1);
}

int main (void)
{
    int base, expoente;
    printf("Digite o numero: ");
    scanf("%d", &base);
    printf("\nAgora digite o valor de seu expoente: ");
    scanf(" %d", &expoente);

    printf("\n\n \t\t%d elevado a %d = %d\n\n",base,expoente,potencia(base,expoente));
}