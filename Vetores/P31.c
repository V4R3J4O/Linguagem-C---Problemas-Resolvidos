#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int vetorA[10];
    int vetorB[10];
    int vetorC[20] = {0};
    int contador = 0;

    for (size_t i = 0; i < 10; i++)
    {
        vetorA[i] = rand()%20;
        vetorB[i] = rand()%20;
    }
    
    for (size_t i = 0; i < 20; i++)
    {
        if (i <= 9)
        {
            vetorC[i] = vetorA[i];
        }
        else 
        {
            vetorC[i] = vetorB[contador];
            contador++;
        } 
    }

    for (size_t i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (vetorC[j] == vetorC[i] && j != i)
            {
                vetorC[j] = 0;
                
            }
            
        }
        
    }


    printf("VetorA = { ");

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",vetorA[i]);
    }
    printf("}\n");
    
    printf("VetorB = { ");

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",vetorB[i]);
    }
    printf("}\n");
    
    printf("Uniao de A com B = { ");

    for (size_t i = 0; i < 20; i++)
    {
        if (vetorC[i] != 0)
        {
            printf("%d ",vetorC[i]);
        }
  
    }
    printf("}\n");
    
    
}