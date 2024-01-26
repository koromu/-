//#include <iostream>
//
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll n;
//	cin >> n;
//	n /= 1000;
//	//n变成了秒
//	//mod一天的秒数
//	n %= 86400;//得到了最后24小时内的秒数
//	int h, m, s;
//	h = n / 3600;
//	n = n - h * 3600;//得到剩下的分钟和秒
//	m = n / 60;
//	n = n - m * 60;
//	s = n;
//	h %= 24;
//	if (h < 10)
//	{
//		printf("0%d:", h);
//	}
//	else printf("%d:", h);
//
//	if (m < 10)
//	{
//		printf("0%d:", m);
//	}
//	else printf("%d:", m);
//	
//	if (s < 10)
//	{
//		printf("0%d", s);
//	}
//	else printf("%d", s);
//}