#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main (void)
{
    srand(time(NULL));
    int vetor1 [5];
    int vetor2 [5];
    int contador = 4;
    int escolha;

    for (int i = 0; i < 5; i++)
    {
        vetor1[i] = rand()%50;
        vetor2[contador]=vetor1[i];
        contador--;

    }
    
    
    /*printf ("\n\nO vetor gerado foi: { ");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ",vetor1[i]);
        }
        printf("}\n\n");
    */
        
    
    printf("---------------------------Menu---------------------------\n");
    printf("Digite 1 para ver o vetor gerado;\n");
    printf("Digite 2 para ver o vetor gerado invertido\n");
    printf("Digite qualquer outro valor para finalizar o programa\n");
    printf("----------------------------------------------------------\n\n");

    scanf("%d",&escolha);

    switch (escolha)
    {
    case 1:

        printf ("\n\nO vetor gerado foi: { ");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ",vetor1[i]);
        }
        printf("}\n\n");
        break;
    case 2:
        printf ("\n\nO vetor gerado invertido fica: { ");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ",vetor2[i]);
        }
        printf("}\n\n");
        break;
    
    default:
        printf("Agradecemos a visita!!\n\n");
        break;
    }
}