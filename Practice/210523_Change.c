#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

int sum;
int n =3;
int d[] = {1,10,25};

int call_count =0;

extern int change(int);

int main(void){
    printf("sum?" );
    scanf("%d", &sum);
    printf("sum=%d\n",sum);  
    n = change(sum);
    printf("コインの枚数=%d call_count=%d\n",n,call_count);
}


int change(int s){
  //  int i; for文の中で宣言可能
    int min;
    int ret =0;
    call_count++;
    if (s ==0) return 0;
    if (s < 0) return -1; //-1は未定義という意味

    min = -1; //初期値は未定義としておく
    for (int i =0; i <n; i++){
        ret = change(s - d[i]);
        if (ret >= 0){
            //解があった
            if(min ==-1) min = ret;
            if (ret <min) min = ret;
        }
    }
    return min ==  -1 ? -1: min +1;
}
