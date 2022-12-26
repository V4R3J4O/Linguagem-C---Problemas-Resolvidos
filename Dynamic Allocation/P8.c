#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int contador = 0;
    int *vet = calloc (1,1500*sizeof(int));

    while (contador < 1500)
    {
        int i = 0;
        if (vet[i] == 0)
        {   
            contador+= 1;
        }
        i++;
    }
    
    if (contador != 1500)
    {
        printf("O vetor possui valores diferentes de zero! contador = %d",contador);
    }
    else
        printf("O vetor foi alocado e teve seus valores zerados com sucesso!"); 

    contador = 0;
    while (contador < 1500)
    {
        
        vet[contador] = contador;
        contador++;
    }

    for (int i = 0; i < 1500; i++)
    {
        if (i <= 10 || i >= 1490)
        {
            printf("\n%d",vet[i]);
        }
          
    }
    

}