#include <iostream> 

using namespace std;

int main()
{
	//两个时间段, 相减
	int a, b, c, d; cin >> a >> b >> c >> d;
	//a c &c d
	//结尾和进位
	int h = c-a, m = d-b;
	if (m < 0)
	{
		h -= 1;
		m += 60;
	}
	//因为是当天,所以没什么问题
	if (h < 0)
	{
		h += 24;
	}//计算超过一天的
	h %= 24; m %= 60;
	if (m == 60) m = 0;
	if (h == 24) h = 0;

	cout << h << ' ' << m;
	return 0;
}