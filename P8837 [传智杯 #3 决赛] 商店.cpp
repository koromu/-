//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 100010;
//typedef long long ll;
//int n, m, ans;
//int w[N];
//ll c[N];
//bool stc[N];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		scanf("%d", &w[i]);
//	for (int i = 0; i < m; i++)
//		scanf("%d", &c[i]);
//	//ÿ���ҵ�ӵ�б������Ʒ�������Ǯ����
//	sort(w, w + n); sort(c, c + m);
//	for (int i = 0, j = 0; i < n&& j < m;)//������
//	{
//		if (w[i] >= c[j])
//		{
//			//w[i] >= c[j];//�ҵ�һ������, ������˺ܶ�Ҳֱ����, �����ú����Ҳ��
//			ans++;
//			//stc[j] = true;
//			i++;
//			j++;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	cout << ans;
//	return 0;
//}