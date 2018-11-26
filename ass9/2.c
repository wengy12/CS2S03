#include <stdio.h>
#include <string.h>

#define MAXSIZE  1000

char stack[MAXSIZE];
int top = -1, front = 0;

char pop() {
   char data;
   if(top != -1) {
      data = stack[top];
      top = top - 1;
      return data;
   }
}

void push(char data) {
    if (top == MAXSIZE){
        printf("exeeded limit");
        return;
    }
    top = top + 1;
    stack[top] = data;
}

void main(){
    char original[MAXSIZE], b;
    gets(original);
    for (int i = 0; i < strlen(original); i++){
        if (original[i] != ' ' && original[i] != '.' && original[i] != ',' && original[i] != ':'){
            push(original[i]);
        }
    }
    for (int i = 0;i < (strlen(original) / 2);i++){
      if (stack[top] == stack[front]){
        pop();
        front++;
      }
      else{
        printf("\"%s\" is not a palindrome\n", original);
        break;
      }
    }
    if ((strlen(original) / 2)  ==  front){
        printf("\"%s\" is palindrome\n", original);
    }
}
