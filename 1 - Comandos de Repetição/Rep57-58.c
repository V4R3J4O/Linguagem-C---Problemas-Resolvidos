#include <stdio.h>

int main (void)
{
    int a,b;
    int soma = 0;
    int contador = 1;
    int contador2 =0;
    int inicio;
    printf("Para o intervalo fechado [a,b], sera calculada a soma dos numeros primos contidos nesse intervalo.");
    printf("\nForneca 'a': ");
    scanf("%d",&a);
    printf("\nForneca 'b': ");
    scanf("%d",&b);
    inicio=a;

    if (b<a)
    {
        printf("\n\nIntervalo fornecido invalido, o valor inicial necessita ser menor que o final.\n\n");

    }

    else if (b>=a)
    {
        for (a; a <= b; a++)
        {
            for (int j = 1; j <= a; j++)
            {
                if (a%j == 0)
                {
                    contador++;    
                }
            }
            if (contador == 2)
            {
                soma += a;
                printf("%d\n",a);
                contador2++;
            }
            if (a == 0)
            {
                contador = 1;
            }
            else
            {
                contador = 0;
            }
            
        }
        printf("\nExiste um total de %d numeros primos contidos nesse intervalo.",contador2);
        printf("\n\nA soma dos numeros primos contidos em [%d,%d] = %d\n\n",inicio,b,soma);
    }
      
    
}