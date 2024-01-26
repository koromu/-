//#include <iostream>
//// N头牛, 高为H, 高和为S, 书架高为B
//#include <set>
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//	//先降序排列, 取最高的几头牛, 得到的就是最少的
//	//注意有牛牛可以一样高高哦>_<
//	ll N, H, B, S;
//	multiset<ll, greater<ll>> ms;
//	cin >> N >> B;
//
//	for (; N > 0; N--)
//	{
//		cin >> H;
//		ms.insert(H);//一个一个读取,插入
//	}
//	//插入完成后得到一个降序表
//	//从multiset前面开始遍历
//	auto it = ms.begin();
//	ll count = 0; //记录上了多少头牛
//	if (*(it) > B)//如果一头牛就够了直接 1 就是了
//	{
//		cout << 1;
//		return 0;
//	}
//	for (S = 0; S < B; it++)
//	{
//		S += (*it);
//		count++;
//	}
//	cout << count;
//
//	return 0;
//}