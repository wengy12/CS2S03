//by Yunbing Weng, st #400158853
#include <stdio.h>

#define pi 3.1415927

void len(double * r){
    r[0] = 2*pi*r[0];//some black magic
}

void area(double *r){
    r[0] = pi*r[0]*r[0];//more black magic
}

void vol(double*r){
    r[0] = 4/3*pi*r[0]*r[0]*r[0];//a lot of black magic
}

void main(){
    double r;
    int i;
    void (*sadness[3])(double *) = {len, area, vol};
    printf("tell me what you want, \n"
           "if you want to find the circumference of a circle, press 0 and enter\n"
           "if you want to find the area of a circle, press 1 and enter\n"
           "if you want to find the volume of a sphere, press 2 and enter\n"
           "if you want something else, please call +1 781-452-4077\n");
    scanf("%d", &i);
    printf("now, enter the radius of whatever, don't forget to press enter\n");
    scanf("%lf", &r);
    (*sadness[i])(&r);
    printf("your answer is: %lf", r);
}
