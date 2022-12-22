#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int a,b;
    int vetora[4];
    int vetorb[4];
    int ligado = 1;
    int soma = 0;
    int utilitario = 1;

    while (ligado == 1)
    {
        printf("Digite um valor positivo menor que 10000: ");
        scanf("%d",&a);
        printf("\nDigite um valor positivo menor que 10000: ");
        scanf("%d",&b);

        if (a > 10000 || a < 0 || b > 10000 || b < 0)
        {
            printf("\nPor favor digite um valor pertencente ao intervalo [0,10000]. Tente outra vez!");
            printf("\n\n");
        }
        else
        ligado = 0;
        
    }
    
    
    vetora[3] = a/1000;
    vetora[2] = a/100%10;
    vetora[1] = a/10%10;
    vetora[0] = a%10;
    
    vetorb[3] = b/1000;
    vetorb[2] = b/100%10;
    vetorb[1] = b/10%10;
    vetorb[0] = b%10;

    printf("\n\n");
    

    for (size_t i = 0; i < 4; i++)
    {
        soma+= (vetora[i]+vetorb[i])*utilitario;
        utilitario *= 10;
    }

    printf("Vetor A = { ");
    for (size_t i = 0; i < 4; i++)
    {
        printf("%d ",vetora[i]);
    }
    printf("}\n");
    
    printf("Vetor B = { ");
    for (size_t i = 0; i < 4; i++)
    {
        printf("%d ",vetorb[i]);
    }
    printf("}\n\n");

    printf("A soma de A+B feita a partir dos elementos dos vetores = %d\n\n",soma);
    
}