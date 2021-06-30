#include <stdio.h>
#include <stdbool.h> /*bool型を使用する為*/
#include <stdlib.h> /*atoiを使う為に必要*/

typedef char String[1024];

int main(void)
{

    String answer;
 
    enum{OPTION2=2,OPTION3=3};

    printf("Please enter the favilate number\n");
    scanf("%s",answer);

    int n = atoi(answer);

    switch (n){
        case OPTION2:
        case OPTION3:
            printf("Correct\n");
            break;
        case 5:
        case 6:
            printf("5 or 6 is Wrong\n");
            break;
        default:
            printf("You're totally Wrong\n");
    }

    return 0;
}
