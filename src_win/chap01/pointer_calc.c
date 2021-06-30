#include <stdio.h>

int main(void)
{
    int hoge;
    int *hoge_p;

    /* hoge_p に hogeへのポインタを設定 */
    hoge_p = &hoge;
    /* hoge_p の値を表示 */
    printf("hoge_p..%p\n", (void*)hoge_p);
    /* hoge_pに 1加算 */
    hoge_p++;
    /* hoge_p の値を表示 */
    printf("hoge_p..%p\n", (void*)hoge_p);
    /* hoge_p に 3加算した値を表示 */
    printf("hoge_p..%p\n", (void*)(hoge_p + 3));

    return 0;
}
/*
hoge_p..0x7ffeef5da6c8 1*8+16*12 =  200
hoge_p..0x7ffeef5da6cc 1*12+16*12 = 204
hoge_p..0x7ffeef5da6d8 1*8+16*13  = 216
*/