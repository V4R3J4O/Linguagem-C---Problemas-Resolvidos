#include <stdio.h>
#include <stdlib.h>

int main (void)
{

    char texto1[100], texto2[100];
    printf("Digite um texto: ");
    fgets(texto1,100,stdin);
    printf("\nDigite outro texto: ");
    fgets(texto2,100,stdin);

    int i = 0;
    int diferente = 0;

    while (texto1[i]!= '\n' && texto2[i] != '\n')
    {
        if (texto1[i] != texto2[i])
        {
            diferente = 1;
        }
        i++;
    }
    
    switch (diferente)
    {
    case 1:
        printf("\n\nOs textos digitados sao diferentes!\n\n");
        break;
    
    default:
        printf("\n\nAmbos os textos sao exatamente iguais!\n\n");
        break;
    }

}