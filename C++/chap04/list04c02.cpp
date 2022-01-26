// ’P‚È‚é•¶šŒ^‚Ì•„†•t‚«^•„†–³‚µ‚ğ”»’è

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "‚±‚Ìˆ—Œn‚Ì’P‚È‚é•¶šŒ^‚Í"
		 << (numeric_limits<char>::is_signed ? "•„†•t‚«" : "•„†–³‚µ")
		 << "•¶šŒ^‚Å‚·B\n";
}
