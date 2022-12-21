#include <stdio.h>
#include <stdlib.h>

void imprimir (int *num)
{
    printf("No procedimento: %d\n",*num);
    *num = 80;
}

int main (void)
{
    int idade = 35;
    imprimir(&idade);
    
    /* Ao passarmos o argumento do procedimento como sendo um endereco de memoria, estamos fazendo
    algo parecido como uma passagem de valor por referencia, apesar de continuar sendo uma passagem por
    valor, ja que o programa continua fazendo uma copia do argumento que foi passado, no entanto, 
    neste caso a copia gerada e de um endereco de memoria, logo, ao alterarmos o conteudo apontado
    por este endereco de memoria, estamos alterando o conteudo armazeno por 
    esta variavel de forma global.*/

    printf("No main: %d\n",idade);
}