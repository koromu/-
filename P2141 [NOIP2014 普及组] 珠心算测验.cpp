#include <iostream>
#include <set>
using namespace std;

//可能要去重, 所以用那个东西!!
int main()
{
	int arr[200] = {0};
	int n,count = 0; cin >> n; // count 录有多少个数
	set<int> s1;//集合中的数各不相同
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		s1.insert(temp);
	}//生成顺序排列的数字
	//一次去两个数
	auto it1 = s1.begin();
	auto it4 = s1.end();
	auto it5 = s1.end();//it2的警戒线
	it4--;//it1的警戒线
	for (int m = 0 ; m < s1.size()-2; m++)//m记录1指向的位置
	{
		auto it2 = it1;
		it2++;
		auto it3 = it2;
		it3++;
		for (int i = 0; i < s1.size() - 1; i++)//i记录2指向的位置
		{
			int c = 0;
			c = *it1 + *it2;
			for (; *it3 <= c&& it3!=s1.end(); it3++)
			{//遍历第两个数后的数, 如果小于c就继续遍历, 如果相等或者大于c就退出
				if (*it3 == c)
					if (arr[*it3] == 0)
					{
						arr[*it3] = 1;
						count++;
					}
				if (it3 == --s1.end())
					break;
			}
			it2++;
			if (it2 == it5)
				break;
		}
		it1++;

		if (it1 == it4)
			break;
	}
	cout << count;
	return 0;
}

//#include <iostream>
//#include <set>
//using namespace std;
//
//
//int main()
//{
//	int n, count = 0; cin >> n; // count 录有多少个数
//	set<int> s1;//集合中的数各不相同
//	for (int i = 0; i < n; i++)
//	{
//		int temp; cin >> temp;
//		s1.insert(temp);
//	}//生成顺序排列的数字
//	//一次去两个数
//	auto it1 = s1.begin();
//	auto it4 = s1.end();
//	auto it5 = s1.end();//it2的警戒线
//	it4--;//it1的警戒线
//	for (int m = 0; m < s1.size() - 2; m++)//m记录1指向的位置
//	{
//		auto it2 = it1;
//		it2++;
//		auto it3 = it2;
//		it3++;
//		for (int i = 0; i < s1.size() - 1; i++)//i记录2指向的位置
//		{
//			int c = 0;
//			c = *it1 + *it2;
//			for (; *it3 <= c && it3 != s1.end(); it3++)
//			{//遍历第两个数后的数, 如果小于c就继续遍历, 如果相等或者大于c就退出
//				if (*it3 == c)
//					count++;
//				if (it3 == --s1.end())
//					break;
//			}
//			it2++;
//			if (it2 == it5)
//				break;
//		}
//		it1++;
//
//		if (it1 == it4)
//			break;
//	}
//	cout << count;
//	return 0;
//}//40