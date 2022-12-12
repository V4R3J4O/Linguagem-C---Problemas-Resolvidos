#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char nome[100], sexo[20];
    int idade;

    printf("Digite o nome da pessoa: ");
    fgets(nome,100,stdin);
    printf("\nAgora digite o sexo da pessoa: ");
    fgets(sexo,20,stdin);
    printf("\nAgora digite a idade da pessoa: ");
    scanf(" %d",&idade);

    if (sexo == "feminino" && idade >= 25)
    {
        printf("\n\nUSUARIO ACEITO!\n\n");
    }
    else
        printf("\n\nUSUARIO NAO ACEITO!\n\n");
}