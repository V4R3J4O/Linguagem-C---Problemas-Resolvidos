#include <stdio.h>
#include <stdlib.h>

int main (){

    int *memoria, quantidade;

    printf("\n\nQuantos bytes de memoria deseja deseja alocar para o tipo inteiro: ");
    scanf("%d",&quantidade);

    memoria = calloc(1,quantidade * sizeof(int));

    printf("\n---------------------MENU----------------------\n");
    printf("1 - CONSULTAR VALOR ARMAZENADO NO ENDERECO \"X\"  \n");
    printf("2 - INSERIR VALOR A SER AMAZENADO NO ENDERECO \"X\"\n\n");
    printf("-----------------------------------------------\n\n");

    int opcao;
    printf("Digite o numero da operacao que deseja realizar: ");
    fflush(stdin);
    scanf("%d",&opcao);

    int i;

    switch (opcao)
    {
    case 1:
        
        printf("Digite o a posicao que deseja consultar o valor armazenado: ");
        fflush(stdin);
        scanf("%d",&i);
        printf("\n\nO valor armazenado no endereco de memoria %p = %d\n\n",&memoria[i],memoria[i]);
        break;
    case 2:
 
        printf("Digite o a posicao que deseja inserir o valor a ser armazenado: ");
        fflush(stdin);
        scanf("%d",&i);
        printf("Digite o valor inteiro que deseja armazenar na posicao %d: ",i);
        fflush(stdin);
        scanf("%d",&memoria[i]);
        printf("\n\nO valor armazenado no endereco de memoria %p = %d\n\n",&memoria[i],memoria[i]);
        break;
    
    default:
        printf("\n\nOpcao invalida!\n\n");
        break;
    }

    free(memoria);
    return 0;
}