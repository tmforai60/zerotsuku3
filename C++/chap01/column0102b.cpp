// 乱数の生成（実行するたびに異なる乱数を生成）

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));		// 現在の時刻から種を決定

	int x = rand();			// 0以上RAND_MAX以下の乱数を生成
	int y = rand();			// 0以上RAND_MAX以下の乱数を生成

	cout << "xの値は" << x << "で、yの値は" << y << "です。\n";
}
