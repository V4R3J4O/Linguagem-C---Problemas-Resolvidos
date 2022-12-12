#include <stdio.h>

int main (void)
{
    int a[6]={1,0,5,-2,-5,7};
    int soma = a[0]+a[1]+a[5];
    
    printf("%d\n",soma);

    a[3]=100;

    printf("%d\n\n",a[3]);

}