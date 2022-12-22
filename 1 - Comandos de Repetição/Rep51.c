#include <stdio.h>

int main (void)
{
    float salario = 1000;
    int ano = 1995;
    float aumento = (1.5/100);

    for (ano; ano <= 2022; ano++)
    {
        float salario = 1000;
        salario = salario + (salario*aumento);
        aumento *= 2;
        printf("Salario = %0.2f,  ANO: %d\n",salario,ano);
    }
    

}