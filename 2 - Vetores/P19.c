#include <stdio.h>

int main (void)
{
    int vetor[50];

    printf("Vetor = { ");

    for (int i = 0; i < 50; i++)
    {
        vetor[i] = (i + 5*i)%(i+1);
        printf("%d ",vetor[i]);
    }
    
    printf("}\n");
}