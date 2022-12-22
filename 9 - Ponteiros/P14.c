#include <stdio.h>
#include <stdlib.h>


void mudaTexto ( char string[], char x)
{
    int cont = 0;
    while (*(string + cont) != '\0')
    {
        *(string + cont) = x;
        cont++;
    }
    
}
int main (void)
{
    char texto[]={"Cada elemento contido nessa string sera substituido por um outro caractere."};\
    printf("\n\nPrimeiro Texto: %s\n\n",texto);
    mudaTexto(texto,'h');
    printf("Texto Alterado: %s\n\n",texto);
}