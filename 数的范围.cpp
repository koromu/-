//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int N = 100010;
//int a[N];
//int n, q;
//
//int main()
//{
//    cin >> n >> q;
//    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//
//    while (q--)
//    {
//        int k, l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = (l + r + 1) >> 1;
//            scanf("%d", &k);
//            if (a[mid] <= k)  l = mid;//������߽�
//            else r = mid - 1;
//        }
//        //�˳���l == r
//        //�����������ֶ���, ����Ҳ���x, ��ôҲ���ҵ�x�Աߵ�һ����
//        if (l != k) { cout << "-1 -1" << endl; }
//        else//�ҵ�����߽�, ��ʼ���ұ߽�
//        {
//            cout << l << ' ';
//            l = 0, r = n - 1;
//            int mid = (l + r) >> 1;
//            while (l < r)
//            {
//                if (a[mid] >= k) r = mid;
//                else l = mid + 1;
//            }
//            cout << l << endl;
//        }
//    }
//
//
//
//    return 0;
//}
//
