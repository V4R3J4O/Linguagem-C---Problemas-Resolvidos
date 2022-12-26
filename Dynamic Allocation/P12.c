#include <stdio.h>
#include <stdlib.h> 

typedef struct 
{
    int codigo;
    char nome[50];
    int qntestoque;
    float preco;

} Str_Produto;


Str_Produto Preenche_Dados (){

    Str_Produto a;

    printf("Informe o codigo do produto: ");
    scanf("%d",&a.codigo);
    getchar();

    printf("Insira o nome do produto: ");
    fgets(a.nome,50,stdin);

    printf("Quantos unidades existem no estoque: ");
    scanf("%d",&a.qntestoque);
    getchar();

    printf("Informe o preco do produto: ");
    scanf("%f",&a.preco);
    getchar();

    return a;

}

void Imprime_Dados (Str_Produto x){

    printf("Codigo: %d\n",x.codigo);
    printf("Nome: %s",x.nome);
    printf("Quantidade disponível em estoque: %d\n",x.qntestoque);
    printf("Preco por unidade: %0.2f€\n",x.preco);
}

int main (){

    int n;
    printf("\n\n\nInforme a quantidade de produtos a serem cadastradas: ");
    scanf("%d",&n);
    getchar();

    Str_Produto *produto = malloc(n * sizeof(Str_Produto));

    for (int i = 0; i < n; i++)
    {
        printf("\n\n");
        produto[i] = Preenche_Dados();
    }
    
    for (int j = 0; j < n; j++)
    {
        printf("\n--------------------------------------\n");
        Imprime_Dados(produto[j]);
        printf("--------------------------------------\n");
    }
    
    int maior_Preco, maior_Estoque;
    Str_Produto *identificador1;
    Str_Produto *identificador2;

    for (int k = 0; k < n; k++)
    {
        if (k == 0)
        {
            maior_Estoque = produto[k].qntestoque;
            identificador1 = &produto[k];
            maior_Preco = produto[k].preco;
            identificador2 = &produto[k];
        }
        else
        {
            if (maior_Preco < produto[k].preco)
            {
                maior_Preco = produto[k].preco;
                identificador2 = &produto[k];

            }
            if (maior_Estoque < produto[k].qntestoque)
            {
                maior_Estoque = produto[k].qntestoque;
                identificador1 = &produto[k];
            }
                
        }
        
    }
    
    printf("\n\n\n");
    printf("O produto com a maior quantidade em estoque ->\n");
    Imprime_Dados(*(identificador1));
    printf("\n\n\n");
    printf("O produto com o maior preco ->\n");
    Imprime_Dados(*(identificador2));

    free(produto);

    return 0;
}