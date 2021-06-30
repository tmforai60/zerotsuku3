#include <stdio.h>

typedef int group[10];

int main(void)
{
    typedef int group[10]; /*新しい型group作成*/
    group totals;          /*変数に新しい型を用意*/
    int i;
    for (i=0;i<10;i++){
        totals[i]=10;
        printf("%d\n",totals[i]);
    }
    return (0);
}