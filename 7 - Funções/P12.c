#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int algarismos (int x)
{
    if (x > 0 && x <= 9)
    {
        return x;
    }
    
    else
    {
        int soma = 0;

        soma += algarismos(x/10) + algarismos(x%10); 

        return soma;
    }
    
}


int main (void)
{
    int num = 0;

    while (num <= 0)
    {
        printf("Digite um numero inteiro maior que zero: ");
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("\nNUMERO INVALIDO, REPITA A OPERACAO.\n");
        }    
    }
    
    printf("\n\nA soma dos algarismos presentes nesse numero e: %d\n\n",algarismos(num));
}