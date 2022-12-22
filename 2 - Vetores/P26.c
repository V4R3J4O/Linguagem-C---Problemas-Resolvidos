#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (void)
{
    srand(time(NULL));
    float vetor[10];
    float soma1 = 0;
    float soma2 = 0;
    float media;
    float desviopadrao;

    for (size_t i = 0; i < 10; i++)
    {
        vetor[i] = rand()%100;
        soma1 += vetor[i];
    }
    
    media = soma1/10;


    for (size_t i = 0; i < 10; i++)
    {
        soma2 += powf((vetor[i] - media),2.0);
    }
    
/*  
    Note que uma operação entre números inteiros sempre retornará um número inteiro. 
    Isso é evidente para a adição, subtração e multiplicação.
    Mas em uma divisão de inteiros, por exemplo 3/2, a expressão retornará apenas 
    a parte inteira do resultado,
    ou seja, 1  .

    Se quisermos um resultado não-inteiro, um dos operandos deve ser não-inteiro. 
    Nesse exemplo, poderíamos usar 3.0/2 ou 3/2.0, ou mesmo 3./2 ou (1.0 * 3)/2, pois, 
    em C, uma operação envolvendo um número não-inteiro sempre terá como resultado um número real
*/
    
    desviopadrao = sqrt((1.0/9) * soma2);

    printf("Vetor com valores no intervalo [0,100] = { ");

    for (size_t i = 0; i < 10; i++)
    {
        printf("%0.0f ",vetor[i]);
    }
    printf("}\n\n");

    printf("Desvio padrao = %f\n\n",desviopadrao);
    
}