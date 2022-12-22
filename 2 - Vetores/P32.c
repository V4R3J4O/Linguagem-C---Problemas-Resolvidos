#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int vetorx[5];
    int vetory[5];
    int interseccao[5] = {0};
    int uniao[10] = {0};
    int contador = 0;
    int soma = 0;
    long long int multiplicacao = 1;

//Atribuicao aleatoria sem repeticoes para o vetorX!
    for (size_t i = 0; i < 5; i++)
    {
        vetorx[i] = rand()%90 + 10;
    }

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (vetorx[j]==vetorx[i] && j != i)
            {
                vetorx[j] = rand()%90 +10;
            }
            
        }
        
    }

//Atribuicao aleatoria sem repeticoes para o vetorY!
    for (size_t i = 0; i < 5; i++)
    {
        vetory[i] = rand()%90 +10;
    }

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (vetory[j]==vetory[i] && j != i)
            {
                vetory[j] = rand()%90 + 10;
            }
            
        }
        
    }

//Atribuicao dos valores compartilhados entre o VetorX e VetorY para o vetor Interseccao!
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (vetorx[j] == vetory[i])
            {
                interseccao[contador] = vetorx[j];
                contador++;
            }
            
        }
        
        
    }

//Uniao dos valores de VetorX e VetorY para o vetor Uiao!
    contador = 0;

    for (size_t i = 0; i < 10; i++)
    {
        if (i <= 4)
        {
            uniao[i]= vetorx[i];
        }
        else
        {
            uniao[i] = vetory[contador];
            contador++;
        }
        
        
    }

//Calculando a soma dos elementos do VetorX com o VetorY
    for (size_t i = 0; i < 5; i++)
    {
        soma += vetorx[i] + vetory[i];
    }

//Calculando a multiplicacao dos elementos do VetorX com o VetorY
    for (size_t i = 0; i < 5; i++)
    {
        multiplicacao *= vetorx[i]*vetory[i];
    }
    

//Printando os resultados
    
    printf("Vetor X = { ");

    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ",vetorx[i]);
    }
    printf("}\n");
    printf("Vetor Y = { ");

    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ",vetory[i]);
    }
    printf("}\n\n");
    
    
    printf("Interseccao AB = { ");

    contador = 0;

    for (size_t i = 0; i < 5; i++)
    {
        if (interseccao[i] != 0)
        {
            printf("%d ",interseccao[i]);
            contador++;
        }
        
    }
    if (contador == 0)
    {
        printf("VAZIO ");
    }
    
    printf("}\n");
    
    printf("Uniao AB = { ");

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",uniao[i]);
    }
    printf("}\n\n");

    printf("Soma dos elementos presentes em VetorX e VetorY = %d\n",soma);
    printf("Multiplicacao dos elementos presentes em VetorX e VetorY = %lld\n\n",multiplicacao);
    

}