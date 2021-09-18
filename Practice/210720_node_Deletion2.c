#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int num;
    struct node * next;
} NODE;

NODE *start, *end;

NODE * get_node(){
    return malloc(sizeof(NODE));
}

void print_tail(NODE *a_p){
    assert(a_p != end);
    printf("tail start=%p end=%p a_p=%p\n",start, end, a_p);
    while (a_p != end){
        printf("tail p=%p x=%d\n",a_p,a_p->num);
        a_p = a_p->next;
    }
}

void print_head(NODE *a_p){
    assert(a_p != end);
    NODE *p=start;
    printf("head start=%p end=%p a_p=%p\n",start, end, a_p);
    while (p != a_p){
        printf("head p=%p x=%d\n",p,p->num);
        p = p->next;
        if (p == a_p) break;
    }
    printf("head p=%p x=%d\n",p,p->num);
}


int main(int argc, char *argv[]){
    int x;
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

    printf("削除前\n");
    for (p=start;p != end; p=p->next){
        printf("%d\n", p->num);
    }

    p=start;
    while(p != end){
  /*       print_head(p);
  //      print_tail(p); */
        q=p->next;
        if(q==end){
            printf("最終ノード\n");
            end=p;
        }
        if(p->num % 2 ==0){
            *p=*q;
            free(q);
        }else{
             if(p==end){
             end = get_node();   // new 番兵
             p->num = x;
             p->next = end;
             break; 
            }
            p = p->next;
        }
        
    }

    printf("削除後\n");
   for (p=start;p != end; p=p->next){
        printf("%d\n", p->num);
    }

    return 0;
}

