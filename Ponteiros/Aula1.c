#include <stdio.h>

int main ()
{
    int num = 10;

    int *p;

    p = &num;

    printf("Valor de num: %d\n",num);
    printf("Endereco de num: %p\n\n",&num);
    printf("Valor de p: %p\n",p);
    printf("Endereco de p: %p\n",&p);
    printf("Valor apontado por p: %d\n\n",*p);
    return 0;
}