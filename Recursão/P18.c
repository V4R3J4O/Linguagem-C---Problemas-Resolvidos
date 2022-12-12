#include <stdio.h>
#include <stdlib.h>


int super_fatorial(int x)
{
    if (x==0)
        return 1;
    else
    {
        int fatorial (int n)
        {
            if (n == 0)
            {
                return 1;
            }
            else
            {
                return n * fatorial (n-1);
            }
        }
        
        int soma = 1;
        for (int i = 0; i <= x; i++)
        {
            soma*= fatorial(i);
        }
            
        return soma;
    }
    
}

int main (void)
{
    int valor; 
    printf("Digite o numero que deseja calcular o superfatorial: ");
    scanf("%d",&valor);
    printf("\n\nO super fatorial de %d = %d\n\n",valor,super_fatorial(valor));
}