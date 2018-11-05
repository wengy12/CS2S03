#include <stdio.h>

#define ui unsigned int

ui pow2(ui a, ui n){
    return a << n;
}

int main(){
    ui a, b;
    scanf("%u %u", &a, &b);
    printf("%u",pow2(a,b));
}
