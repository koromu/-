//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int N = 10010;
//int q[N] = {0};
////int main()
////{
////	int l, m; cin >> l >> m;
////	int l1, r1, c = 0;
////	while (m--)
////	{
////		scanf("%d%d", &l1, &r1);
////		int i = l1, j = r1 - 1;
////		while (i < j)//i小于j且两个中至少有一个不是1
////		{//如果两个都是1, 那就不需要进入操作了
////			if (q[i] == 0 || q[j] == 0) 
////			{
////				q[i++] = 1, q[j--] = 1;
////				continue;
////			}
////			i++, j--;
////		}
////	}
////	for (int i = 0, j = 0; i < l1; i++)
////		if (!q[i]) 
////			i++;
////		else 
////		{
////			c += (i - j);
////			i++;
////			j = i;
////		}
////	cout << c;
////	//1 0 0 0 0 0 0 1
////	return 0;
////}
//
//int main()
//{
//	int l, m  ,c= 0; 
//	cin >> l >> m;
//	while (m--)
//	{
//		int l1, r1;
//		scanf("%d%d", &l1, &r1);
//		for (int i = l1; i <= r1; i++)
//			q[i] = 1;
//	}
//	for (int i = 0; i < l; i++)
//		if(q[i] == 0)//100 - 300 + 1 = 201, 471 - 472 = 2 , 201+ 2 = 203, 500 - 203 + 1 = 298
//			c++;
//	cout << c + 1;
//	return 0;
//}
//
