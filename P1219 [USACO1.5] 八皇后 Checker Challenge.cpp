//#include <iostream>
//
//using namespace std;
//
//const int N = 30;
//int n, ans[N], c;
////ÿһ��ֻ��һ���ʺ�
//bool col[N], dg[N], udg[N];
////�����ж��Ƿ��лʺ�
//
//void dfs(int x)
//{
//	if (x == n)
//	{
//		c++;
//		//if (c <= 2) 
//		//{
//			for (int i = 0; i < n; i++)//�ӵ�һ�п�ʼ, ���ÿһ�е���������һ��
//				cout << ans[i] << " ";
//			cout << endl;
//		//}
//		return;
//	}
//
//	for (int y = 0; y < n; y++)//���y����, x����
//	{
//		if (!col[y] && !dg[y + x] && !udg[y - x + n])
//		{
//			ans[y] = x + 1;
//			col[y] = dg[y + x] = udg[y - x + n] = true;
//			dfs(x + 1);
//			col[y] = dg[y + x] = udg[y - x + n] = false;
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	dfs(0);
//	cout << c;
//	return 0;
//}
