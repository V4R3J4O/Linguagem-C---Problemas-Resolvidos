#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_sphere(float x, float *area, float *volume){

    *area = 4 * M_PI * powf(x,2.0);
    *volume = 4/3.0 * M_PI * powf(x,3.0);
}

int main (void){
    float r;
    printf("Insert the radius of the sphere: ");
    scanf("%f",&r);
    float area, volume;

    calc_sphere(r, &area, &volume);

    printf("\n\nFor a sphere with a radius equals %0.2f, \n\nits surface area is: %0.2f \t\tits volume is: %0.2f",
    r,area,volume);
}