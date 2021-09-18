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
NODE *get_node(){
    return malloc(sizeof(NODE));
}

NODE *del_node(NODE *p){
    NODE *next;
    next = p->next;     // qは次のノード
    *p = *next;         // 次のノードを削除したいノードにコピー
    if (next == end)
        end = p;        // 次のノードがendであればendをずらす
    free(next);         // 次のノードを削除する
    return p;           // 次のノード（とみなせるノード、実は引数のP）
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
        p = end;
        end = get_node();
        p->num = x;
        p->next = end;
    }

    printf("list item\n");
    for (p=start;p != end; p=p->next){
        printf("%d\n", p->num);
    }

    p = start;
    while (p != end){
        if (p->num % 2 == 0) {
            printf("delete NODE num=%d\n", p->num);
            // pは既に次のノードを指しているので進めない。
            p = del_node(p);    
        } else {
            p = p->next;
        }
    }

    printf("list item after delete even\n");
    for (p=start;p != end; p=p->next){
        printf("%d\n", p->num);
    }
    return 0;

}

