//#include <iostream>
//
//using namespace std;
//const int N = 30;
//int a[N], b[N];
//int n, m, c;
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)cin >> a[i];
//	for (int i = 0; i < m; i++)cin >> b[i];
//	if (n < m)
//	{
//		swap(a, b);
//		swap(n, m);
//	}
//	for (int i = 0, j = 0; i < m&& j < n; i++)
//	{
//		while (a[j] < b[i])//如果a[j]小了, 就往后看a中元素, 相等就不用
//		{
//			j++;
//		}
//		if (a[j] == b[i])
//		{
//			c++;
//			j++;
//		}//如果不相同, 说明a中没有元素和b相同, i可以往后移动
//	}
//	cout << c;
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//const int N = 100010;
//int a[N], b[N];
//int n, m, c;
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	for (int i = 0; i < m; i++)
//		cin >> b[i];
//	if (n < m)
//	{
//		swap(a, b);
//		swap(n, m);
//	}
//	for (int i = 0, j = 0; i < m && j < n; i++)
//	{
//		while (a[j] < b[i] && j < n)//如果a[j]小了, 就往后看a中元素, 相等就不用
//		{
//			j++;
//		}
//		if (a[j] == b[i] && j < n)
//		{
//			c++;
//			j++;
//		}//如果不相同, 说明a中没有元素和b相同, i可以往后移动
//	}
//	cout << c;
//	return 0;
//}
//
//
//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//const int N = 100010;
//unordered_set<int> setA;
//
//int a[N];
//int c, n, m, tmp;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		setA.insert(a[i]);
//	}
//
//
//	for (int i = 0; i < m; i++) {
//		cin >> tmp;
//		if (setA.count(tmp)) {
//			c++;
//		}
//	}
//	cout << c;
//
//	return 0;
//}