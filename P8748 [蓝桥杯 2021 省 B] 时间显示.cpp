//#include <iostream>
//
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll n;
//	cin >> n;
//	n /= 1000;
//	//n�������
//	//modһ�������
//	n %= 86400;//�õ������24Сʱ�ڵ�����
//	int h, m, s;
//	h = n / 3600;
//	n = n - h * 3600;//�õ�ʣ�µķ��Ӻ���
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