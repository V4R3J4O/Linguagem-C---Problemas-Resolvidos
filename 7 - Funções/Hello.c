#include <stdio.h>

void imprima (char vetor[])
{
    int i = 0;
    while (vetor[i]!= '\0')
    {
        printf("%c\n",vetor[i]);
        i++;
    }
    
}

int main (void)
{
    char string[]={"Eu nao sei mais o que fazer!"};
    imprima(string);
}

