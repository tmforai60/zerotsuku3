#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 
#include <string.h>

int main(void){
    int gems[10];
    memset(gems,0,40);
    printf("memの内容は\n");
    for (int i = 0; i <= 9; i++) {
        printf("%d ",*(gems+i));
    }
    return 0;
}