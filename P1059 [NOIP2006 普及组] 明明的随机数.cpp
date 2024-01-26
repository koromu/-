////学完stl发现这种东西真的简单
//#include <iostream>
//#include<set>
//
//using namespace std;
//
//int main()
//{
//	//去重和排序的工作直接交给set就OK了
//	set<int> s1;
//	int N;
//	cin >> N;
//	for (; N > 0; N--)
//	{
//		int temp;
//		cin >> temp;
//		s1.insert(temp);//插入N个数
//	}
//	//得到set容器, 要求从小到大排序,直接默认即可
//	//第一行打印元素个数, set会直接去重
//	cout << s1.size() << endl;//输出第一次居然忘了换行!!
//	auto it = s1.begin();
//	//第二行打印从小到大的数即可
//	for (; it != s1.end(); it++) cout << *it << ' ';
//	//
//	cout << endl;
//
//	return 0;
//}
//
////除了忘记换行, 几乎一遍,嘻嘻