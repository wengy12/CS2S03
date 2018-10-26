//by Yunbing Weng, st #400158853
#include <stdio.h>

void add(double * a, double * b, double *c){
    c[0] = a[0] + b[0];
}

void sub(double * a, double * b, double *c){
    c[0] = a[0] - b[0];
}

void mul(double * a, double * b, double *c){
    c[0] = a[0] * b[0];
}

void div(double * a, double * b, double *c){
    c[0] = a[0] / b[0];
}

void main(){
    int i;
    double a, b, c;
    void (*sadness[4])(double *, double *, double *) = {add, sub, mul, div};
    printf("So lets imagine that you are using assembly now, \n"
           "you need to enter in this format \"# a b\"\n "
           "where a and b are decimal number, # response for what you want to do\n"
           "0 - a+b, 1 - a-b, 2 - a*b, 3 - a/b, for example\n"
           "0 1 2 will returns you 1 + 2 = 3\n");
    char whatever[4] = "+-*/";
    scanf("%d %lf %lf", &i, &a, &b);
    (*sadness[i])(&a, &b, &c);
    printf("%lf %c %lf = %lf", a, whatever[i], b, c);
}
