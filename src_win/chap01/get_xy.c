#include <stdio.h>

void get_xy(double *x_p, double *y_p)
{
    /* ポインタ型のサイズを表示する */
    printf("size of double*..%d\n", (int)sizeof(*x_p));

    /* 仮引数x_p, y_pの値とアドレスを表示する。 */
    printf("x_p..%p, y_p..%p\n", (void*)x_p, (void*)y_p);
    printf("&x_p..%p, &y_p..%p\n", (void*)&x_p, (void*)&y_p);

    /* 引数で渡されたアドレスに、値を格納する。 */
    *x_p = 1.0;
    *y_p = 2.0;
}

int main(void)
{
    double x;
    double y;

    /* 変数x, yのアドレスを表示する。 */
    printf("&x..%p, &y..%p\n", (void*)&x, (void*)&y);
    /*
     * 引数として変数x, yのアドレスを渡し、
     * get_xy()側で、そのアドレスに値を格納してもらう。
     */
    get_xy(&x, &y);

    /* 受け取った値を表示する。 */
    printf("x..%f, y..%f\n", x, y);

    return 0;
}
/*
size of double*..8
&x..0x7ffee72bb6c0, &y..0x7ffee72bb6b8
x_p..0x7ffee72bb6c0, y_p..0x7ffee72bb6b8
&x_p..0x7ffee72bb698, &y_p..0x7ffee72bb690
x..1.000000, y..2.000000
*/