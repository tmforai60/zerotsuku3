#include <stdio.h>

//sizeof演算子の返す型はsize_t型である一方
//printf()の%dで表示できるのはint型なのでintにキャストしてる
int main(void){
    printf("Long is %d bite\n",(int)(sizeof(long)));
    printf("char is %d bite\n",(int)(sizeof(char)));
    printf("short is %d bite\n",(int)(sizeof(short)));
    printf("int is %d bite\n",(int)(sizeof(int)));
    printf("float is %d bite\n",(int)(sizeof(float)));
    printf("double is %d bite\n",(int)(sizeof(double)));
}

/*実行結果
Long is 8 bite
char is 1 bite
short is 2 bite
int is 4 bite
float is 4 bite
double is 8 bite
*/


