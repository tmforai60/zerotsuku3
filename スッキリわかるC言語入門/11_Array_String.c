#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 
#include <string.h>

typedef char String[1024];

int main(void){
    char ages[1024]={19,21,29,29};
    String str = "hello,Thank \0you";
    printf("%s\n",str);

    for(int i =0;i<23;i++){
        printf("%d, ",str[i]);
    }

    return 0;
}