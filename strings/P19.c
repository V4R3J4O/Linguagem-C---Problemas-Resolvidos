#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    int age[10];
    char littlename[100];

    int i = 0;

    while (i <= 9)
    {
        printf("\nDigite uma idade: ");
        scanf(" %d",&age[i]);
        printf("\nAgora digite o nome da pessoa: ");
        fgets(name[i][0],100,stdin);
        i++;
    }
    
    printf("\n\nEstes foram os nomes digitados: %s",name);
}