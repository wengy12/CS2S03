//by Yunbing Weng, st #400158853
#include <stdio.h>
#include <string.h>

#define whatever 1000

void main(){
    char s[whatever];
    printf("enter the line of whatever you want to be \"translated\"\n");
    gets(s);
    char *PIG = strtok(s, " ");
    while (PIG != NULL){
        printf("%s%cay ", PIG+1, PIG[0]);//a looot of black magic
        //if serious, we first print the word from second character, then print first, and then "ay"
        PIG = strtok(NULL, " ");
    }
}
