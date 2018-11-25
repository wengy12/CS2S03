#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define elif else if

struct Leaf{
    char x;
    struct Leaf *next;
};

struct Leaf * insert (struct Leaf * bamboo, struct Leaf * new){
    if (bamboo == NULL){
        return new;
    }
    bamboo -> next = insert (bamboo -> next, new);
    return bamboo;
}

void print_bamboo (struct Leaf * bamboo){
    if (bamboo == NULL){
        printf ("NULL\n");
        return;
    }
    printf ("%c ", bamboo -> x);
    print_bamboo(bamboo -> next);
}

void reverse(struct Leaf** head)
{
    struct Leaf* prev   = NULL;
    struct Leaf* current = *head;
    struct Leaf* next = NULL;
    while (current != NULL) {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

int main(){
    char k[256];
    struct Leaf * bamboo = NULL;
    struct Leaf * rev = NULL;
    gets(k);
    for (int i = 0; i < strlen(k); i++){
        if (k[i] == ' '){
            continue;
        }
        if (k[i] == '*'){
            break;
        }
        //printf("%d", i);
        struct Leaf * ne = malloc(sizeof(struct Leaf));;
        ne -> x = k[i];
        ne -> next = NULL;
        struct Leaf * ne2 = malloc(sizeof(struct Leaf));;
        ne2 -> x = k[i];
        ne2 -> next = NULL;
        bamboo = insert (bamboo, ne);
        rev = insert (rev, ne2);
    }
    print_bamboo (bamboo);
    reverse(& rev);
    print_bamboo (rev);
}
