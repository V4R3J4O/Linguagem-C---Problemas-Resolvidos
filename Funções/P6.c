#include <stdio.h>

int segundos (int h, int m, int s)
{
    return (h*60*60)+(m*60)+s;
}

int main (void)
{
    int horas, minutos, segundo;

    printf("insira as hora: ");
    scanf(" %d",&horas);
    printf("\nInsira os minutos: ");
    scanf(" %d",&minutos);
    printf("\nInsira os segundos: ");
    scanf(" %d",&segundo);

    printf("\n\nEssa e a quantidade de segundos que ja se passaram: %d\n\n",segundos(horas,minutos,segundo));
}