#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//typedef unsigned long long ll;
//const int N = 200010;
//
//int main()
//{
//	
//	int t; scanf("%d", &t);
//	while (t--)
//	{
//		int h[N];
//		int n, f, a, b,ans = 0;
//
//		scanf("%d%d%d%d", &n, &f, &a, &b);
//		//����ÿ����ʱ��ļ��, ����������ʱ�����ĵ������ڿ��ػ����ĵĵ���, ��ô�͹ػ�����, ���µ���
//		if (n > 1) {
//			scanf("%d", &h[0]);
//			for (int i = 1; i < n; i++)
//			{
//				scanf("%d", &h[i]);
//				h[i - 1] = h[i] - h[i - 1];//Ԥ����ü������
//			}
//		}
//		else if (n == 1)
//		{
//			scanf("%d", &h[0]);
//			ll ah = a * h[0];
//			if (/*2 **/ b / h[0] <= a)
//			{
//				if (f > /*2 **/ b)
//				{
//					puts("YES");
//					continue;
//				}
//				else puts("NO");
//				continue;
//			}
//			else//������ػ����ڼ���ĵ�
//			{
//				if (f > ah)
//				{
//					puts("YES");
//					continue;
//				}
//				else //�����ǰ������֧�ִ���
//				{
//					puts("NO");
//					continue;
//				}
//			}
//		}
//		int flag = 1;
//		for (int i = 0; i < n-1; i++)
//		{///����ÿһ�����
//			ll ah = static_cast<ll>(a) * h[i];
//			if (/*2 **/ b / h[i] <= a)
//			{//�������ĵ���ڿ��ػ�
//				if (f > /*2 **/ b)//�����ǰ�������ڿ��ػ�����
//				{
//					ans += b;
//					flag++;
//					continue;
//				}
//				else //�����ǰ������֧�ֿ��ػ�
//				{
//					puts("NO");
//					break;//�˳�ѭ��
//				}
//			}
//			else//������ػ����ڼ���ĵ�
//			{
//				if (f / h[i] > a)
//				{
//					ans += a * h[i];
//					continue;
//				}
//				else //�����ǰ������֧�ִ���
//				{
//					puts("NO");
//					break;//�˳�ѭ��
//				}
//			}
//		}
//		if (ans == f)//��������Ϣ�ظ������yes, ����������no
//			puts("YES");
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//typedef long long ll;
//using namespace std;
//const int N = 2e5+10;
//
//ll h[N];
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		ll n, f, a, b;
//		ll ans = 0;
//		cin >> n >> f >> a >> b;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> h[i];
//			h[i] = h[i] - h[i-1];
//			ans += min(b, a * h[i]);
//		}
//		if (ans < f)puts("YES");
//		else puts("NO");
//	}
//	return 0;
//}
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  NO
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//NO		  NO
//YES		  YES
//YES		  YES
//NO		  NO
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//Y...	  YES...
//
//2 75 6 5
//1 2
//2 29 7 2
//2 5
//4 17 6 2
//2 7 8 9
//3 11 9 6
//6 8 10
//5 63 3 9
//1 5 7 8 10
//3 34 8 6
//1 5 10
//2 45 1 7
//4 7
//1 4 5 4
//5
//5 21 5 1
//1 2 3 5 6
//2 89 9 7
//2 6
//2 68 3 5
//2 4
//5 94 8 4
//1 2 3 9 10
//1 92 10 7
//7
//5 67 7 8
//1 3 4 6 10
//3 59 3 2
//2 4 5
//5 79 4 7
//2 5 8 9 10
//4 92 10 7
//1 8 9 10
//1 73 9 5
//1
//5 55 8 8
//2 5 7 8 10
//1 69 8 4
//4
//3 14 5 6
//2 4 6
//3 53 2 7
//1 5 10
//3 5 10 4
//2 7 10
//3 40 3 9
//3 6 10
//2 25 9 2
//3 9
//1 76 5 7
//10
//3 27 10 2
//4 6 9
//5 1 8 9
//3 5 7 8 10
//3 68 7 7
//6 7 ...