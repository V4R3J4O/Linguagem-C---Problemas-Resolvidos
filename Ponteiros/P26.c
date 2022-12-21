#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int raiz(int a,int b,int c,float *x1,float *x2){

    float delta = pow(b,2) - 4* a *c;
    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {

        *x1 = (-b + sqrt(delta))/(2*a);
        return 1;
    }
    else
    {
        *x1 = (-b + sqrt(delta))/(2*a);
        *x2 = (-b - sqrt(delta))/(2*a);
        return 2;
    }
    
    
}

int main (void){
    srand(time(NULL));
    int a,b,c;
    do{ 
        a= -50 + rand()%101;
    }while (a == 0);

    b= -50 + rand()%101;
    c= -50 + rand()%101;
    printf("\n\nFuncao a ser calculada as raizes: (%02d)*X² + (%02d)*X + (%02d) = 0\n",a,b,c);
    float x1, x2;

    switch (raiz(a,b,c,&x1,&x2))
    {
    case 0:
        printf("\n\nA FUNCAO NAO POSUI NENHUMA RAIZ\n\n");
        break;
    case 1:
        printf("\n\nA funcao possui uma raiz = %0.3f\n\n",x1);
        break;
    case 2:
        printf("\n\nA funcao possui duas raizes\nx1 = %0.3f\t\tx2 = %0.3f\n\n",x1,x2);
        break;
    
    default:
        break;
    }
}