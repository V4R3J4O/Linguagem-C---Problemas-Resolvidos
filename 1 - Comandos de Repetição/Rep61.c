#include <stdio.h>

int main (void)
{
    long int produto;
    int palindromo = 0;
    int digito1, digito2, digito3, digito4, digito5, digito6;
    int maior;
    int contador = 0;
    int contador2 = 0;
    int h, g;
    
    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            produto = i * j;
            digito1 = produto/100000;
            digito2 = (produto%100000)/10000;
            digito3 = (produto%10000)/1000;
            digito4 = (produto%1000)/100;
            digito5 = (produto%100)/10;
            digito6 = produto%10;

            if (produto >= 100000 && digito1 == digito6 && digito2 == digito5 && digito3 == digito4)
            {
                palindromo = produto;
                printf(" %d * %d = %d\n",i,j,palindromo);
                contador++;
            }
            if (contador == 1)
            {
                maior = palindromo;
            }
            if (palindromo > maior)
            {
                maior = palindromo;
                h = i;
                g = j;
            }
            contador2++;
        }
        
    }
    printf("\nTOTAL DE OPERACOES REALIZADAS: %d",contador2);
    printf("\n\nO maior palindromo resultante do produto de numeros de 3 algarismos e: %d * %d = %d\n\n",h,g,maior);
}