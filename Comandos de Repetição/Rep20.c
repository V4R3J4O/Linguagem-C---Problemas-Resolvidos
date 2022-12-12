#include <stdio.h>

int main ()
{
    int contador = 0;
    int valor;
    int pares = 0;
    printf("Digite quantos numeros quiser, para sair digite o numero 1000: \n");

    while (valor != 1000)
    {
        scanf("%d",&valor);

        if (valor%2 == 0)
        {
            pares++;
        }
        contador++;
    }
    
    printf("\n\n Foram inseridos %d numeros, dos quais %d sao pares!\n\n",contador-1,pares-1);
}