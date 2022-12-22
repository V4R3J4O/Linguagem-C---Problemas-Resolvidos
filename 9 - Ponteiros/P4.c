#include <stdio.h>
#include <stdlib.h>


void trocavalor (int *a, int *b)
{
    /*E necessario criar uma variavel temporaria AUXiliar para a resolucao deste problema!*/
    int aux = *a;
    *a = *b;
    *b = aux;
}
int main (void)
{
    int a,b,*ptra = &a,*ptrb = &b;
    printf("Digite um valor inteiro para variavel a: ");
    scanf("%d",&a);
    printf("Digite um valor inteiro para variavel b: ");
    scanf(" %d",&b);

    trocavalor(ptra,ptrb);
    printf("Valor de A: %d\tValor de B: %d",a,b);
}