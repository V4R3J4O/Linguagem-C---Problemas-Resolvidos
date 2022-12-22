#include <stdio.h>

int main (void)
{
    int a = 10;
    int *b, **c, ***d;
    b = &a;
    c = &b;
    d = &c;

    printf("Conteudo de A utilizando A: %d\n",a);
    printf("Conteudo de A utilizando *B x 2: %d\n",*b*2);
    printf("Conteudo de A utilizando **C x 3: %d\n",**c*3);
    printf("Conteudo de A utilizando ***D: * 4 %d\n",***d*4);
}