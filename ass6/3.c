#include <stdio.h>

#define ui unsigned int

void out(ui a);

void unpack(ui a){
    char c, d;
    out(a);
    ui b = a >> 8;

    a -= b;
    c = b;
    d = a >> 8;
    out(b);
    printf("%c \n", c);
    out(a >> 8);
    printf("%c \n", d);
}

void out(ui a){
    for (ui i = 1 << 15; i > 0; i /= 2){
        (a & i) ? printf("1") : printf("0");
    }
    printf("\n");
}

void main(){
    ui a;
    scanf("%u", &a);
    unpack(a);
}
