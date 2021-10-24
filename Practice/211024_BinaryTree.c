#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int num;
    struct node *left,*right;
} NODE;

FILE *fp;
NODE *root;
NODE *pbtree(int);
void printnode1(NODE*);
void printnode2(NODE*);
void printnode3(NODE*);


int main(int argc, char *argv[]){
    int n;
    //struct node *root;
    fp=fopen("NUM.DAT","r");
    fscanf(fp,"%d",&n);
    root=pbtree(n);
    fclose(fp);

    printf("行きがけ順\n");
    printnode1(root);
    printf("\n通りかけ順\n");
    printnode2(root);
    printf("\n帰りかけ順\n");
    printnode3(root);
    
    return 0;
}

NODE *pbtree(int n){
    int nleft,nright;
    struct node *p;
    if(n==0)
        return NULL;
    nleft=(n-1)>>1;
    nright=n-nleft-1;
    p=malloc(sizeof(struct node));
    p->left=pbtree(nleft);
    fscanf(fp,"%d",&p->num);
    p->right=pbtree(nright);
    return p;
}

void printnode1(NODE *p){
    if(NULL !=p)
    {
        printf("%d ",p->num);
        printnode1(p->left);
        printnode1(p->right);
    }
}

void printnode2(NODE *p){
    if(NULL !=p)
    {
        printnode2(p->left);
        printf("%d ",p->num);
        printnode2(p->right);
    }
}

void printnode3(NODE *p){
    if(NULL !=p)
    {
        printnode3(p->left);
        printnode3(p->right);
        printf("%d ",p->num);
    }
}