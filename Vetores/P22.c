#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    for (int i = 0; i < 10; i++)
    {
        vetorA[i] = rand()%50;
        vetorB[i] = rand()%50;
        if (i%2 == 0)
        {
            vetorC[i] = vetorA[i];
        }
        else if (i%2 != 0)
        {
            vetorC[i] = vetorB[i];
        }
        
    }
    
    printf("\nVetorA = { ");
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetorA[i]);
    }
    
    printf("}\n");
    printf("VetorB = { ");
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetorB[i]);
    }
    
    printf("}\n");
    printf("VetorC = { ");
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetorC[i]);
    }
    printf("}\n");
    
}