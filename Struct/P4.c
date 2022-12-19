#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nome[30];
    int matricula;
    float nota1,nota2,nota3;
}Straluno;

Straluno preenchedados()
{
    Straluno n;
    printf("Digite o nome do aluno: ");
    fgets(n.nome,30,stdin);
    printf("Digite o numero da matricula do aluno: ");
    scanf("%d",&n.matricula);
    fflush(stdin);
    printf("Digite a nota da primeira prova: ");
    scanf("%f",&n.nota1);
    fflush(stdin);
    printf("Digite a nota da segunda prova: ");
    scanf("%f",&n.nota2);
    fflush(stdin);
    printf("Digite a nota da terceira prova: ");
    scanf("%f",&n.nota3);
    fflush(stdin);

    return n;
}

float mrnota1 (Straluno h[])
{
    float maior;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            maior = h[0].nota1;
        }
        if (h[i].nota1 > maior)
        {
            maior = h[i].nota1;
        }

          
    }
    return maior;
}
float mrnota2 (Straluno h[])
{
    float maior;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            maior = h[0].nota2;
        }
        if (h[i].nota2 > maior)
        {
            maior = h[i].nota2;
        }

          
    }
    return maior;
}
float mrnota3 (Straluno h[])
{
    float maior;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            maior = h[0].nota3;
        }
        if (h[i].nota3 > maior)
        {
            maior = h[i].nota3;
        }

          
    }
    return maior;
}


void imprimedados (Straluno x)
{
    printf("Nome: %s",x.nome);
    printf("Matricula: %d",x.matricula);
    printf("\nNota 1: %0.2f Nota 2: %0.2f Nota 3: %0.2f\n\n",x.nota1,x.nota2,x.nota3);
}

int main (void)
{
    Straluno planilha[5];

    for (int i = 0; i < 3; i++)
    {
        printf("\t---------------- Dados do Aluno %d ---------------\n",i);
        planilha[i] = preenchedados();
        printf("\n\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        imprimedados(planilha[i]);
    }

    printf("\n\n\nMaiores notas: PROVA 1: %0.2f, PROVA 2: %0.2f, PROVA 3: %0.2f\n\n",mrnota1(planilha),mrnota2(planilha),mrnota3(planilha));
    

}