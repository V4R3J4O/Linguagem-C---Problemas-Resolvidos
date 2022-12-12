#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main (void)
{
    srand(time(NULL));
    int soma=0;
    int valor;
    

    for (int i = 1; i <= 10; i++)
    {
        valor = rand()%100;
        printf("NÃºmero Sorteado: %d\n",valor);
        soma+=valor;
    }

    printf("\n\nA mÃ©dia dos valores digitados Ã©: %d",soma/10);
    
}