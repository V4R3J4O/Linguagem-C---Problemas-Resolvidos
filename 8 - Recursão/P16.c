#include <stdio.h>

int duplofatorial (int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        int multiplicacao = duplofatorial(x-1);
        if (x%2 != 0)
        {
            return x * duplofatorial(x-1);
        }
        else
        return multiplicacao;
    }
}

int main (void)
{
    int num;
    do
    {
        printf("Digite o valor que deseja calcular o duplo fatorial: ");
        scanf("%d", &num);
    } while (num%2 == 0);
    
    printf("\n\nO duplo fatorial de %d = %d\n\n",num,duplofatorial(num));
}