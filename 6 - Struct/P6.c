#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

typedef struct 
{
    int matricula, codigodadisciplina;
    float nota1, nota2;
    char nome[50];
}Straluno;

Straluno preenchedados()
{
    Straluno a;
    printf("Digite o número da matrícula do aluno: ");
    scanf("%d",&a.matricula);
    fflush(stdin);
    printf("Agora digite o nome do aluno: ");
    fgets(a.nome,50,stdin);
    printf("Insira o código da disciplina: ");
    scanf("%d",&a.codigodadisciplina);
    printf("Insira Agora a nota da primeira prova: ");
    scanf("%f",&a.nota1);
    fflush(stdin);
    printf("Insira Agora a nota da segunda prova: ");
    scanf("%f",&a.nota2);
    fflush(stdin);
    printf("\n");

    return a;
}

float media(Straluno m)
{
    return (m.nota1 + 2* m.nota2)/3;
}

void imprimedados (Straluno x)
{
    printf("\nMatrícula: %d\nNome: %sCódigo da disciplina: %d\nNota 1: %0.2f   Nota 2: %0.2f\nMédia ponderada: %0.2f\n\n",
    x.matricula,x.nome,x.codigodadisciplina,x.nota1,x.nota2,media(x));
}

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    Straluno aluno[10];

    for (int i = 0; i < 3; i++)
    {
        printf("--------------------- Aluno %d -------------------\n\n",i+1);
        aluno[i] = preenchedados();
    }

    for (int i = 0; i < 3; i++)
    {
        imprimedados(aluno[i]);
    }
    
    
}
