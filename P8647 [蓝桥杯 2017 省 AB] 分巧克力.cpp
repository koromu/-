//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//const int N = 100010;
//int a[N], b[N];//�ֱ��¼���ȺͿ��
//
//int n, m;//����������
//
//bool check(int x)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{//�����ÿһ���ɿ������Էָ����ٸ���
//		count += (a[i] / x) * (b[i] / x);//�����ɿ���
//		if (count >= m) return 1;
//	}
//	return (count >= m);
//}
////a[i] / x��ʾ���ķ����Ͽ����г����ٿ��ɿ���, b[i] / x��ʾ��ķ����Ͽ����г����ٿ��ɿ���
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		scanf("%d%d", &a[i], &b[i]);
//	int l = 0, r = 100001;//���ֲ��ҷ�Χ�ڵ�����, ���Ϳ���ʮ����η�,�����һ����, ��ô�𰸾���ʮ����η� 
//	while (l < r)
//	{
//		int mid = (l + r + 1) >> 1;
//		if (check(mid))
//			l = mid;//mid�����Ǵ�
//		else r = mid - 1;//˵��mid�ڴ𰸵��ұ�, ����mid���Ǵ�, ������mid - 1
//	}
//	cout << l;
//
//	return 0;
//}