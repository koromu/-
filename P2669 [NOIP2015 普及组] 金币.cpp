//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//һö��ҷ�һ��1
//	//��ö��ҷ�����2 2
//	//��ö��ҷ�����3 3 3
//	//...
//	//Nö��ҷ�N��n n n n n 
//	//�õ�Ǯ��ͬʱ, ������
//	int k; cin >> k;
//	int c=0,now = 1;//now��¼�����ǵڼ��ַ�Ǯ
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