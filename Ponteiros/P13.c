#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (void)
{
    char texto1[] = "Eu amo a minha mae e minha irma!";
    char texto2[] = "minha irma";

    char *ptrchar;

    ptrchar = strstr(texto1,texto2);

    int cnt = 0;
    while (cnt < sizeof(texto2)-1)
    {
        *(ptrchar + cnt) = '-';
        printf("\n%s",texto1);
        cnt++;
    }
     //printf("\n%s\n",texto1);
     //printf("\n\n%d\n\n",sizeof(texto2));
}