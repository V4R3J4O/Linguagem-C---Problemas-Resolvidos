#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char nome[60];
    printf("Digite um nome (use no maximo 60 caracteres): ");
    fgets(nome,60,stdin);
    printf("\nAs quatro primeiras letras do seu nome sao respectivamente: ");

    for (size_t i = 0; i < 4; i++)
    {
        printf("%c ",nome[i]);
    }
    printf("\n\n");
    return 0;
}