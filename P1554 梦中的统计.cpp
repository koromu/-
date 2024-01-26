//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int m, n; cin >> m >> n;
//	//记录m到n中的每一位数
//	int arr[10] = {0};//记录 0 ~ 9
//	for (int i = m; i <= n; i++)
//	{
//		int temp = i;
//		while (1)//处理此时的i
//		{		
//			arr[temp % 10]++;
//			temp /= 10;
//			if (temp == 0) break;
//		}
//}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	return 0;
//}