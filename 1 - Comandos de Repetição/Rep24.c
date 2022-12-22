#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    srand(time(NULL));
    int num = rand()%100;
    int soma = 0;
    printf ("Numero sorteado: %d",num);
    printf("\nSeus divisores(Exceto %d): \n",num);

    for (int i = 1; i < num; i++)
    {
        if (num%i == 0)
        {
            printf("%d\n",i);
            soma+=i;
        }
        
    }
    printf ("Soma: %d",soma);

}