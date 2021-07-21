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
    NODE *p;    // pointer to NODE
    int rc;     // read item count

    // 番兵
    start = end = get_node();
    while (1){
        // １つの数字を読み込む。
        rc = scanf("%d", &x);
        if (rc == 0) break;
        printf("x=%d\n", x);

        // リストの最後に追加する。
 /*     p = end;            // endを保存
        end = get_node();   // new 番兵
        p->num = x;
        p->next = end; */

        // リストの最初に追加する。
        p = start;            // 
        start = get_node();   // new　NODE
        start->num = x;
        start->next = p;
    }

    for (p=start;p != end; p=p->next){
        printf("%d\n", p->num);
    }
    return 0;
}

