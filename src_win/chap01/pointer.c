#include <stdio.h>

int main(void)
{
    int     hoge = 5;
    int     piyo = 10;
    int     *hoge_p;

    /* ポインタ型のサイズを表示する */
    printf("size of int*..%d\n", (int)sizeof(int *));

    /* それぞれの変数のアドレスを表示する */
    printf("&hoge..%p\n", (void*)&hoge);
    printf("&piyo..%p\n", (void*)&piyo);
    printf("&hoge_p..%p\n", (void*)&hoge_p);

    /* ポインタ変数hoge_pにhogeのアドレスを代入する */
    hoge_p = &hoge;
    printf("hoge_p..%p\n", (void*)hoge_p);

    /* hoge_pを経由してhogeの値を表示する */
    printf("*hoge_p..%d\n", *hoge_p);

    /* hoge_pを経由してhogeの値を変更する */
    *hoge_p = 10;
    printf("hoge..%d\n", hoge);

    return 0;
}
/*
size of int*..8
&hoge..0x7ffee7dc06c8
&piyo..0x7ffee7dc06c4
&hoge_p..0x7ffee7dc06b8
hoge_p..0x7ffee7dc06c8
*hoge_p..5
hoge..10
*/
