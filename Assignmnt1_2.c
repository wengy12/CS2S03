#include <stdio.h>

void main(){
    int max = 0, buff;
    for (int i = 0 ; i < 10; i++){
        printf("Enter number #%d: ", i+1);
        scanf("%d", &buff);
        if (buff > max){
            max = buff;
        }
    }
    printf("The top 1 is: %d", max);
}
