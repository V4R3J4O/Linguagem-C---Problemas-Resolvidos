#include <stdio.h>

int main ()
{
    int i = 0;
    int cont = 0;
    int tamanho;
    printf("Quantos números ímpares você quer que sejam impresoss? \n");
    scanf("%d",&tamanho);
    printf("\n\n");
    while (cont<tamanho)
    {
        if (i%2 != 0)
        {
            printf("%d\n",i);
            cont++;
        }
        
        i++;
        
    }
    
    
    return 0;
}