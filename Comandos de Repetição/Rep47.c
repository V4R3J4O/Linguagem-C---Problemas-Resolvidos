#include <stdio.h>

int main (void)
{
    printf ("                    MENU                   \n");
    printf ("-------------------------------------------\n");
    printf ("1 - Adicao.                                |\n");
    printf ("2 - Subtracao.                             |\n");
    printf ("3 - Multiplicacao.                         |\n");
    printf ("4 - Divisao.                               |\n");
    printf ("5 - Sair.                                  |\n");
    printf ("-------------------------------------------\n\n\n");

    int opcao;
    float a,b;

    printf("Digite o numero da operacao que seja realizar: ");
    scanf("%d",&opcao);

    while (opcao != 5)
    {
        if (opcao == 1)
        {
            printf("\nDigite o primeiro numero: ");
            scanf("%f",&a);
            printf("\nDigite osegundo numero  numero: ");
            scanf("%f",&b);
            printf("\n%0.2f + %0.2f = %0.2f \n\n",a,b, a+b);
        }
        else if (opcao == 2)
        {
            printf("\nDigite o primeiro numero: ");
            scanf("%f",&a);
            printf("\nDigite o segundo numero  numero: ");
            scanf("%f",&b);
            printf("\n%0.2f - %0.2f = %0.2f \n\n",a,b, a-b);
        }
        else if (opcao == 3)
        {
            printf("\nDigite o primeiro numero: ");
            scanf("%f",&a);
            printf("\nDigite o segundo numero  numero: ");
            scanf("%f",&b);
            printf("\n%0.2f * %0.2f = %0.2f \n\n",a,b, a*b);
        }
        else if (opcao == 4)
        {
            printf("\nDigite o numerador: ");
            scanf("%f",&a);
            printf("\nDigite o denominador: ");
            scanf("%f",&b);
            if (b ==0)
            {
                printf("\n\nERROR\n\n");
            }
            else
                printf("\n%0.2f/%0.2f = %0.2f \n\n",a,b, a/b);
        }

        else if (opcao == 5)
        {
            printf ("\nObrigado por ultilizar este programa!\n\n");
        }

        else
        {
            printf("Opcao invalida, tente outra vez!\n\n");
        }
        
        printf ("                    MENU                   \n");
        printf ("-------------------------------------------\n");
        printf ("1 - Adicao.                                |\n");
        printf ("2 - Subtracao.                             |\n");
        printf ("3 - Multiplicacao.                         |\n");
        printf ("4 - Divisao.                               |\n");
        printf ("5 - Sair.                                  |\n");
        printf ("-------------------------------------------\n\n\n");
        printf("Digite o numero da operacao que seja realizar: ");
        scanf("%d",&opcao);
        
        
    }
    
}