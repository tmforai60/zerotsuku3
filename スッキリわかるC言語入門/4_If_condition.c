#include <stdio.h>
#include <stdbool.h> /*bool型を使用する為*/
#include <stdlib.h> /*atoiを使う為に必要*/

typedef char String[1024];

int main(void)
{
    String answer;
    printf("Please enter the favilate number\n");
    scanf("%s",answer);

    int n = atoi(answer);
    if (n==2 || n==3) {
        printf("correct\n");
    }else if (n==5||n==6){
        printf("5 or 6 is wrong\n");
    }else{
        printf("You're totally wrong\n");
    }
    return 0;
}
