#include <stdio.h>

int main (void)
{
    int inicio, fim;
    int soma = 0;
    
    printf("Digite o inicio do intervalo: ");
    scanf("%d",&inicio);
    printf("\nDigite o fim do intervalo: ");
    scanf("%d",&fim);

    int ligado = 0;

    if (fim > inicio)
    {
        ligado = 1;
    }
    else
    {
        printf("\n Intervalo fornecido e considerado invalido!");
    }
    
    while (ligado == 1)
    {
        for (int i = inicio; i <= fim; i++)
        {
            if (i%2 != 0)
            {
                soma += i;
            }
            
        }
        printf ("Soma dos numeros impares dentro do intervalo [%d, %d] = %d", inicio, fim, soma);
        ligado = 0;
    }
    
    
}