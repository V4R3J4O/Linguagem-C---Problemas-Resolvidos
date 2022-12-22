#include <stdio.h>

void lernotas (float *nota1, float *nota2){
    printf("Qual o valor da primeira nota: ");
    scanf("%f",nota1);
    fflush(stdin);
    printf("Qual o valor da segunda nota: ");
    scanf("%f",nota2);
    fflush(stdin);
}
void calcmedia (float nota1, float nota2, float *mediasimples, float *mediaponderada){
    *mediasimples = (nota1 + nota2)/2;
    *mediaponderada = (nota1 + nota2 *2)/3;
}

int main (void)
{
    float nota1, nota2, mediasimples , mediaponderada;
    lernotas(&nota1,&nota2);
    calcmedia(nota1,nota2,&mediasimples,&mediaponderada);

    printf("\n\nMedia Simples: %0.2f\t\tMedia Ponderada: %0.2f\n\n",mediasimples,mediaponderada);
}