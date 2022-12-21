#include <stdio.h>
#include <stdlib.h>


int somadodobro (int *a, int *b)
{
    *a *= 2;
    *b *= 2;
    return *a+*b;
}

int main (void)
{
    int a,b;
    printf ("Digite o valor da primeira variavel: ");
    scanf("%d",&a);
    printf ("Digite o valor da segunda variavel: ");
    scanf(" %d",&b);

    printf("\nUtilizacao da funcao para retornar a soma do dobro de cada "
    "variavel: soma do dobro: %d\n\n",somadodobro(&a,&b));

}