#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno
{
    char nome[100];
    int idade;
    char sexo;
    char endereco[200];
};

struct Aluno preenche_dados ()
{
    struct Aluno x;
    printf("Digite o nome do aluno: ");
    fgets(x.nome, 100, stdin);
    printf("Digite a idade: ");
    scanf("%d",&x.idade);
    printf("Digite o sexo, M para masculino e F para feminino: ");
    scanf(" %c%c",&x.sexo);
    printf("Digite agora o endereco do aluno: ");
    fgets(x.endereco,200,stdin);
    
}

void imprime_dados (struct Aluno n)
{
    printf("\n\nNome: %s\nIdade: %d\nSexo: %c\nEndereco: %s\n\n",n.nome,n.idade,n.sexo,n.endereco);
    //printf("Nome do Aluno: %s",n.nome);
}

int main (void)
{
    struct Aluno dados;
    dados = preenche_dados();
    imprime_dados(dados);
}