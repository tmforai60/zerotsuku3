#include <stdio.h>

extern void funcA(int);
extern void funcB(int*);//戻り値が配列の場合はポインタ設定

int main(void){
    int a = 5;
    int b[3];
    b[0]=5;
    b[2]=10;

    funcA(a);
    funcB(b); /*配列bの先頭アドレスを渡している
    funcB(&b[0])と同義。配列変数名は当該配列の先頭要素を
    示すアドレスに化ける。ポインタ渡し*/

    printf("a=%d, b[0]=%d,b[2]=%d\n",a,b[0],b[2]);
    return 0;
}

void funcA(int x){
    x=100;
}

void funcB(int x[3]){ //int *x　でもOK
    x[0]=100;
    *(x+2)=500; //x[2]と同義
}
// a=5, b[0]=100,,b[2]=500
