#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int vetor[10];
    int impar[10] = {0,0,0,0,0,0,0,0,0,0};
    

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand()%50;
    }
    
    printf("Vetor gerado no intervalo [0,50] = \n{\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n",vetor[i],vetor[i+1]);
        i++;
    }
    
    printf("}\n");

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i]%2 != 0)
        {
            impar[i] = vetor[i];
        }
        
    }

    printf("Vetor que armazenas os numeros impares do primeiro vetor = \n{\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n",impar[i],impar[i+1]);
        i++;
    }
    
    printf("}\n");
    
}