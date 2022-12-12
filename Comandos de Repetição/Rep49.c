#include <stdio.h>

int main (void)
{
    int salario = 1000;
    int carlos = salario;
    float joao = carlos/3;
    int meses = 0;

    while (joao <= carlos)
    {
        carlos = carlos + (carlos * 2/100);
        joao = joao + (joao * 5/100);
        meses++;

        printf("------------Mes: %d-------------\n",meses);
        printf("Salario de Carlos: %d          |\n",carlos);
        printf("Salario de Joao: %0.2f         |\n", joao);
        printf("--------------------------------\n\n");
    }

    printf ("Levara um total de %d meses para que o salario do Joao seja igual ou superior ao de carlos",meses);
    
}