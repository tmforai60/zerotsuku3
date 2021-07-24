#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 
#include <string.h>

typedef char String[1024];

int main(void){
    //1:配列宣言を使ってスタック領域に連続メモリを確保する
    char array[1024]="C";
    char* msg1=array;
    printf("%s",msg1);

    //2:mallocを使ってヒープ領域に連続メモリを確保する
    char* msg2=(char*)malloc(1024);
    msg2[0]='C';
    msg2[1]='\0';
    printf("%s",msg2);
    free(msg2);

    //3:文字列リテラルを使って静的領域に連続メモリを確保する
    const char* msg3="C";
    printf("%s",msg3);

    return 0;
}