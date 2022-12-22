#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void)
{
    srand(time(NULL));
    int contador = 0;
    int num = rand()%1000;
    int i = 0;

    while (contador != 1)
    {
        if ((num+i)%11==0 || (num+i)%13==0 || (num+i)%15 == 0)
        {
            contador= 1;
        }

        i++;
    }
    
    printf ("O primeiro numero que vem apos o sorteado [%d] e e divisivel por 11, 15 ou 17 e:\n %d",num,num+i-1);

}