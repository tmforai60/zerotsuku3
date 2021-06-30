#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

int main(int argc, char* argv[]){
    int x;
    int *px;
    px =&x;
    printf("px=%p px=%d\n", px);
     printf("px=%p px=%d\n", px);   
    printf("px=%p px=%d\n", px);
    printf("px=%p\n", ++px);
    printf("px=%p\n", ++px);
    return 0;
}