#include <iostream>
#include <deque>
#include <set>
using namespace std;

//int main()
//{
//	int n, m; cin >> n >> m;
//	//有点像滑块
//	//先按顺序存入队列中
//	//用集合排序一个从小到大的m个和
//	//队列长度就是m, 小于m就插入, 等于m就先排出第一个, 再插入到最后, 再得到一个now, 与min比较,如果小就替换, 大就继续插入
//	deque<int> d1;
//	set<int> s1;
//	int min = 99999999999, now=0;
//	if (m == 0 || n == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	for(; n > 0 ; n--)
//	{
//		for (int i = 0 ;i < 3; i++)
//		{
//			int temp;
//			cin >> temp;
//			d1.push_back(temp);
//		}
//			if (d1.size() == m)
//			{
//				for (auto it = d1.begin(); it != d1.end(); it++)
//					now += *it;
//				if (now < min)
//				{
//					min = now;
//					now = 0;
//				}
//			}
//		if(d1.size() == m)
//		{
//			int temp; cin >> temp;
//			d1.pop_front();
//			d1.push_back(temp);
//			now = 0;
//			for (auto it = d1.begin(); it != d1.end(); it++)
//				now += *it;
//			if (now < min)
//			{
//				min = now;
//				now = 0;
//			}
//		}
//	}
//	cout << min;
//	return 0;
//}10

//int main()
//{
//	int n, m; cin >> n >> m;
//	n -= 3;
//	//有点像滑块
//	//先按顺序存入队列中
//	//用集合排序一个从小到大的m个和
//	//队列长度就是m, 小于m就插入, 等于m就先排出第一个, 再插入到最后, 再得到一个now, 与min比较,如果小就替换, 大就继续插入
//	deque<int> d1;
//	set<int> s1;
//	int min = 99999999, now = 0;
//	if (m == 0 || n == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	//初始化
//		for (int i = 0; i < 3; i++)
//		{
//			int temp;
//			cin >> temp;
//			d1.push_back(temp);
//		}
//			for (auto it = d1.begin(); it != d1.end(); it++)
//				now += *it;
//			if (now < min)
//			{
//				min = now;
//				now = 0;
//			}
//	for (; n > 0; n--)
//	{
//		if (d1.size() == m)
//		{
//			int temp; cin >> temp;
//			d1.pop_front();
//			d1.push_back(temp);
//			now = 0;
//			for (auto it = d1.begin(); it != d1.end(); it++)
//				now += *it;
//			if (now < min)
//			{
//				min = now;
//				now = 0;
//			}
//		}
//	}
//	cout << min;
//	return 0;
//}//20
#include <math.h>
int main()
{ 
	int n, m; cin >> n >> m;
	int arr[3003];
	int Min = 99999;
	int now = 0;
	if (m == 0 || n == 0)
	{
		cout << 0;
		return 0;
	}
	//初始化
	for (int i = 0; i < n; i++) cin >> arr[i];
	//判断
	for (int i = 0; i < n - m + 1; i++)//区间头,最终指向距离末尾m的位置
	{
		for (int j = i; j < i + m; j++)
			now += arr[j];
		Min = min(Min, now);
		now = 0;
	}
		cout << Min;
	return 0;
}//100