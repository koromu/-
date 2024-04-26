//#include <iostream>
//#include <map>
//
//using namespace std;
//typedef pair<int, bool> pib;
//const int N = 55;
//
//void solve()
//{
//    bool st[N] = { 0 };
//    multimap<int, bool> S;
//    int n, tmp;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> tmp;
//        while (tmp > n) tmp /= 2;
//        if (!st[tmp])//第一次见这个1 - n中的数
//        {
//            S.insert(pib(tmp, true));//第一个这样插入
//            st[tmp] = true;
//            continue;
//        }
//        //其他的插入false
//        S.insert(pib(tmp, false));
//    }
//    for (int i = n; i >= 1; i--)
//    {
//        if (!st[i]) {
//            // cout << i << " " ;
//            //直接再处理false的map
//            bool flag = false;
//            for (auto j = S.rbegin(); j != S.rend() && !flag; j++)
//            {
//                 int f = j->first, s = j->second;
//                 if(!s)
//                 {
//                     //一个小于等于n的数字, 
//                     while(f /= 2)
//                     {
//                         if(f == i)
//                         {
//                             st[i] = true, j->second = true;
//                             flag = true;
//                             break;
//                         }
//                     }
//                 }
//            }
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        // cout << st[i] << " ";
//        if (st[i])
//            continue;
//        else
//        {
//            puts("NO");
//            return;
//        }
//    }
//    puts("YES");
//    return;
//}
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