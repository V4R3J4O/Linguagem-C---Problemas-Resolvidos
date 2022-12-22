#include <stdio.h>

int main (void)
{
    
    int valor;
    int menor=0;
    int maior=0;
    printf ("Digite 10 Valores: \n");
    scanf("%d",&valor);
    menor =valor;
    maior = valor;
    for (int i = 0; i <=8; i++)
    {
        scanf("%d",&valor);
        if (valor>=maior)
        {
            maior = valor;
        }
        if (valor<=menor)
        {
            menor = valor;
        }
        
        
    }

    printf("\n\nO maior valor digitado foi: %d, e o menor foi: %d",maior,menor);
    
}