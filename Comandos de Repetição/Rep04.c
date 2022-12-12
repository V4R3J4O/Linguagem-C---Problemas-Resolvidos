#include <stdio.h>

int main (void)
{
    int inteiro = 1000;
    for (inteiro = 1000; inteiro <= 100000; inteiro = inteiro  + 1000)
    {
        printf("%d\n",inteiro);
    }
    
}