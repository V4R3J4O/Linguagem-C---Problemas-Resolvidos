#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i = 0;
    int e = 0;
    char nome[100];
    printf("Digite um nome: ");
    fgets(nome,100,stdin);

    while (nome[i] != '\0')
    {
        i++;
        if (nome[i] == ' ')
        {
            e++;
        }
        
    }
    printf("O nome que voce digitou, desconsiderando os espacos, possui exatamente: %d Caracteres! ",i-e);
}