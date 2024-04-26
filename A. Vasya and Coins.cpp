//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20010;
//
//void solve()
//{
//    bool st[N] = { 0 };
//    int a, b;
//    cin >> a >> b;
//    //遍历所有的可能性
//    int tmp;
//    for (int i = 0; i <= a; i++)
//        for (int j = 0; j <= b; j++)
//        {
//            tmp = i + 2 * j;
//            if(!st[tmp])
//                st[tmp] = true;
//        }
//    int M = a + b * 2;
//    for (int i = 0; i <= M + 1; i++)
//    {
//        if (!st[i])
//        {
//            cout << i << endl;
//            break;
//        }
//    }
//}
//
//
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        solve();
//    }
//    return 0;
//}
