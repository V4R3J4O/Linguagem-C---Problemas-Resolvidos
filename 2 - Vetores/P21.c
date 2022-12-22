#include <stdio.h>

int main (void)
{
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    int contador = 0;

    printf("Insira valores inteiros para serem amarzenados no vetorA: ");
    while (contador <= 9)
    {
        printf("Posicao %d: ",contador);
        scanf("%d",&vetorA[contador]);
        contador++;
        printf("\n");
        
    }

    contador = 0;

    printf("Insira valores inteiros para serem amarzenados no vetorB: ");
    while (contador <= 9)
    {
        printf("Posicao %d: ",contador);
        scanf("%d",&vetorB[contador]);
        contador++;
        printf("\n");
    }
    
    for (int i = 0; i < 10; i++)
    {
        vetorC[i] = (vetorA[i]-vetorB[i]);
    }
    
    printf("\n\n\n");
    printf("VetorA = { ");
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
    printf("VetorC (A-B) = { ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetorC[i]);
    }
    printf("}\n");
}