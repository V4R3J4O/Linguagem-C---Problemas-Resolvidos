#include <stdio.h>
#include <stdlib.h> 
#include <strings.h>


typedef struct 
{
    char nome [60];
    int idade;
    char sexo;
    char cpf[11];
    int aniversario[3];
    int codigo;
    char cargo[60];
    
}StrFuncionario;

StrFuncionario preenche_dados()
{
    StrFuncionario a;
    printf("\n\n--------------- Dados do Funcionario --------------\n");
    printf("NOME: ");
    fgets(a.nome,60,stdin);
    printf("IDADE: ");
    scanf("%d",&a.idade);
    printf("SEXO (M/F): ");
    fflush(stdin);
    scanf("%c",&a.sexo);
    fflush(stdin);
    printf("CPF: ");
    fgets(a.cpf,12,stdin);
    printf("CODIGO (0-99): ");
    scanf("%d",&a.codigo);
    fflush(stdin);
    printf("CARGO: ");
    fgets(a.cargo,60,stdin);

    return a;
}

void imprime_dados(StrFuncionario x)
{
    printf("\n\n\t\t\t--------------- Dados do Funcionario --------------\n");
    printf("\t\t\tNOME: %s",x.nome);
    printf("\t\t\tIDADE: %d\n",x.idade);
    printf("\t\t\tSEXO: %c\n",x.sexo);
    printf("\t\t\tCPF: %s\n",x.cpf);
    printf("\t\t\tCODIGO: %d\n",x.codigo);
    printf("\t\t\tCARGO: %s",x.cargo);
    printf("\t\t\t---------------------------------------------------\n\n");
}
int main ()
{
    StrFuncionario funcionario[2];

    for (int i = 0; i < 2; i++)
    {
        funcionario[i] = preenche_dados();
    }
    
    for (int i = 0; i < 2; i++)
    {
        imprime_dados(funcionario[i]);
    }
    
    return 0;
}
