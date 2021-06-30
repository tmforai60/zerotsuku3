#include <stdio.h>

typedef char String[1024];

int main(void)
{
/*①構造体の宣言+当該構造体への別名命名*/
    typedef struct 
    {
        String name;
        int hp;
        int attack;
    } Monster;

/*以降でMonsterという型を使用可能*/
/*---------------------------------------*/
/*②-1変数の生成_初期化なし*/
 Monster byakko;

/*②-2変数の生成_初期化あり_pattern1*/
 Monster seiryu ={"青龍",70,10};
 /*初期値は構造体に定義したメンバの順に記述。
 メンバの数に対して初期値の数が不足する場合、以降は0*/

/*②-3変数の生成_初期化あり_pattern2*/
 Monster suzaku={
     .name = "朱雀",
     .hp = 100,
     .attack = 30
 };
/*-----------------------------------*/

/*③メンバへのアクセス*/
  byakko.hp=100;
  byakko.attack=30;
  /*byakko.name="白虎"は不可。文字列型は＝での代入NG。変数の初期化時のみ*/

const String TEMPLATE ="%s : HP=%3d Attack=%2d\n";
printf(TEMPLATE,seiryu.name,seiryu.hp,seiryu.attack);

    return (0);
}