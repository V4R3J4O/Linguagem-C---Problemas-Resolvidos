#include <stdio.h>

int main (void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    while (a <= 1000)
    {
        if (((a*a)+(b*b))==(c*c))
        {
            printf("[A=%d, B=%d, C=%d], Foram um terno pitagorico!\n",a,b,c);

        }
        a++;
        b = a+1;
        c = b+1;
    }
    
    /*for (a; a <= 1000; a++)
    {   
        if (((a*a)+(b*b))==(c*c))
        {
            printf("[A=%d, B=%d, C=%d], Foram um terno pitagorico!\n",a,b,c);
        }
        b = a+1;
        c = b+1;
    
    }*/
    
}