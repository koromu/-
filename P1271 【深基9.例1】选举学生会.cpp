//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <set>
//using namespace std;
//
//const int N = 2000010;
//int n, m;
//int q[N]/*,tmp[N]*/;
////int main()
////{
////	multiset<int> m1;
////	int n, m;
////	cin >> n >> m;
////	while (m--)
////	{
////		int tmp;
////		scanf("%d", &tmp);
////		m1.insert(tmp);
////	}
////	for(auto it = m1.begin();it != m1.end(); it++)
////		printf("%d ", *it);
////
////	
////	return 0;
////}
//
////void ms(int l, int r,int q[])
////{
////	if (l >= r)return;
////	int mid = (l + r) >> 1;
////	ms(l, mid, q),ms(mid + 1, r, q);
////
////	int i = l, j = mid + 1, k = 0;
////	while (i <= mid && j <= r)
////		if (q[i] <= q[j]) tmp[k++] = q[i++];
////		else tmp[k++] = q[j++];
////	while (i <= mid) tmp[k++] = q[i++];
////	while (j <= r) tmp[k++] = q[j++];
////
////	for (int i = l, j = 0; i < r; i++, j++) q[i] = tmp[j];
////	return;
////}
//
////int main()
////{
////	cin >> n >> m;
////	for (int i = 0; i < m; i++)
////		scanf("%d", &q[i]);
////	ms(0, m-1, q);
////
////	for (int i = 0; i < m; i++) printf("%d", q[i]);
////
////	return 0;
////}
//
//void qs(int l, int r, int q[])
//{
//	if (l >= r)return;
//	int mid = l + r >> 1;
//	int i = l-1, j = r+1,x = q[mid];
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j)swap(q[i], q[j]);
//	}
//
//	qs(l, j, q);
//	qs(j + 1, r, q);
//
//
//
//	return;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)scanf("%d", &q[i]);
//	
//	qs(0, m-1, q);
//
//	for (int i = 0; i < m; i++) printf("%d", q[i]);
//
//	return 0;
//}