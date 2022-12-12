#include <stdio.h>

int main (void)
{
    int vetor [10];
    int contador1 = 0;
    int contador2 = 1;
    int valor;

    printf ("Insira um valor inteiro maior que 0: ");
    scanf("%d",&valor);

    printf("\nEsta e uma lista com os 10 primeiros multiplos do valor inserido:\n");
    printf("Multiplos = { ");

    while (contador1 <= 9)
    {
        if (contador2%valor == 0 && contador2 != valor)
        {
            vetor[contador1] = contador2;
            contador1++;
        }
        contador2++;
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    
    printf("}\n\n");
}