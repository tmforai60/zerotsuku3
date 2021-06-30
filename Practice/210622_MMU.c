#include <stdio.h>

// unsigned shortだとキャストなどが面倒なので
// 簡易的にintで作成してあります。

int *PAR;        // PAR
/* int PAR[8];        // PAR (ハードウェア)
*/
// 演習①仮想アドレスの０～７ページを物理アドレスの０～７ページに割り当てる設定
int PAR_proto1[8] ={
    //  FEDCBA9876543210
      0b0000000000000000
     ,0b0000000010000000
     ,0b0000000100000000
     ,0b0000000110000000
     ,0b0000001000000000
     ,0b0000001010000000
     ,0b0000001100000000
     ,0b0000001110000000
};

// 演習②仮想アドレスの０～７ページをすべて物理アドレスの６ページに割り当てるPARの設定。
/* int PAR_proto1[8] ={
    //  FEDCBA9876543210
      0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
}; */

// 演習③仮想アドレスの０～７ページを物理アドレスの７～０ページ（逆順に）割り当てるPARの設定。
/* int PAR_proto1[8] ={
    //  FEDCBA9876543210
      0b0000001110000000
     ,0b0000001100000000
     ,0b0000001010000000
     ,0b0000001000000000
     ,0b0000000110000000
     ,0b0000000100000000
     ,0b0000000010000000
     ,0b0000000000000000
}; */

// 演習④仮想アドレスの０～７ページを物理アドレスの２４～３１ページに割り当てるPARの設定。
/* int PAR_proto1[8] ={
    //  FEDCBA9876543210
      0b0000001110000000
     ,0b0000001100000000
     ,0b0000001010000000
     ,0b0000001000000000
     ,0b0000000110000000
     ,0b0000000100000000
     ,0b0000000010000000
     ,0b0000000000000000
}; */

int main(int argc, char*argv[]){
    // アドレス
    int paddr;       // 物理アドレス
    int vaddr;       // 仮想アドレス

    // 仮想アドレスの分解要素
    int selector;               // （１）セレクター
    int block ;                 // （２）ブロック
    int offset;                 // （３）オフセット

    // 表示用
    int va_start;       // 表示開始仮想アドレス

    // プロトタイプ設定
    // PAR = PAR_proto1;        // 配列名は、配列定数であり、実態の配列領域の先頭アドレスになっている。
    PAR = &PAR_proto1[0];
    // NG PAR_proto1 = &PAR_proto1[1];

    for (int i = 0; i < 8; i++){
        // ポインタが指している先の要素指定を、「」を使って配列的な記法でアクセスしている。
        // 次のaはすべて同じ値になる。
        //  a = PAR[0];
        //  a = PAR_proto1[0]
        //  a = *PAR
        //  a = *(PAR+0)
        // printf("%d ", PAR[i]); 
    }
    // printf("\n");

    while (scanf("%d", &va_start)){
        printf("start addr=%d\n", va_start);
        for (vaddr = va_start; vaddr < va_start + 10; vaddr++){
            selector = vaddr >> 13 & 0x7;   // 0b111
            block = vaddr >> 6 & 0x7F;      // 0b1111111
            offset = vaddr & 0x3F;          // 0b111111
            // paddr = (PAR[selector] + block) << 6;
            paddr = (PAR[selector] + block) * 64 ;
            paddr += offset;
            printf("vaddr=%d (selector=%d block=%d offset=%d PAR=%d) paddr=%d\n", vaddr, selector, block, offset, PAR[selector], paddr);
        }
    }
    return 0;
}