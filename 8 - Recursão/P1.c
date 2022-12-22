#include <stdio.h>

int somatorio (int x)
{
    if (x == 1)
    {
        return 1;
    }
    
    else
    {
        return x + somatorio(x-1);   
    }
    
}

int main (void)
{
    int n = 0;
    
    do
    {
        printf("Digite o valor para o qual deseja descobrir o somatorio de n = 1 ate o valor digitado: ");
        scanf("%d",&n);

        if (n <= 0)
        {
            printf("\nPor gentileza escolha um valor maior ou igual a 1.\n");
        }
        
    } while (n<=0);
    
    printf("\n\nO somatorio de 1 ate %d = %d\n\n",n,somatorio(n));

}