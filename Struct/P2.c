#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


typedef struct
{
    char nome [100];
    int idade;
    char endereco[200];
}Pessoa;

Pessoa preenchedados()
{
    Pessoa n;
    printf("Digite o seu nome: ");
    fgets(n.nome,100,stdin);
    printf("Insira sua idade: ");
    scanf("%d%c",&n.idade);
    printf("Informe o seu endereço: ");
    fgets(n.endereco,200,stdin);
    return n;
}

void imprime(Pessoa x)
{
    printf("\n\n\t\tNome: %s\t\tIdade: %d\n\t\tEndereço: %s \n\n\n",x.nome,x.idade,x.endereco);
}

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    Pessoa n;
    n = preenchedados();
    imprime(n);
}
