#include <stdio.h>

int main(void)
{
    int array[5];
    int *p;
    int i;

    /* 配列arrayに値を設定 */
    for (i = 0; i < 5; i++) {
        array[i] = i;}
   /* その内容を表示 */
   printf("Array  : ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);}
    /* その内容を表示(ポインタ版) */
    printf("\nPointor: ");
    for (p = &array[0]; p != &array[5]; p++) {
        printf("%d ", *p);}
    /* その内容を表示(ポインタ版)② */
    printf("\nPointor2: ");
    p = &array[0];
    for (i=0;i<5;i++) {
        printf("%d ",*(p+i));
    }

    /* arrayの各要素のアドレスを表示 */
    printf("\nAddress: \n");
    for (i = 0; i < 5; i++) {
        printf("&array[%d]... %p\n", i, (void*)&array[i]);
    }
    return 0;
}
