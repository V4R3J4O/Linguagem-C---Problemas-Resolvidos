#include <stdio.h>

int fatorialquadruplo (int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        int fatorial (int v)
        {
            if (v == 0)
            {
                return 1;
            }
            else
            {
                return v * fatorial(v-1);
            }
        }

        return fatorial(2*x)/fatorial(x);
    }
        
    
}

int main (void)
{
    int valor;
    printf("Digite o valor que deseja calcular o fatorial quadruplo: ");
    scanf("%d",&valor);

    printf("\n\nO fatorial quadruplo de %d = %d",valor,fatorialquadruplo(valor));

}