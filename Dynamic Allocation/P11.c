#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct 
{
    int matricula;
    char sobrenome[20];
    int ano_Nacimento;

}Str_Aluno;

Str_Aluno preenche_Dados (){

    Str_Aluno a;
    printf("Digite a matricula do aluno: ");
    scanf("%d",&a.matricula);
    getchar();

    printf("Informe o sobrenome do aluno [20 caracteres MAX]: ");
    fgets(a.sobrenome,20,stdin);

    printf("Informe o ano de nascimento do aluno: ");
    scanf("%d",&a.ano_Nacimento);
    getchar();
    return a;
    
}

void imprime_Dados (Str_Aluno x){

    printf("Matricula: %d\n",x.matricula);
    printf("Sobrenome: %s",x.sobrenome);
    printf("Ano de nacimento: %d\n\n",x.ano_Nacimento);


}



int main (){

    Str_Aluno *aluno;
    int tam;
    printf("\n\n\nDigite a quantidade de alunos que deseja inserir: ");
    scanf("%d",&tam);
    getchar();

    aluno = (Str_Aluno*) malloc( tam * sizeof(Str_Aluno));

    for (int i = 0; i < tam; i++)
    {
        printf("\n-------- Dados do Aluno [%d] ---------\n",i);
        aluno[i] = preenche_Dados();
    }
    printf("\n\n\n");
    
    for (int j = 0; j < tam; j++)
    {
        imprime_Dados(aluno[j]);
        printf("\n\n");
    }
    printf("\n\n\nO tipo de estrutura definda com Str_aluno ocupa %d bytes\n\n",sizeof(Str_Aluno));
    return 0;
}