#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dataPorExtenso (char vetor[11])
{
    int i = 0;

    printf("\nEsta e a data escrita com o mes em extenso:\n");
    while (vetor[i] != '\0')
    {   
        if (i<2 || i > 5 )
        {
            printf("%c",vetor[i]);
        }
        
        if (i == 3 && vetor[i] == '0')
        {
            switch (vetor[4])
            {
            case '1':
                printf(" de JANEIRO de ");
                break;
            case '2':
                printf(" de FEVEREIRO de ");
                break;
            case '3':
                printf(" de MARCO de ");
                break;
            case '4':
                printf(" de ABRIL de ");
                break;
            case '5':
                printf(" de MAIO de ");
                break;
            case '6':
                printf(" de JUNHO de ");
                break;
            case '7':
                printf(" de JULHO de ");
                break;
            case '8':
                printf(" de AGOSTO de ");
                break;
            case '9':
                printf(" de SETEMBRO de ");
                break;  
            default:
                break;
            }
        }
        
        if (vetor[3] == 1)
        {
            switch (vetor[4])
            {
            case '0':
                printf(" de OUTUBRO de ");
                break;
            case '1':
                printf(" de NOVEMBRO de ");
                break;
            case '2':
                printf(" de DEZEMBRO de ");
                break;
            
            default:
                break;
            }
        }
        
        
    i++;   
    }
    
    printf("\n\n");
}

int main (void)
{
    char data[11];
    printf("Digite uma data no seguinte modelo \"DD/MM/AAAA\": ");
    fgets(data,11,stdin);

    dataPorExtenso(data);
}