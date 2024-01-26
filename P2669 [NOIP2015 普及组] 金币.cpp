//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//一枚金币发一天1
//	//两枚金币发两天2 2
//	//三枚金币发三天3 3 3
//	//...
//	//N枚金币发N天n n n n n 
//	//得到钱的同时, 减天数
//	int k; cin >> k;
//	int c=0,now = 1;//now记录现在是第几轮发钱
//	for (int i = 1,j=1; i <= k; i++)
//	{
//		if (j <= now)
//		{
//			c += now;
//			j++;
//		}
//		else
//		{
//			j = 1;
//			now++;
//			c += now;
//			j++;
//		}
//	}
//	cout << c;
//	return 0;
//}