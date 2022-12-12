#include <stdio.h>

int main (void)
{
    int cidade,codigo;
    float valor1,valor2,valor3,consumo;
    float residencial = 0, comercial = 0, industrial = 0, total = 0;
    float maior, menor;

    printf("Quantos habitantes tem a sua cidade: ");
    scanf("%d",&cidade);
    printf("\n\n");
    printf("-------------------------------\n");
    printf("Categoria [1] - Residencial\n");
    printf("Categoria [2] - Comercial\n");
    printf("Categoria [3] - Industrial\n");
    printf("-------------------------------\n\n");
    printf("Digite o valor do Kwh para cada categoria: \n");
    printf("Categoria [1] = ");
    scanf("%f",&valor1);
    printf("\nCategoria [2] = ");
    scanf("%f",&valor2);
    printf("\nCategoria [3] = ");
    scanf("%f",&valor3);

    for (int i = 1; i <= cidade; i++)
    {
        printf("\nDiga a que categoria pertence: ");
        scanf("%d",&codigo);
        printf("\nAgora digite o consumo em Kwh: ");
        scanf("%f",&consumo);

        if (codigo == 1)
        {
            residencial += consumo*valor1;
        }
        
        else if (codigo == 2)
        {
            comercial+= consumo*valor2;
        }
        
        else if (codigo == 3)
        {
            industrial += consumo*valor3;
        }
        else
        {
            printf("\nCategoria invalida, por favor repita a ultima operacao!\n");
            i--;
        }
        
        if (i == 1)
        {   
            maior = consumo;
            menor = consumo;
        }
        if (consumo > maior)
        {
            maior = consumo;
        }
        if (consumo < menor)
        {
            menor = consumo;
        }
        
        total += consumo;

    }
    
    printf("\n\nO maior consumo foi de: %0.2f Kwh\n",maior);
    printf("O menor consumo foi de: %0.2f Kwh\n",menor);
    printf("A media de consumo dos habitantes foi de: %0.2f Kwh\n\n",total/cidade);

    printf("--------TOTAL POR CATEGORIA-------\n");
    printf("Categoria [1] = %0.2f Kwh\n",residencial);
    printf("Categoria [2] = %0.2f Kwh\n",comercial);
    printf("Categoria [3] = %0.2f Kwh\n",industrial);
    printf("----------------------------------\n\n");

}