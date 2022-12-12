#include <stdio.h>

float media (float a, float b, float c, char d)
{
    if (d == 'A')
    {
        return (a+b+c)/3;
    }
    if (d == 'P')
    {
        return (a*5 + b*3 + c*2)/10;
    }   
}

int main (void)
{
    float num1 = 2.5, num2 = 1, num3 = 8.7;
    char tipo = 'P';

    printf("A media dos alunos seguindo o modelo ponderado e : %0.2f", media(num1,num2,num3,tipo));
    printf("\nA media dos alunos seguindo o modelo aritimetico e : %0.2f\n\n", media(num1,num2,num3,'A'));

}