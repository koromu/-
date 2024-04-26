//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20010;
//
//void solve()
//{
//    int n;
//    int w[N];
//    cin >> n;
//    if (n == 1)
//    {
//        int n; cin >> n;
//        if (n == 1)
//            puts("YES");
//        else puts("NO");
//    }
//    else {
//        for (int i = 0; i <= n - 1; i++)
//            cin >> w[i];
//        sort(w, w + n);
//        for (int i = n - 1; i - 1 >= 0; i--)
//        {
//            if (w[i] - w[i - 1] <= 1)
//                continue;
//            else {
//                puts("NO");
//                break;
//            }
//            puts("YES");
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
