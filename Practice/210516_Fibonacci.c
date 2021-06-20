#include <stdio.h>
#include <time.h> 
#include <stdlib.h>


int Fibonacci(int num){
    if (num==0){
        return 0;
    }
    if (num==1){
        return 1;
    }
    if (num==2){
        return 1;
    }
    return Fibonacci(num-1)+Fibonacci(num-2);
}

int main(){
     printf("%d\n",Fibonacci(10));
}