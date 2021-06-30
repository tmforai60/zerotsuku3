#include <stdio.h>

int main(void)
{
    int array[5];
    int i;

    /* 配列arrayに値を設定 */
    for (i = 0; i < 5; i++) {
        array[i] = i;
    }

    /* その内容を表示 */
    for (i = 0; i < 5; i++) {
        printf("%d\n", array[i]);
    }

    /* arrayの各要素のアドレスを表示 */
    for (i = 0; i < 5; i++) {
        printf("&array[%d]... %p\n", i, (void*)&array[i]);
    }

    return 0;
}
/*
0
1
2
3
4
&array[0]... 0x7ffee04f96c0
&array[1]... 0x7ffee04f96c4
&array[2]... 0x7ffee04f96c8
&array[3]... 0x7ffee04f96cc
&array[4]... 0x7ffee04f96d0
*/
