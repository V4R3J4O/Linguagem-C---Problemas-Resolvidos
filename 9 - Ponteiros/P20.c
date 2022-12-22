#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int negativos(float *vet, int n){
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(vet+i) < 0)
            count += 1;
        
    }

    return count;
}

int main (void){
    srand(time(NULL));
    float vet[20];

    for (size_t i = 0; i < 20; i++)
    {
        vet[i] = (-20 + rand()%41)/1.9;
    }
    
    int negative = negativos(vet,20);

    printf("\n\nA quantidade de numeros negativos presentes do array é de %d",negative);
        printf("\n\nArray = {");
    for (int i = 0; i < 20; i++)
    {
        if (i <= 18){
            printf("%0.2f, ",vet[i]);
        }
        else{
            printf("%0.2f}",vet[i]);
        }
    }
    printf("\n\n");
}