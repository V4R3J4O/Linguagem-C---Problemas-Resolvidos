#include <stdio.h>

int main (void)
{
    int vetor [6];
    int contador = 0;
    int valor;

    while (contador < 6)
    {
        printf("\n");
        printf("Insira um valor: ");
        scanf("%d",&valor);

        if (valor%2 == 0)
        {
            vetor[contador] = valor;
            contador++;
        }
        

    }

    printf("\n\nvalores pares inseridos e armazenados em um vetor  = { ");

    for (int i = 0; i < 6;i++)
    {
        printf("%d ",vetor[i]);
    }
    
    printf("}\n\n");

    printf("Valores eximidos na ordem inversa: { ");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d ",vetor[i]);
    }

    printf("}\n\n");
    
    
}