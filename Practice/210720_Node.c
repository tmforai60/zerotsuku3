#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int num;
    struct node *next 
} NODE;

NODE *start,*p,*end,*getnode();

int main(void){
int x;

start = NULL;

printf("Enter a sequence of integers. followed by #:\n");
while (scanf("%d",&x)>0){
    p = start;
    start=(NODE*)malloc(sizeof(NODE));
    if(start=NULL){
        printf("Not enough memory");exit(1);
    }
    start->num=x;
    start->next=p;
}
printf("\nThe following numbers were read: \n");
    for (p=start;p!=NULL;p=p->next)
        printf("%5d\n",p->num);
}