#include <stdio.h>
#include <stdlib.h>

void fraciona (float n, int * a, float *b){

*a = n/1;
*b = n -*a;

}

int main (void){

    float n;
    int intpart;
    float fracpart;
    printf("Insira o numero real: ");
    scanf("%f",&n);
    fraciona(n,&intpart,&fracpart);
    printf("\nParte Inteira: %d\t\tParte fracionaria: %0.3f\n\n",intpart,fracpart);
}