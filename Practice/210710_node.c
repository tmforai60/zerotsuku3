#include <stdio.h>
#include <string.h>

typedef struct node {
    int num;
    struct node * next;
} NODE;
NODE n1, n2;

int main(int argc, char *argv[]){
    NODE * src, *dest;
    src = &n1; dest = &n2;
    // memcpy(dest, src, sizeof(NODE));
    *dest = *src;
}