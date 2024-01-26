//#include <iostream>
//
//using namespace std;
//
//int jud(int a1, int b2, int c3, int d4)
//{
//	if (a1 + b2 == a1 + c3 && a1 + c3 == c3 + d4 && b2 + d4 == a1 + b2)
//		return 1;
//	else return 0;
//}
//	int arr[4];
//	int temp[4];
//void nint(int arr1[4])
//{
//	for (int i = 0; i < 4; i++)
//		temp[i] = arr1[i];
//	return;
//}
//int main()
//{
//	//每行每列之和相等, 标号为1 2 3 4 
//	//1+2 = 3+4 = 1+3 = 2+4 
//	//改变第一个元素从0改到9 , 然后做判断 -> 需要一个判断函数
//	//改变第二个, 第三个第四个, 以此类推
//	for (int i = 0; i < 4; i++)
//		cin >> arr[i];//下标为1234 除了14 23不用判断其他的都要判断
//	for (int j = 0; j < 4; j++)
//	{
//		nint(arr);
//		for (int i = 0; i < 9; i++)
//		{
//			temp[j] = i;
//			if (jud(temp[0], temp[1], temp[2], temp[3]))
//			{
//				cout << "YES";
//				return 0;
//			}
//		}
//	}
//	cout << "NO";
//	return 0;
//}