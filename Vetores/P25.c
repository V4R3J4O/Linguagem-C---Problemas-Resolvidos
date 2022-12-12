#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int contador1 = 0;
    int contador2 = 0;
    int naturais[100];

    while (contador1 <= 100)
    {
        if (contador2%7 != 0 ||  contador2%10 == 7)
        {
            naturais[contador1] = contador2;
            contador1++;
        }
        contador2++;
    }

    printf("vetor = { ");
    
    for (size_t i = 0; i < 100; i++)
    {
        printf("%d ",naturais[i]);
    }
    printf("}\n\n");
}