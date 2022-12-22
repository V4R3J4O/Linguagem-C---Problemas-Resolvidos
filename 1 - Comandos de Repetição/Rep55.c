#include <stdio.h>

int main (void)
{
    int n;
    int contador = 1;
    int contador2 = 0;
    int soma = 0;
    int i = 0;
    

    printf("Para um valor de N fornecido, sera realizada a soma dos n primeiros numeros primos.\n");
    printf("Digite um valor para N: ");
    scanf("%d",&n);

    while (contador2 < n)
    {
        i++;
        for (int j = 1; j <= i; j++)
        {
            if (i%j == 0)
            {
                contador++;
                
            }
            
        }
        if (contador == 2)
        {
            printf("%d\n",i);
            soma = soma +i;
            contador2++;
        }
        contador = 0;
    }
    
    printf("\n\nA soma dos %d primeiros numeros primos e: %d\n\n",n,soma);

}