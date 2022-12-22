#include <stdio.h>

int main (void)
{
    int valor;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&valor);

    for (int i = 0; i <= valor; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    
}