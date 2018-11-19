#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//Doesnt work, dont have time to figure out why

struct bad_stack{
    char * a;
    struct bad_stack * prev;
};

char op[5] = "+-/*^";

char * pop (struct bad_stack * s){
    if (s == NULL){
        return NULL;
    }
    char * res = s -> a;
    s = s -> prev;
    return res;
}

void push (struct bad_stack * s, char * c){
    struct bad_stack * new_elm = malloc(sizeof(struct bad_stack));
    new_elm -> a = c;
    new_elm -> prev = NULL;
    s -> prev = new_elm;
    s = s -> prev;
}

bool is_operand(char a){
    for (int i = 0; i < 5; i++){
        if (a == op[i]){
            return true;
        }
    }
    return false;
}

void main(){
    struct bad_stack * sad;
    char ex[1000];
    printf("type the expression:\n");
    scanf("%s", ex);
    printf("7254935");
    for(int n = strlen(ex) - 1; n >= 0; n--){
        printf("%d", n);
        if (is_operand(ex[n])){
            char s1[1000], s2[1];
            s2[0] = ex[n];
            strcat(s1, pop(sad));
            strcat(s1, pop(sad));
            strcat(s1, s2);
            push(sad, s1);
        }
        else{
            char s2[1];
            s2[0] = ex[n];
            push(sad, s2);
        }
    }
}
