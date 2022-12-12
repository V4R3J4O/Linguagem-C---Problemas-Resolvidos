#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i=0;
    char string [] = {"Descubra o tamanho dessa string, sera que voce consegue?"};

    while (string[i] != '\0')
    {
        i++;
    }
    
    printf("O tamno da String contida no programa e de: %d", i);
}