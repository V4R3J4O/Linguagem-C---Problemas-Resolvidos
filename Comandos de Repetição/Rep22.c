#include <stdio.h>

int main (void)
{
    float contador=1, notas, soma = 0;

    printf ("Digite notas que estejam no intervalo [10,20]: ");
    scanf("%f",&notas);
    
    soma = notas;
    
    while (notas >= 10 && notas <= 20)
        {
            scanf("%f",&notas);
            if (notas >= 10 && notas <= 20)
            {   
                soma+=notas;
                contador++;
            }
            else
            {
                printf("\nNota invalida!\n\n");
            }
            
            
            
        }

    float media = soma/contador;

    printf("\nA soma das notas inseridas e igual a: %0.2f\n",soma);
    printf("A quantidade de notas inseridas e igual a: %0.2f\n",contador);
    printf("A media aritimetica das notas inseridas e igual a: %0.2f",media);
    

}