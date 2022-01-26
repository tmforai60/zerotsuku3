// 銀行口座クラス（第５版：ヘッダ部）

#include <string>
#include "Date.h"

class Account {
	std::string full_name;		// 口座名義
	std::string number;			// 口座番号
	long crnt_balance;			// 預金残高
	Date open;					// 口座開設日

public:
	// コンストラクタ
	Account(std::string name, std::string num, long amnt, int y, int m, int d);

	void deposit(long amnt);							// 預ける
	void withdraw(long amnt);							// おろす

	std::string name() const  { return full_name; }		// 口座名義を調べる
	std::string no() const    { return number; }		// 口座番号を調べる
	long balance() const      { return crnt_balance; }	// 預金残高を調べる
	Date opening_date() const { return open; }			// 口座開設日を調べる
};
