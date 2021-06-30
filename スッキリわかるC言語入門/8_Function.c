#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

typedef char String[1024];
extern void hello(String,int); //プロトタイプ宣言
extern int add(int,int); //プロトタイプ宣言

int main(void){
    hello("Juck",30); //戻り値なし

    printf("%d\n",add(100,20)); //戻り値あり①

    int ans1 = add(110,110);    //戻り値あり②
    printf("%d\n",ans1); 
    return 0;
}

void hello(String name,int a) //voidは戻り値がない型
{
    printf("Hello %s-san, %d-years old\n",name,a);
    return; //なくても良い
}

int add(int x, int y){ //戻り値と同じ型で宣言する
    int ans = x+y;
    return ans; //戻り値を入れる
}
