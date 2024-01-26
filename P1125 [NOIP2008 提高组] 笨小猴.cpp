//#include <iostream>
//#include <string>
//using namespace std;
//
//int jud(int x)
//{
//	if (x == 1)
//		return 0;
//	if (x == 0)
//		return 0;
//	if (x == 2)
//		return 1;
//	if (x % 2 == 0)
//		return 0;
//	for (int i = 3; i < x / 2 + 1; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int arr[200] = { 0 };
//	string str; cin >> str;
////遍历字符串出现的次数, 然后记录到及格数组中
//	for (int i = 0; i < str.size(); i++)
//		arr[str[i]]++;
//	//找到数组中出现次数最多和最少的数
//	int max = 1; int min = 101;
//	for (int i = 0; i < 200; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	if (min == 0) min = 1;
//	int tmp = max - min;
//	if (jud(tmp))
//	{
//		cout << "Lucky Word" << endl;
//		cout << tmp;
//	}
//	else
//	{
//		cout << "No Answer" << endl;
//		cout << tmp;
//	}
//
//	return 0;
//}