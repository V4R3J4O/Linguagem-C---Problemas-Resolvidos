#include <stdio.h>
#include <stdlib.h>

void emordem(int *a, int *b)
{
    int aux;
    if (*a < *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main (void)
{
    int a,b;
    printf ("Digite o valor da primeira variavel: ");
    scanf("%d",&a);
    printf ("Digite o valor da segunda variavel: ");
    scanf(" %d",&b);

    emordem(&a,&b);

    printf("A primeira varialvel recebe o maior valor por definicao:\n"
    "Valor da primeira variavel -> %d\nValor da segunda variavel -> %d\n\n"
    ,a,b);
}