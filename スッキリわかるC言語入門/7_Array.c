#include <stdio.h>
#include <time.h> 
#include <stdlib.h> /*乱数作成用*/

int main(void)
{
    srand((unsigned)time(NULL));    //乱数生成の準備
    
    enum {FIRE,WATER,WIND,EARTH};   //宝石の属性を表す定数(順に0,1,2,3)
    const char GEM_CHARS[] ={'$','*','@','#'}; //③上記の宝石定数に応じた表示文字。記号なのでcharでok
    
    int gems[10];
    int count=0;
    int sum=0;

    printf("The order of Stone:\n");
    for (int i = 0; i<10; i++){    //①ループによる全要素の利用
        int gemType = rand()%4;
        gems[i]=gemType;           //①ループによる全要素の利用
        if(gems[i]==FIRE) count++; //②配列の集計_カウンタ
        sum +=gems[i];             //②配列の集計_合計
        printf("%d ",gemType);
    }
    printf("\nThe number of FIRE:%d \n",count);
    printf("The Sum of Stone figure:%d \n",sum);
    
    printf("The order of Stone:\n");
    for (int i = 0; i < 10; i++)    //③添え字に対応した情報の利用
    {
        printf("%c ",GEM_CHARS[gems[i]]); //%cはchar型用のプレースホルダ
    }  
    return 0;
}
/*
①ループによる全要素の利用
    The order of Stone:
    1 2 0 1 1 3 1 3 0 3 
    The number of FIRE:2 
②ループによる集計
    The number of FIRE:2 
    The Sum of Stone figure:15
③添え字に対応した情報の利用
    he order of Stone:
    * @ $ * * # * # $ # % 
*/
