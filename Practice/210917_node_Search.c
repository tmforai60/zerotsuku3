#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    int num;
    struct node * next;
} NODE;

NODE *start, *end;

NODE * get_node(){
    return malloc(sizeof(NODE));
}

int main(int argc, char *argv[]){
    int x;
    int t=6;
    NODE *p;    // pointer to NODE
    NODE *q;    // pointer to NODE
    int rc;     // read item count

    // 番兵
    start = end = get_node();
    while (1){
        // １つの数字を読み込む。
        rc = scanf("%d", &x);
        if (rc == 0) break;
        printf("x=%d\n", x);

        // リストの最後に追加する。
     p = end;            // endを保存
        end = get_node();   // new 番兵
        p->num = x;
        p->next = end;
    }

    printf("Node List\n");
    for (p=start;p != end; p=p->next){
        printf("%d\n", p->num);
    }

    p=end;
    p->num = t;
    p=start;
    while(p->num != t) {
        p=p->next;
        if(p==end){
            printf("%d was not found.\n", t);
        }else{
            printf("%d was found.\n", t);
        }
    }

    return 0;
}

