#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void)
{
    srand(time(NULL));
    int n;

    printf("Quantas lancamentos voce quer que tenham? ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int d1 = 1 + rand()%6;
        int d2 = 1 + rand()%6;

        printf("Dados sorteados D(1) = %d, D(2) = %d.\n\n",d1,d2);

        if (d1>d2)
        {
            printf ("D(1) > D(2)\n");
        }
        else if (d1<d2)
        {
            printf ("D(1) < D(2)\n");
        }
        else
        {
            printf ("D(1) = D(2)\n");
        }
    }
    
    
    
}