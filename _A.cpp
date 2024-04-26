//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		int n, k; cin >> n >> k;
//		for (int i = 0; i < n; i++)
//		{
//			//一个子串长度为n, 包含前k个字母的所有的组合, 也就是用前k个字母组成长度为n的所有组合
//			//有n个位置, 每个字母有选或者不选两种可能性, 所以可以分成n组, 每组包含前k个字母
//			for (int j = 0; j < k; j++)
//			{
//				printf("%c", 'a' + j);
//			}
//		}
//	}
//	return 0;
//}