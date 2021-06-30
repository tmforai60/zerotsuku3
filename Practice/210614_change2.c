#include <stdio.h>
#include <string.h>

int n = 3;
int d[] = {1,10,25};
// 要素F(0) = 0なので、それ以外の任意のF(i)がゼロであれば解なしとみなせるが、
// わかりにくいので、-1で初期化する。
int dyna[100];

int change(int a_s) {
    int min;                            // min coins
    int offset;                         // offset to previos value
    int nc;                             // number of coins
    dyna[0] = 0;                        // set up F(0) = 0
    for (int i = 1; i <= a_s; i++) {
        min = -1;
        for (int j = 0; j < n; j++){
            offset = i - d[j];
            if (offset >= 0) {
                // offset is valid.
                nc = dyna[offset];
                if (nc >= 0 ) {
                    // coin number is valid.
                    if (min == -1) min = nc;
                    if (nc < min) min = nc;
                }
            }
        }
        // if min is definde. then update dyna.
        if (min != -1) dyna[i] = min + 1;
    }
    return dyna[a_s];
}

int main(int argc, char *args[]){
    for (int s = 0; s < 50; s++){
        memset(dyna, -1, sizeof(dyna));
        // for (int i = 0; i < 100; i++){
        //     dyna[i] = -1;
        // }
        int r = change(s);
        printf("s=%d r=%d\n", s, r);
    }
}

