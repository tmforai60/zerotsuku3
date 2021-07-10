#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 
#include <string.h>

int main(void){
    int a[4]={19,20,29,29};
    int b[4]={19,20,29,29};
    int r = memcmp(a,b,16);
    if(r==0){
    printf("memcmpで比較した結果は等しい\n");        
    }
    if(a==b){
    printf("==演算子で比較した結果は等しい\n");        
    }
    return 0;
}
