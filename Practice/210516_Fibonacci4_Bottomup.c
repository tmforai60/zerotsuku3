#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

void Fibonacci(int,int);

int result_store[100];
int call_count =0;
//int a_n;

int main(void){
    int start_index =2, max =8;
    result_store[0]=0;
    result_store[1]=1;
    result_store[start_index]=1;

    Fibonacci(start_index, max);
    printf("total : %d\n", result_store[max]);
    return 0;
}

void Fibonacci(int a_n, int max){
    //call_count++;
    if(a_n < 2 || a_n > max) return;   
    result_store[a_n] = result_store[a_n-1]+result_store[a_n-2];

    return Fibonacci(a_n +1, max);
}


