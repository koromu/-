//#define _CRT_SECURE_NO_WARNINGS
//////代码1
////#include <iostream>
////using namespace std;
////
////const int N = 100010, M = 31 * N;
////int n;
////int a[N];
////int tr[N][2];
////
//////tire树的使用
////void in(int x)
////{
////
////	int p = 0;
////	for (int i = 30; i >= 0; i--)//要从第31位开始
////	{
////		int u = x >> 1 & 1;
////		if (!tr[p][u]) tr[p][u]++;
////		p = tr[p][u];
////	}
////}
////
////int q(int x)
////{
////	int p = 0, res = 0;
////	for (int i = 30; i >= 0; i--) 
////	{
////		int u = x >> 1 & 1;
////		if (tr[p][u]) 
////		{
////			p = tr[p][u];//找能得到1的树枝
////			res = res * 2 + !u;
////		}
////		else
////		{
////			p = tr[p][u];//找不到就没办法
////			res = res * 2 + u;
////		}
////	}
////}
////
////
////int main()
////{
//////先查找再插入 
////	cin >> n;
////	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
////	int res;
////	for (int i = 0; i < n; i++)
////	{
////		in(a[i]);
////		int t = q(a[i]);
////		res = max(res, a[i] ^ t);
////	}
////
////	return 0;
////}
////代码2
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010, M = 3100010;
//
//int n;
//int a[N], son[M][2], idx;
//
//void insert(int x)
//{
//	int p = 0;//从第0层开始
//	for (int i = 30; i >= 0; i--)
//	{//得到son[p][一个位]的引用
//		int& s = son[p][x >> i & 1];//也就是得到son[p][0] 或者son[p][1]
//		if (!s) s = ++idx;//如果s是0, 然后进入循环, 存入一个idx
//		p = s;//p等于idx, 也就是数组的行是独一无二的
//	}//下一次得到son[idx][一个位]
//}
//
//int search(int x)
//{
//	int p = 0, res = 0;
//	for (int i = 30; i >= 0; i--)
//	{
//		int s = x >> i & 1;//得到没有处理过的最高位
//		if (son[p][!s])//判断最高位, 如果不同的位不是0, (也就是有idx, 如果没有的话就是0)就进入判断
//		{
//			res += 1 << i; //存到res没有存入的最高位->通过i往右移拿出来, 往左移放进去
//			p = son[p][!s];//然后p等于这个储存的独一无二的idx, 这也就是3000010的原因
//		}
//		else p = son[p][s];//如果存在就存入相反的数, 不存在就继续往算每一位是什么, 如果不存在就默认是0????
//	}
//
//	return res;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		insert(a[i]);
//	}
//
//	int res = 0;
//	for (int i = 0; i < n; i++) res = max(res, search(a[i]));
//
//	printf("%d\n", res);
//
//	return 0;
//}