#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
    srand(time(NULL));

    int *sorteio, *jogo, *acertos, contador = 0;

    sorteio = calloc(1, 6*sizeof(int));
    jogo = calloc(1, 6*sizeof(int));
    acertos = calloc(1, 6*sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        sorteio[i] = rand()%60 + 1;
    }
    
    printf("Informe os numeros que voce jogou ->\n\nc");

    for (int i = 0; i < 6; i++)
    {
        printf("Informe o numero da posicao %d: ",i+1);
        scanf("%d",&jogo[i]);
        fflush(stdin);
        
        if (sorteio[i] == jogo[i])
        {
            sorteio[contador] = sorteio[i];
            contador++;
        }
        
    }
    printf("\n\nNumeros sorteados : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",sorteio[i]);
    }
    
    printf("\n\nVoce obteve um total de %d acertos: {",contador);
    for (int i = 0; i < 6; i++)
    {
        if (acertos[i] != 0)
        {
            printf("%d ",acertos[i]);
        }
        
    }
    printf("}\n\n");

    return 0;
}