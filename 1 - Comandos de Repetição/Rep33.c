#include <stdio.h>

int main (void)
{
    int contador = 1; int i = 0;
    int n;
    int a,b; 

    printf("Digite o numero de multiplos que voce deseja obter: \n");
    scanf("%d",&n);
    printf("Agora digite o primeiro parametro (!= 0): ");
    scanf("%d",&a);
    printf("\nAgora digite o segundo parametro (!= 0): ");
    scanf("%d",&b);

    printf("\n\n Os primeiros %d multiplos de %d e/ou %d: ",n,a,b);

    while (contador <= n)
    {
        if ((i%a == 0)||(i%b == 0))
        {
            printf(" %d,",i);
            contador++;
        }
        i++;
        
    }
    
}