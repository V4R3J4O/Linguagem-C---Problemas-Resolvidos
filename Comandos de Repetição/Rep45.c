#include <stdio.h>

int main (void)
{
    float velocidade; 
    float kmh, ms;
    int opcao = 0;

    while (opcao != 3)
    {
        printf ("Menu:\n");
        printf("-------------------------------------\n\n");
        printf("1 - Converter de Km/H para M/s.\n");
        printf("2 - Converter de M/s para Km/H.\n");
        printf("3 - Sair.\n\n");

        printf("Digite o numero da operacao que deseja realizar: ");
        scanf ("%d",&opcao);

        if (opcao == 3)
        {
            printf("\n Obrigado por ultilizar este programa!\n\n");
        }
        
        else if (opcao == 1)
        {
            printf("\n Digite a sua velocidade em Km/H: ");
            scanf ("%f",&kmh);
            printf("\n\nA sua velocidade em M/s = %0.2f\n\n", kmh/3.6);
        }
        
        else if (opcao == 2)
        {
            printf("\n Digite a sua velocidade em M/s: ");
            scanf ("%f",&ms);

            printf("\n\nA sua velocidade em Km/H = %0.2f\n\n", ms*3.6);
        }
        
        else
        {
            printf("\n Opcao invalidade, por favor, tente mais uma vez!\n\n");
        }  
    }
}