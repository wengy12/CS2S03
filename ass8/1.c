#include <stdio.h>
#include <stdlib.h>

#define elif else if

struct Leaf{
    int x;
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
    printf ("%d --> ", bamboo -> x);
    print_bamboo(bamboo -> next);
}

struct Leaf * find (struct Leaf * bamboo, int n){
    if (bamboo == NULL){
        return bamboo;
    }
    if (bamboo -> x == n){
        return bamboo;
    }
    return find(bamboo -> next, n);
}

void main(){
    int n;
    char k;
    struct Leaf * bamboo = NULL;
    printf ("Hello, my dear friend, if you want to add something into list, press '1' \n if you want to find something in the tree, press '2' \n if you playied enough and want to give me A+, press '3'\n");
    while (1){
        scanf ("%c", &k);
        if (k == '1'){
            printf ("Enter the int: ");
            scanf ("%d", &n);
            struct Leaf * ne = malloc(sizeof(struct Leaf));;
            ne -> x = n;
            ne -> next = NULL;
            bamboo = insert (bamboo, ne);
            printf ("The List now is: \n");
            print_bamboo (bamboo);
        }
        elif (k == '2'){
            printf ("Enter the int: ");
            scanf ("%d", &n);
            struct Leaf * ne = find(bamboo, n);
            if (ne){
                printf("%d is in the list\n", n);
            }
            else{
                printf("nope :(\n");
            }
        }
        elif (k == '3'){
            printf("hope you liked it");
            return;
        }
        else{
            printf("try it again, 1 - insert, 2 - find, 3 - exit\n");
        }
    }
}
