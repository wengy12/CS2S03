#include <stdio.h>

#define ui unsigned int

ui pack_characters(char a, char b){
    ui c = a;
    return (c << 8) + b;
}

void out(ui a){
    for (ui i = 1 << 15; i > 0; i /= 2){
        (a & i) ? printf("1") : printf("0");
    }
    printf("\n");
}

void main(){
    ui res;
    char a, b;
    scanf("%c %c", &a, &b);
    res = a;
    out(res);
    res = b;
    out(res);
    res = pack_characters(a, b);
    out(res);
}
