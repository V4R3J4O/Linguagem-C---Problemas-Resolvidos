#include <stdio.h>

int ImprimaSerie (int i, int j, int k)
{
    if (j == i)
    {
        int f = i + k;
        printf("%d\n",f);
        return f;
        
    }
        
    else
    {
        int h = j + ImprimaSerie(i,j-1,k) + k;
        printf("%d\n",h);
        return h;
        
    }
        
}

int main (void)
{
    int a,b,c;

    printf("Digite o inicio do intervalo: ");
    scanf("%d",&a);
    printf("\nDigite o fim do intervalo: ");
    scanf(" %d",&b);
    printf("\nDigite o valor do incremento: ");
    scanf(" %d", &c);

    ImprimaSerie(a,b,c);
}