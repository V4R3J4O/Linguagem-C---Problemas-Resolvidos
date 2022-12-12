#include <stdio.h>

int main (void)
{
    int fib = 1;
    int n;
    int soma = 1;
    int ultimo = 1;
    int penultimo = 0;

    printf("Informe ate que termo da sequencia de fibonacci voce quer imprimir: ");
    scanf("%d",&n);

    printf("\nFib(%d) =  0, 1, ",n);
    
    for (int i = 1; i <= n-2; i++)
    {
        

        soma = ultimo + penultimo;
        printf("%d, ",soma);
        penultimo = ultimo;
        ultimo = soma;
        
        
        
    }

    
} 