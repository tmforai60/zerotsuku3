#include <stdio.h>
#include <time.h> 
#include <stdlib.h> /*乱数作成用*/

int main(void)
{
   int i;
    srand((unsigned int)time(NULL));
    for(i=0;i<5;i++){
         printf("%d\n",5+rand()%6);
    }
    return 0;
}
/*
5	9	5	7
6	9	5	7
6	5	7	10
6	6	9	6
9	10	5	6
*/

