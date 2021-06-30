#include <stdio.h>
#include <time.h> 
#include <stdlib.h> /*乱数作成用*/

int main(void)
{
    int a =70;
   // long addrA = (long)&a; //キャストはマスト
    //   printf("The address of a is : %ld\n",addrA);
    void* addrA = (void*)&a; //キャストはマスト
    printf("The address of a is : %p\n",addrA);
    return 0;
}
/*
1st : 140732897457880
2nd : 140732715103960
3rd : 140732887586520
*/