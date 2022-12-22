#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void)
{
    srand(time(NULL));
    int guess;
    int contador = 1;
    int sorteado = 1 + rand()%1000;

    printf ("Tente a sorte, escolha um numero dentro do intervalo [1-1000]: ");
    scanf("%d",&guess);
    printf("\n\nNumero sorteado: %d,  seu palpite: %d", sorteado, guess);

    while (guess!=sorteado)
    {
        printf ("\nTente a sorte, escolha um numero dentro do intervalo [1-1000]: ");
        scanf("%d",&guess);
        sorteado = 1 + rand()%1000;
        printf("\n\nNumero sorteado: %d,  seu palpite: %d", sorteado, guess);
        contador++;
    }  

    printf("\nParabens, voce acertou, isso levou um total de: %d, tentativas", contador);
}