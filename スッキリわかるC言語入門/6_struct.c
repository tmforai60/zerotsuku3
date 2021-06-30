#include <stdio.h>

typedef char String[1024];

int main(void)
{
/*①構造体の宣言*/
    struct MONSTER 
    {
        String name;
        int hp;
        int attack;
    };

/*---------------------------------------*/
/*②-1変数の生成_初期化なし*/
 struct MONSTER byakko;

/*②-2変数の生成_初期化あり_pattern1*/
 struct MONSTER seiryu ={"青龍",70,10};
 /*初期値は構造体に定義したメンバの順に記述。
 メンバの数に対して初期値の数が不足する場合、以降は0*/

/*②-3変数の生成_初期化あり_pattern2*/
 struct MONSTER suzaku={
     .name = "朱雀",
     .hp = 100,
     .attack = 30
 };
/*-----------------------------------*/

/*③メンバへのアクセス*/
  byakko.hp=100;
  byakko.attack=30;
  /*byakko.name="白虎"は不可。文字列型は＝での代入NG。変数の初期化時のみ*/

    return (0);
}