//#define _CRT_SECURE_NO_WARNINGS
//////����1
////#include <iostream>
////using namespace std;
////
////const int N = 100010, M = 31 * N;
////int n;
////int a[N];
////int tr[N][2];
////
//////tire����ʹ��
////void in(int x)
////{
////
////	int p = 0;
////	for (int i = 30; i >= 0; i--)//Ҫ�ӵ�31λ��ʼ
////	{
////		int u = x >> 1 & 1;
////		if (!tr[p][u]) tr[p][u]++;
////		p = tr[p][u];
////	}
////}
////
////int q(int x)
////{
////	int p = 0, res = 0;
////	for (int i = 30; i >= 0; i--) 
////	{
////		int u = x >> 1 & 1;
////		if (tr[p][u]) 
////		{
////			p = tr[p][u];//���ܵõ�1����֦
////			res = res * 2 + !u;
////		}
////		else
////		{
////			p = tr[p][u];//�Ҳ�����û�취
////			res = res * 2 + u;
////		}
////	}
////}
////
////
////int main()
////{
//////�Ȳ����ٲ��� 
////	cin >> n;
////	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
////	int res;
////	for (int i = 0; i < n; i++)
////	{
////		in(a[i]);
////		int t = q(a[i]);
////		res = max(res, a[i] ^ t);
////	}
////
////	return 0;
////}
////����2
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010, M = 3100010;
//
//int n;
//int a[N], son[M][2], idx;
//
//void insert(int x)
//{
//	int p = 0;//�ӵ�0�㿪ʼ
//	for (int i = 30; i >= 0; i--)
//	{//�õ�son[p][һ��λ]������
//		int& s = son[p][x >> i & 1];//Ҳ���ǵõ�son[p][0] ����son[p][1]
//		if (!s) s = ++idx;//���s��0, Ȼ�����ѭ��, ����һ��idx
//		p = s;//p����idx, Ҳ������������Ƕ�һ�޶���
//	}//��һ�εõ�son[idx][һ��λ]
//}
//
//int search(int x)
//{
//	int p = 0, res = 0;
//	for (int i = 30; i >= 0; i--)
//	{
//		int s = x >> i & 1;//�õ�û�д���������λ
//		if (son[p][!s])//�ж����λ, �����ͬ��λ����0, (Ҳ������idx, ���û�еĻ�����0)�ͽ����ж�
//		{
//			res += 1 << i; //�浽resû�д�������λ->ͨ��i�������ó���, �����ƷŽ�ȥ
//			p = son[p][!s];//Ȼ��p�����������Ķ�һ�޶���idx, ��Ҳ����3000010��ԭ��
//		}
//		else p = son[p][s];//������ھʹ����෴����, �����ھͼ�������ÿһλ��ʲô, ��������ھ�Ĭ����0????
//	}
//
//	return res;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		insert(a[i]);
//	}
//
//	int res = 0;
//	for (int i = 0; i < n; i++) res = max(res, search(a[i]));
//
//	printf("%d\n", res);
//
//	return 0;
//}