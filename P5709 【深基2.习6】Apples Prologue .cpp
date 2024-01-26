//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int m, t, s;
//	cin >> m >> t >> s;
//	if (t == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	//有可能早就吃完了
//	m = m - s / t;
//	//有可能不满一个, 也要当一个算, 先判断是否能除尽, 除不尽就+1
//	if (m <= 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	if (s % t == 0)
//		cout << m;
//	else
//		cout << m - 1;
//	return 0;
//}