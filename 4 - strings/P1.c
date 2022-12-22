#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char nome[50];
    printf("Digite o seu nome: ");
    fgets(nome,50,stdin);
    printf("\nSeu nome e: %s\n\n",nome);
}