// 日付クラスDate（第５版：ヘッダ部）

#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include <iostream>

//===== 日付クラス =====//
class Date {
	int y;	// 西暦年
	int m;	// 月
	int d;	// 日

	static int dmax[];
	static int days_of_year(int y);				// y年の日数
	static int days_of_month(int y, int m);		// y年m月の日数

	// 調整された月（1～12の範囲外の不正な値を調整）
	static int adjusted_month(int m);

	// 調整されたy年m月のd日（1～28/29/30/31の範囲外の不正な値を調整）
	static int adjusted_day(int y, int m, int d);

public:
	Date();										// デフォルトコンストラクタ
	Date(int yy, int mm = 1, int dd = 1);		// コンストラクタ

	//--- year年は閏年か？ ---//
	static bool leap_year(int year) {
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}

	int year()  const { return y; }			// 年を返却
	int month() const { return m; }			// 月を返却
	int day()   const { return d; }			// 日を返却

	void set_year( int yy);					// 年をyyに設定
	void set_month(int mm);					// 月をmmに設定
	void set_day(  int dd);					// 日をddに設定

	void set(int yy, int mm, int dd);		// 日付をyy年mm月dd日に設定

	bool leap_year() const { return leap_year(y); }		// 閏年か？

	Date preceding_day() const;				// 前日の日付を返却
	Date following_day() const;				// 翌日の日付を返却

	int day_of_year() const;				// 年内の経過日数を返却

	int day_of_week() const;				// 曜日を返却

	std::string to_string() const;			// 文字列表現を返却

	Date& operator++();							// １日進める（前置増分）
	Date  operator++(int);						// １日進める（後置増分）

	Date& operator--();							// １日戻す　（前置減分）
	Date  operator--(int);						// １日戻す　（後置減分）

	Date& operator+=(int n);					// n日進める（Date += int）
	Date& operator-=(int n);					// n日戻す　（Date -= int）

	Date operator+(int n) const;					 // n日後を求める（Date + int）
	friend Date operator+(int n, const Date& date);  // n日後を求める（int + Date）

	Date operator-(int n) const;				// n日前を求める　（Date - int）

	long operator-(const Date& day) const;		// 日付の差を求める（Date - Date）

	bool operator==(const Date& day) const;		// dayと同じ日か？
	bool operator!=(const Date& day) const;		// dayと違う日か？

	bool operator> (const Date& day) const;		// dayより後か？
	bool operator>=(const Date& day) const;		// day以降か？
	bool operator< (const Date& day) const;		// dayより前か？
	bool operator<=(const Date& day) const;		// day以前か？
};

std::ostream& operator<<(std::ostream& s, const Date& x);	// 挿入子
std::istream& operator>>(std::istream& s,       Date& x);	// 抽出子

#endif
