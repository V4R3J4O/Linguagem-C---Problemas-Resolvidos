#include <stdio.h>
#include <stdlib.h>

int main()
{
    int condicaodesaida = 0;
    char nome[60];

    while (condicaodesaida == 0)
    {
        printf("Digite um nome (use no maximo 60 caracteres): ");
        fgets(nome,60,stdin);
        printf("\n");

        if (nome[0]=='a' || nome[0]=='A')
        {
            printf("%s",nome);
            condicaodesaida = 1;
        }
        
    }
    
    return 0;
}