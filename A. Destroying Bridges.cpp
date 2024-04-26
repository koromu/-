//#include <iostream>
//#include <map>
//using namespace std;
//
////最好的情况是一个岛一个岛这样隔绝开来, 所以可能每一个桥的数量都对应了一个最少的连接的岛的数量
////所以先预处理一个岛的数量
//
////int n, k;
////int x, tmp;
////const int N = 5050;
////
////map<int, int> ans;
////
////void init()
////{
////	for (int i = 0; i <= 10010; i++)
////		ans[i] = 0;
////	for (int i = 1; i <= 100; i++)	//下标代表了桥的数量, 存的是这个桥代表的岛的数量
////	{
////		x = (i * (i - 1));
////		ans[x / 2] = i;//桥的数量, 对应岛的数量
////	}
////}
////
////int main()
////{
////	init();
////	int T;
////	cin >> T;
////	while (T--)
////	{
////		cin >> n >> k;//n个岛, 可以破环的桥数k
////		tmp = n * (n - 1) - 2 * k;//tmp是剩余的桥的数量, 但是剩余桥的数量可能没有对应的岛屿, 所以可以特判
////		tmp /= 2;
////		if (ans[tmp])
////			printf("%d\n", ans[tmp]);
////		else
////		{
////			while (tmp++)
////			{
////				if (ans[tmp])
////				{
////					printf("%d\n", ans[tmp]);
////					break;
////				}
////			}
////		}
////	}
////	return 0;
////}
//
////以上纯属瞎扯
////结果是, 最佳情况就是对岛1号进行拆桥, 如果能全部拆掉那就是1, 拆不掉说明可以到任意的岛去, 因为每个岛上的桥都是相同的, 如果要隔绝一个岛, 就得拆掉所有的桥, 所以既然要拆掉所有的桥, 不如直接拆1号岛
//
//#include <iostream>
//
//using namespace std;
//typedef long long ll;
//void slove()
//{
//	//ll a, b, c;
//	//cin >> a >> b >> c;
//	//int tmp = b % 3;//查余数
//	//if (tmp)
//	//{
//	//	int c1 = c - (3 - tmp);//剩余的综合性人
//	//	if (c1 >= 0)//说明有可以代替的数量
//	//	{
//	//		if (c1 % 3)
//	//			cout << a + b / 3 + 2 + c1 / 3 << endl;
//	//		else
//	//			cout << a + b / 3  + c1 / 3 + 1 << endl;
//	//	}
//	//	else puts("-1");//说明c不够
//	//}
//	//else
//	//{
//	//	//可以整除
//	//	if (c % 3)
//	//		cout << a + b / 3 + c / 3 + 1 << endl;
//	//	else cout << a + (b + c) / 3 << endl;
//	//}
//
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << c / a + c / b + 2 << endl;
//
//}
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		slove();
//	}
//}