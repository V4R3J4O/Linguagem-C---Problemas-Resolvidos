#include <stdio.h>

int main (void)
{
    int n;
    int j = 1;
    float soma = 0;

    printf ("Defina o valor 'n' para a funcao S(n):");
    scanf("%d",&n);

    printf("\n\n S(%d) = ",n);

    for (int i = 1; i <= n; i++)
    {
        while (j%2 == 0)
        {
            j++;
        }
        
        soma += j/i;

        printf ("+ %d/%d ",j,i);
        j++;
    }

    printf("= %0.2f",soma);
    
}