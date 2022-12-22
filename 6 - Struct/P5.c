#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float x, y, z;
}Vetor;

int main (void)
{
    Vetor a, b, soma;

    printf("Entre com as coordenadas para o primeiro vetor: ");
    scanf("%f%f%f",&a.x,&a.y,&a.z);
    fflush(stdin);
    printf("\nEntre com as coordenadas para o degundo vetor: ");
    scanf("%f%f%f",&b.x,&b.y,&b.z);

    soma.x = a.x + b.x;
    soma.y = a.y + b.y;
    soma.z = a.z + b.z;

    printf("\n\nEste e o resultado da soma do vetor A com o Vetor B = {%0.2f, %0.2f, %0.2f}\n\n",
    soma.x,soma.y,soma.z);

}
