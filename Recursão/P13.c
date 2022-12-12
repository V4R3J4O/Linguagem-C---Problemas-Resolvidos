#include <stdio.h>

int SomaSerie (int i, int j, int k)
{
    if (j == i)
        return i + k;
    else
        return j + SomaSerie(i,j-1,k) + k;
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

    printf("\n\nA soma dos numeros inteiros contidos no intervalo de %d ate %d com o incremento de %d = %d\n\n",a,b,c,SomaSerie(a,b,c));
}