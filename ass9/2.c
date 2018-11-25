#include <stdio.h>

const int MAXSIZE = 1000;
char * stack[MAXSIZE];
int top = -1;

char * pop() {
   char data[MAXSIZE];

   if(top != -1) {
      data = stack[top];
      top = top - 1;
      return data;
   }
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
