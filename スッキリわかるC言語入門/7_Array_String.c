#include <stdio.h>

typedef char String[1024];

int main(void)
{
    String msg = "HAL";
    printf("%c\n",msg[0]); //H
    printf("%c\n",msg[1]); //A
    printf("%c\n",msg[2]); //L
    printf("%s\n",msg);
    return 0;
}