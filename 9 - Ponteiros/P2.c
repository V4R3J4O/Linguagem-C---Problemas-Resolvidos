#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int x, f, *ptrx = &x, *ptrf = &f;

    /*Este problema pode ou nao ser resolvido com a utilizacao de ponteiros,
    no entanto, a utilizacao aumenta a quantidade de memoria utilizada pelo programa,
    neste caso esta quantidade de memoria extra e irrisoria. Neste caso foram utilizados 
    Ponteiros apenas com o objetivo de praticar o assunto abordado!*/

    printf("Endenreco de memoria da variavel x: %p \tvariavel f: %p\n\n",ptrx,ptrf);

    if (ptrx > ptrf)
    {
        printf("A variavel x tem o maior endereco de memoria\n\n");
    }
    else
        printf("A variavel f tem o maior endereco de memoria\n\n");

}