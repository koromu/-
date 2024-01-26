//#include <iostream>
//#include <vector>
//
//using namespace std;
//typedef pair<double, double> pdd;
//double ans1 = 1, ans2 = 1;
//vector<pdd> v1;
//vector<pdd> v2;
//int main()
//{
//    int n; cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        pdd tmp;
//        cin >> tmp.first >> tmp.second;
//        v1.push_back(tmp);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (v1[i].first == 1)
//        {
//            ans1 *= v1[i].second;
//        }
//        else ans1 /= v1[i].second;
//    }
//    int m; cin >> m;
//    for (int i = 0; i < m; i++)
//    {
//        pdd tmp;
//        cin >> tmp.first >> tmp.second;
//        v2.push_back(tmp);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        if (v2[i].first == 1)
//        {
//            ans2 *= v2[i].second;
//        }
//        else ans2 /= v2[i].second;
//    }
//    const double d = 100000;
//    ans1 = (int)(ans1 * d) / d;
//    ans2 = (int)(ans2 * d) / d;
//    if (ans1 == ans2)
//        puts("YES");
//    else puts("NO");
//
//    return 0;
//}