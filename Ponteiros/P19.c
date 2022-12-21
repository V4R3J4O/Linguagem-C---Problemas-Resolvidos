#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findbig(int v[],int size, int *big, int *count){
    
    *count = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            *big = v[i];
        else
        {
            if (*big < v[i])
                *big = v[i];    
        }  
    }

    for (int j = 0; j < size; j++)
    {
        if (*big == v[j])
            *count+=1;
    }
    
    
}

int main (void){
    srand(time(NULL));
    int vector[20];

    printf("\n\nArray = {");
    for (int i = 0; i < 20; i++)
    {
        if (i <= 18){
            vector[i]= rand()%21;
            printf("%d, ",vector[i]);
        }
        else{
            vector[i]= rand()%21;
            printf("%d}",vector[i]);
        }
    }
    printf("\n\n");
    int biggest, apearence;
    findbig(vector,20, &biggest, &apearence);
    printf("The biggest integer in the array is: %d and it apears %d time(s)!\n\n",biggest,apearence);
}