#include <stdio.h>

int main (void)
{
    int a,b;
    printf("Insira dois valores inteiros separados por um espaco: ");
    scanf("%d%d",&a,&b);

    printf("\nEndereco de memoria da variavel a: %p\tVariavel b: %p\n",&a,&b);
    if (&a > &b)
    {
        printf("A variavel 'a' tem o maior endereco de memoria\n\n");
    }
    else
        printf("A variavel 'b' tem o maior endereco de memoria\n\n");
}