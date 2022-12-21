#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int x = 10;
    float g = 7.5;
    char f = 'f';

    int *ptrx = &x;
    float *ptrg = &g;
    char *ptrf = &f;

    printf("Valor do inteiro antes: %d\nValor do Real antes: %0.2f\nValor do caractere antes: %c\n\n",
    x,g,f);
    
    //Alterando os valores utilizando os ponteiros ->

    *ptrx = 5;
    *ptrg = 10.13;
    *ptrf = 'G';

    printf("--------- Valores alterados por endenreco de memoria ---------\n");
    printf("Valor do inteiro: %d\nValor do Real: %0.2f\nValor do caractere: %c\n\n",
    x,g,f);


}