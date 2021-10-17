#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int num;
    struct node *left,*right;
} NODE;

NODE *start,*left,*right;

NODE * get_node(){
    return malloc(sizeof(NODE));
}

int main(int argc, char *argv[]){
    int x;
    NODE *p;    // pointer to NODE
    NODE *q;    // pointer to NODE
    int rc;     // read item count

    start = get_node(); // 番兵
    start->right = start->left = start;

    while (1){
        // １つの数字を読み込む。
        rc = scanf("%d", &x);
        if (rc == 0) break;
        printf("x=%d\n", x);

        p = get_node(); 
        p->num = x; 
        q=start->left;
        start->left=p;
        p->right=start;
        q->right=p;
        p->left=q;
    }

    printf("削除前\n");
    for (p=start->right;p != start;p=p->right){
        printf("%d\n", p->num);
    }

    for(p=start->right;p != start;){
        q=p->left;
        if(p->num % 2 ==0){
            p->left->right=p->right;
            p->right->left=p->left;
            free(p);
            p = q->right;
        }else{
            p = p->right;
        }
    } 

    printf("削除後\n");
    for (p=start->right;p != start;p=p->right){
        printf("%d\n", p->num);
    //    if (p == start) break;
    }

    return 0;
}

