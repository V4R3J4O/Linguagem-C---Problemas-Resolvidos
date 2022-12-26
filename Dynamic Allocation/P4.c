#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void capturastring (int tam)
{
    char *vet = malloc(tam * sizeof(char));
    printf("Digite o a sua string de tamnho %d: ",tam);
    fgets(vet,tam+1,stdin);
    printf("\n\nSeu texto sem vogais: ");

    for (int i = 0; i < tam; i++)
    {
        if (vet[i] != 'a' && vet[i] != 'A' && vet[i] != 'e' 
        && vet[i] != 'E' && vet[i] != 'i' && vet[i] != 'I'
        && vet[i] != 'o' && vet[i] != 'O' && vet[i] != 'u' && vet[i] != 'U')
        {
            printf("%c",vet[i]);
        }
        
    }
    
    printf("\n\n");
    free(vet);
}



int main (void){
   
    int tam;
    printf("Digite o tamnho do seu texto: ");
    scanf("%d",&tam);
    fflush(stdin);

    capturastring(tam);
}