#include <stdio.h>
#include <time.h> 
#include <stdlib.h> /*乱数作成用*/

#define triangle(base,high) ((base)*(high)/2.0)

int main(void)
{
   double area;

    //面積の算出と表示
    //((10.0)*(30.0)/2.0)への置換
    area = triangle(10.0,30.0);
    printf("%lf\n",area);
    
    return 0;
}
//Result: 150.000000
