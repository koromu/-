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
//	//ÿ��ÿ��֮�����, ���Ϊ1 2 3 4 
//	//1+2 = 3+4 = 1+3 = 2+4 
//	//�ı��һ��Ԫ�ش�0�ĵ�9 , Ȼ�����ж� -> ��Ҫһ���жϺ���
//	//�ı�ڶ���, ���������ĸ�, �Դ�����
//	for (int i = 0; i < 4; i++)
//		cin >> arr[i];//�±�Ϊ1234 ����14 23�����ж������Ķ�Ҫ�ж�
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