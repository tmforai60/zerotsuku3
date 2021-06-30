#include <stdio.h>

typedef char String[1024];

int main(void)
{
    typedef struct 
    {
        String name;
        int hp;
        int attack;
    } Monster;

 Monster byakko={"白虎",100,30};
 Monster seiryu ={"青龍",70,10};
 Monster suzaku={"朱雀",100,30};

 Monster monsters[]={byakko,seiryu,suzaku}; //モンスター配列型を作って初期化

const String TEMPLATE ="%s : HP=%3d Attack=%2d\n";

for (int i = 0; i < 3; i++)
{
   printf(TEMPLATE,monsters[i].name,monsters[i].hp,monsters[i].attack);
}
    return (0);
}
/*
白虎 : HP=100 Attack=30
青龍 : HP= 70 Attack=10
朱雀 : HP=100 Attack=30
*/