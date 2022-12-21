#include <stdio.h>

void achaMineMax (int vet[],int tam,int *min, int *max){

    for (int i = 0; i < tam; i++)
    {
        if (i == 0)
        {
            *min = vet[i];
            *max = vet[i];
        }
        else
        {
            if (*min > vet[i])
            {
                *min = vet[i];
            }
            if (*max < vet[i])
            {
                *max = vet[i];
            }
            
        }
        
    }
    
}

int main (void){
    int min, max, vet[10] ={1,2,3,4,5,6,7,8,9,10};
    achaMineMax(vet,10,&min,&max);
    printf("\n\nValor do menor elemento: %d\t\tValor do maior elemento: %d\n\n",min,max);
}