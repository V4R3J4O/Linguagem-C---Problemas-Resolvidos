#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    int idade;
    char sexo;
    char endereco[200];
}Aluno;

Aluno preenche_dados()
{
    Aluno dados;
    printf("Digite o nome do aluno: ");
    fgets(dados.nome, 100, stdin);
    printf("Digite a idade: ");
    scanf("%d",&dados.idade);
    printf("Digite o sexo, M para masculino e F para feminino: ");
    scanf(" %c%c",&dados.sexo);
    printf("Digite agora o endereco do aluno: ");
    fgets(dados.endereco,200,stdin);
}
int main (void)
{
    Aluno dados;

    dados = preenche_dados();

    printf("\n\nNome: %s\nIdade: %d\nSexo: %c\nEndereco: %s\n\n",dados.nome,dados.idade,dados.sexo,dados.endereco);
}