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
//	//每次找到拥有比这个商品最相近的钱的人
//	sort(w, w + n); sort(c, c + m);
//	for (int i = 0, j = 0; i < n&& j < m;)//遍历人
//	{
//		if (w[i] >= c[j])
//		{
//			//w[i] >= c[j];//找到一个就算, 如果便宜很多也直接买, 可以让后面的也买到
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