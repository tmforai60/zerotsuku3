#include <stdio.h>

int main(void){
    printf("float is %d bite\n",(int)(sizeof(float)));
    printf("double is %d bite\n",(int)(sizeof(double)));
    printf("double is %d bite\n",(int)(sizeof(double)));
}



/*実行結果
Long is 8 bite
char is 1 bite
short is 2 bite
int is 4 bite
float is 4 bite
double is 8 bite
float is 4 bite
double is 8 bite
*/


