//#include <iostream>
//#include <set>
//#include <vector>
//using namespace std;
//
//
////int main()
////{
////	//�߸���ͬ�ĺ���, ֱ���Զ�����!
////	
////	int n; cin >> n;
////	set<int> s0;
////	vector<int> v2;
////	for (int i = 0; i < 7; i++)
////	{
////		int temp; cin >> temp;
////		s0.insert(temp);
////	}//�н�����, ��������
////
////	for (int i = 1; i <= n; i++)
////	{
////		for (int j = 7*(i-1); j < 7*i; j++)
////		{
////			int temp; cin >> temp;
////			v2[j] = temp;
////		}
////	}
////	int arr1[7] = { 0 };//���������¼�н���� ��һ���ڵ�һ��λ��, 7 6 5 4 3 2 1
////	for (int i = 1; i <= n; i++)
////	{
////		int c = 0;
////		for (int j = 7 * (i - 1); j < 7 * i; j++)
////		{
////			//�ӵ�һ�п�ʼ����
////				if (s0.count(v2[j]))
////					c++;
////		}
////		if(c-7 >= 0)
////			arr1[c-7]++;
////	}
////	for (int i = 0; i < 7; i++)
////		cout << arr1[i] << ' ';
////	return 0;
////}
//
//int main()
//{
//	//�߸���ͬ�ĺ���, ֱ���Զ�����!
//
//	int n; cin >> n;
//	set<int> s0;
//	int v2[7004];
//	for (int i = 0; i < 7; i++)
//	{
//		int temp; cin >> temp;
//		s0.insert(temp);
//	}//�н�����, ��������
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 7 * (i - 1); j < 7 * i; j++)
//		{
//			int temp; cin >> temp;
//			v2[j] = temp;
//		}
//	}
//	int arr1[7] = { 0 };//���������¼�н���� ��һ���ڵ�һ��λ��, 7 6 5 4 3 2 1
//	for (int i = 1; i <= n; i++)
//	{
//		int c = 0;
//		for (int j = 7 * (i - 1); j < 7 * i; j++)
//		{
//			//�ӵ�һ�п�ʼ����
//			if (s0.count(v2[j]))
//				c++;
//		}
//		if (c != 0)
//			arr1[c - 1] = arr1[c - 1] + 1;
//	}
//	for (int i = 6; i >= 0; i--)
//		cout << arr1[i] << ' ';
//	return 0;
//}