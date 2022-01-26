// 正方形と長方形を表示

#include <iostream>

using namespace std;

//--- 文字cをn個連続表示 ---//
void put_nchar(char c, int n)
{
	while (n-- > 0)
		cout << c;
}

//--- 文字cを並べて一辺の長さnの正方形を表示 ---//
void put_square(int n, char c = '*')
{
	for (int i = 1; i <= n; i++) {		// 全部でn行
		put_nchar(c, n);				// 文字cをn個表示して
		cout << '\n';					// 改行する
	}
}

//--- 文字cを並べて高さがhで横幅がwの長方形を表示 ---//
void put_rectangle(int h, int w, char c = '*')
{
	for (int i = 1; i <= h; i++) {		// 全部でh行
		put_nchar(c, w);				// 文字cをw個表示して
		cout << '\n';					// 改行する
	}
}

int main()
{
	put_square(5, '+');			// '+'を並べた一辺5の正方形
	put_square(5);				// '*'を並べた一辺5の正方形
	put_rectangle(4, 3, '-');	// '-'を並べた4行3列の長方形
	put_rectangle(4, 3);		// '*'を並べた4行3列の長方形
}
