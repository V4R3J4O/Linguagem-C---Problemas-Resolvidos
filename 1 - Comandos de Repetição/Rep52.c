#include <stdio.h>

int main (void)
{
    int saque;
    int cem, cinquenta, vinte, dez, cinco, dois, um;

    printf ("Qual a quantia que voce deseja sacar? ");
    scanf ("%d",&saque);

    cem = saque/100;
    saque = saque - cem*100;
    cinquenta = saque/50;
    saque = saque - 50*cinquenta;
    vinte = saque/20;
    saque = saque - 20*vinte;
    dez = saque/10;
    saque = saque - 10*dez;
    cinco = saque/5;
    saque = saque - 5*cinco;
    dois = saque/2;
    saque = saque - 2*dois;
    um = saque;

    printf("\n\nNotas de 100: %d\n",cem);
    printf("Notas de 50: %d\n",cinquenta);
    printf("Notas de 20: %d\n",vinte);
    printf("Notas de 10: %d\n",dez);
    printf("Notas de 5: %d\n",cinco);
    printf("Notas de 2: %d\n",dois);
    printf("Notas de 1: %d\n\n",um);
    
}