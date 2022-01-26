// 乱数の生成（実行するたびに同じ乱数を生成）

#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	int x = rand();			// 0以上RAND_MAX以下の乱数を生成
	int y = rand();			// 0以上RAND_MAX以下の乱数を生成

	cout << "xの値は" << x << "で、yの値は" << y << "です。\n";
}
