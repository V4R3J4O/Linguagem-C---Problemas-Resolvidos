#include <stdio.h>

int main (void)
{
    int valor;
    
    printf("Digite um numero: ");
    scanf("%d",&valor);

    for (int i = 0; i <= valor; i++)
    {
        printf("%d\n",i);
    }
    
}