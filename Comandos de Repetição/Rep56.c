#include <stdio.h>

int main (void)
{
    int n;
    int contador = 1;
    int soma = 0;
    int i = 0;
    

    /*printf("Para um valor de N fornecido, sera realizada a soma dos n primeiros numeros primos.\n");
    printf("Digite um valor para N: ");
    scanf("%d",&n);*/

    while (i < 200000)
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
        }
        contador = 0;
    }
    
    printf("\n\nA soma dos numeros primos abaixo de 2000000: %d\n\n",soma);

}