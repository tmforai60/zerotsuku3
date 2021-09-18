#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * next;
};
typedef struct node NODE;

NODE *start, *end;
// NODE n1[1];
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

        // リストの先頭に追加する。
        p = start;
        start = get_node();
        start->num = x;
        start->next = p;
    }

    for (p=start;p != end; p=p->next){
        printf("%d\n", p->num);
    }
    return 0;

}

