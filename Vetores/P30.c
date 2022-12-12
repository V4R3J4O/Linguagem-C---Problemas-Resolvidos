#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int vetorA[10];
    int vetorB[10];
    int vetorC[10] = {0};
    int contador = 0;

    for (size_t i = 0; i < 10; i++)
    {
        vetorA[i] = rand()%20;
        vetorB[i] = rand()%20;
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            if (vetorB[j] == vetorA[i])
            {
                vetorC[contador] = vetorB[j];
                contador++;
            }
            
        }
        
    }

    //Encontrando elementos repetidos no vetorC e alterando o seu valor para 0.
    //A sacada para esse codigo funcionar e perceber que a posicao j necessita ser diferente de i!

    for (size_t i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
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
    
    printf("interseccao A^B = { ");

    for (size_t i = 0; i < 10; i++)
    {
        if (vetorC[i] != 0)
        {
            printf("%d ",vetorC[i]);
        }
  
    }
    printf("}\n");
    
    
}