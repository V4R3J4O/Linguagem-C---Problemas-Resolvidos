#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
    int a[10];
    int b[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d",&a[i]);
        b[i] = powf(a[i],2);
    }
    
    printf ("\n\n Valores fornecidos e armazenados no vetor A = { ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("}\n\n");

    printf ("\n\n Valores do vetor A elevados ao quadrado para o vetor B = { ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    printf("}\n\n");
}