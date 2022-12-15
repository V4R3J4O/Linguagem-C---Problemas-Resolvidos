#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

typedef struct
{
    char nome [100];
    long int matricula;
    char curso [50];
}Aluno;

int main (void)
{
    setlocale (LC_ALL, "Portuguese");
    Aluno aluno[5];
    

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o nome do aluno: ");
        fgets(aluno[i].nome,100,stdin);
        printf("Digite o nome do curso do aluno: ");
        fgets(aluno[i].curso,50,stdin);
        printf("Digite o numero da matrícula do aluno: ");
        scanf("%ld",&aluno[i].matricula);
        scanf("%c");
        printf("\n\n");
    }

    
    for (int i = 0; i < 2; i++)
    {
        printf("\n\n");
        printf("Nome: %s",aluno[i].nome);
        printf("Curso: %s",aluno[i].curso);
        printf("Matrícula: %ld",aluno[i].matricula);
        printf("\n\n");
        
    }
    

}