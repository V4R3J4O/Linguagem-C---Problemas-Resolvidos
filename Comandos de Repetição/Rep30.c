#include <stdio.h>

int main (void)
{
    int n;
    int an = 0;
    int bn = 0;
    int cn = 0;
    int i = 1;
    int contador = 1;
    
    printf ("A(n) = 1 + 2 + 3 + 4 + 5 + ... + n\n\n");
    printf ("B(n) = 1 - 2 + 3 - 4 + 5 + ... + (2n - 1)\n\n");
    printf ("C(n) = 1 + 3 + 5 + 7 + ... + (2n - 1)\n\n");

    printf ("Digite um valor para 'n': ");
    scanf("%d",&n);

    //Funcao A(n)
    printf ("\n\nA(%d) = ",n);

    for (int i = 1; i<= n; i++ )
    {
        printf("+ %d ",i);
        an += i;

    }
    
    printf("= %d",an);

    //Funcao B(n)

    printf ("\n\nB(%d) = ",n);
    
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            bn += i;
            printf("+ %d ",i);
        }
        else
        {
            bn -= i;
            printf("- %d ",i);
        }
        
    }
    
    printf("= %d",bn);
    
    //Funcao C(n)

    i = 1;
    
    printf ("\n\nC(%d) = ",n);
    
    while (contador <= n)
    {
        if (i%2 != 0)
        {
            cn += i;
            printf("+ %d ",i);
            contador++;
        }
        i++;
    }
    
    
    
    printf("= %d",cn);


}