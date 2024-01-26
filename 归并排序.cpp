//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int N = 100010;
//
//int q[N], tmp[N], n;
//
//void ms(int q[], int l, int r)
//{
//    if (l >= r) return;
//    int k, mid = (l + r) >> 1;
//
//    ms(q, l, mid); ms(q, mid + 1, r);
//
//    int i = l, j = mid + 1;
//    while (i <= mid && j <= r)
//    {
//        if (q[i] < q[j])
//            tmp[k++] = q[i++];
//        else tmp[k++] = q[j++];
//    }
//    while (i <= mid) tmp[k++] = q[i++];
//    while (j <= r) tmp[k++] = q[j++];
//
//    for (int i = 0; i < n; i++)
//        q[i] = tmp[i];
//    return;
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        scanf("%d", &q[i]);
//    int l = 0, r = n - 1;
//    ms(q, 0, r);
//
//    for (int i = 0; i < n; i++)
//        printf("%d ", q[i]);
//
//    return 0;
//}