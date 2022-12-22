#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int vetorA[5];
    int vetorB[5];
    int long long soma = 0;

    for (int i = 0; i < 5; i++)
    {
        vetorA[i]= rand()%15;
        vetorB[i]= rand()%15;
    }

    for (int i = 0; i < 5; i++)
    {
        soma += vetorA[i]*vetorB[i];
    }
    
    printf("\nVetorA = { ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",vetorA[i]);
    }
    
    printf("}\n");
    printf("VetorB = { ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",vetorB[i]);
    }
    
    printf("}\n");

    printf("Produto escalar entre vetorA e vetorB = %lld\n\n",soma);
}