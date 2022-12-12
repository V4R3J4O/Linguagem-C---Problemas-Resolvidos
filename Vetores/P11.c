#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int vetor[10];
    int contador = 0;
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        vetor[i]=rand()%200 -100;

        if (vetor[i] < 0)
        {
            contador++;
        }
        if (vetor[i]%2 == 0 && vetor[i] >= 0)
        {
            soma += vetor[i];
        }
        
    }
    
    printf("Vetor gerado = { ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    
    printf("}\n");

    printf("Quantidade de valores negativos armazenados no vetor = %d\n",contador);
    printf("Soma dos valores pares armazenados no vetor = %d\n\n",soma);

}