//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 100010;
//int q[N],tmp[N];
//int n;
//void ms(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int mid = (l + r) >> 1;
//	ms(q, l, mid), ms(q, mid + 1, r);
//
//	 //¹é²¢
//	int i = l, j = mid + 1, k = 0;
//	while (i <= mid&& j <= r)
//	{
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	for (int i = l, j = 0; i <= r; i++,j++) q[i] = tmp[j];
//
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//
//	ms(q, 0, n - 1);
//
//	for (int i = 0; i < n; i++) printf("%d ", q[i]);
//	return 0;
//}
//
////#include <iostream>
////#include <algorithm>
////using namespace std;
////
////const int N = 1000010;
////int q[N];
////
////int main()
////{
////	int n; cin >> n;
////	for (int i = 0; i < n; i++)
////		scanf("%d", &q[i]);
////
////	sort(q, q + n);
////	for (int i = 0; i < n; i++)printf("%d ", q[i]);
////
////	return 0;
////}