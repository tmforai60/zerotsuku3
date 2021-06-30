#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

extern int Fibonacci(int);

int result_store[100];
int call_count =0;

int main(int argc, char *args[]){
    int n, r;
    n = 10;
    r = Fibonacci(10);
    printf("fib n=%d r=%d call_count=%d\n",n,r,call_count);
}

int Fibonacci(int a_n){
    call_count++;
    if (a_n ==0) return 0;
    if (a_n ==1) return 1;
    if(result_store[a_n]) return result_store[a_n];

    result_store[a_n] = Fibonacci(a_n -1)+Fibonacci(a_n -2);

    return result_store[a_n]; 
}


