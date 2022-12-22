#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convcoordenada (float a, float b, float *x, float *y)
{
    *x = a * cosf(b);
    *y = a *sinf(b);
}


int main (void)
{
    float raio, radiano;
    printf("Digite o valor do raio: ");
    scanf("%f",&raio);
    getchar();
    printf("Agora digite a outra coordenada em radianos: ");
    scanf("%f",&radiano);
    getchar();
    float x, y;
    
    printf("\n\nCoordenadas polares: Raio = %0.2f\t\t Radianos = %0.2f\n\n",raio,radiano);
    convcoordenada(raio,radiano,&x,&y);
    printf("Coordenadas convertidas para cartesianas: X = %0.2f\t\tY = %0.2f\n\n",x,y);
    return 0;
}