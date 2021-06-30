#include <stdio.h>

// unsigned shortだとキャストなどが面倒なので
// 簡易的にintで作成してあります。

// 2021-06-22の演習１
// int *PARをint PAR[8]に書き換えてコードを動くように修正してください。

int *PAR;        // PAR
//int PAR[8];         // PAR  （これをハードウエアPARとみなす）

// 仮想アドレスの０～７ページを物理アドレスの０～７ページに割り当てる設定
// 演習１
int PAR_proto1[8] ={
    //  FEDCBA9876543210
      0b0000000000000000
    , 0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
};
// 演習２
int PAR_proto2[8] ={
    //  FEDCBA9876543210
      0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
     ,0b0000001100000000
};
// 演習３
int PAR_proto3[8] ={
    //  FEDCBA9876543210
      0b0000001110000000
     ,0b0000001100000000
     ,0b0000001010000000
     ,0b0000001000000000
     ,0b0000000110000000
     ,0b0000000100000000
     ,0b0000000010000000
     ,0b0000000000000000
};
// 演習４
int PAR_proto4[8] ={
    //  FEDCBA9876543210
      0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
     ,0b0000000000000000
};

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
    int prot;
    printf("Please select Par_proto No.\n");
    scanf("%d", &prot);
     if(prot == 1) PAR = &PAR_proto1[0];
     if(prot == 2) PAR = &PAR_proto2[0];
     if(prot == 3) PAR = &PAR_proto3[0];
     if(prot == 4) PAR = &PAR_proto4[0];
    
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

    // 06-22プロトタイプを１～４の間で選択するコードを入れてください。
    // 選択したプロトタイプを使用して以下のコードを実行してください。
    //      ⇒選択したPARプロトタイプをハードウエアPARにコピーする。

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