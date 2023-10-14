//#include <iostream>
//using namespace std;
//#include <vector>
//
////第一条鱼 为0;
////第二条鱼与前1条比, 第三条鱼与前2条比...... 第n条鱼与前n-1条比
//int main()
//{
//	int n; cin >> n;
//	vector<int> v1;
//	for (int i = 0; i < n; i++)
//	{
//		int temp; cin >> temp;
//		v1.push_back(temp);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int c = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (v1[j] < v1[i])
//				c++;
//		}
//		cout << c << ' ';
//	}
//
//
//	return 0;
//}