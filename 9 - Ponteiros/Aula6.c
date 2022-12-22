/*Escreva uma func¸ao que receba um array de inteiros V e os enderec¸os de duas variaveis
inteiras, min e max, e armazene nessas variaveis o valor mınimo e maximo do array.
Escreva tambem uma funcao main que use essa funcao.*/

#include <stdlib.h>
#include <stdio.h>

void maiorMenor (int *vet, int tam, int *menor, int *maior)
{
    *menor = *vet;
    *maior = *vet;  
    for (int i = 0; i < tam; i++)
    {
        if (*menor > *(vet + i))
            *menor = *(vet+i);
        if (*maior < *(vet + i))
            *maior = *(vet + i);
    }
    
}

int main()
{
    int maior, menor;
    int v[10] = {1,2,3,4,5,6,7,8,9,10};

    maiorMenor(v,10,&menor,&maior);

    printf("Maior elemento do vetor: %d\nMenor elemento do vetor: %d\n\n",maior,menor);

    return 0;
}