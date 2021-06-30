#include <stdio.h>
#include <time.h> 
#include <stdlib.h> /*乱数作成用*/

int main(void)
{
    int a =70;
    int* addrA = (int*)&a; //キャストはマスト
    printf("The address : %p\n The Content : %d\n ",addrA,*addrA);
    return 0;
}
/*
The address : 0x7ffeed39e6b8
The Content : 70
*/