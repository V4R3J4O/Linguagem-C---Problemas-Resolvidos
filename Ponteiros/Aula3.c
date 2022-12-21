#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char phrase[100];
    scanf("%100[^\n]", phrase);
    printf("\n%s",phrase);

    printf("\n Enderero de phrase: %p",phrase);
    printf("\n Enderero de phrase: %p",&phrase);
    printf("\n Enderero de phrase: %p",&phrase[0]);
    printf("\n Enderero de phrase: %p",&phrase[1]);
    printf("\n Enderero de phrase: %p",&phrase[2]);
    printf("\n Enderero de phrase: %p",&phrase[3]);
    printf("\n Enderero de phrase: %p",&phrase[4]);
    printf("\n Enderero de phrase: %p",&phrase[5]);
    printf("\n Enderero de phrase: %p",&phrase[6]);
    printf("\n Enderero de phrase: %p",&phrase[7]);
    printf("\n Enderero de phrase: %p",&phrase[8]);
    printf("\n Enderero de phrase: %p",&phrase[9]);
    printf("\n Enderero de phrase: %p",&phrase[10]);
    printf("\n Enderero de phrase: %p",&phrase[11]);
    printf("\n Enderero de phrase: %p",&phrase[12]);
} 