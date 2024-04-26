//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int main(){
//    vector<int> ratings;
//    for (int i = 0; i < 7; i++)
//    {
//        int x; 
//        cin >> x;
//        ratings.push_back(x);
//    }
//    int ans = 0;
//    const int N = 20010;
//    bool st[N] = { 0 };
//    for (int i = 0, j = 1; j < ratings.size(); i++, j++)
//    {
//        if (ratings[i] != ratings[j]) {
//            if (ratings[i] > ratings[j]/* && !st[i]*/)
//            {
//                ans++;
//                //st[i] = true;
//                ratings[i]++;
//            }
//            if (/*!st[j] && */ratings[j] > ratings[i])
//            {
//                ans++;
//                //st[j] = true;
//                ratings[j]++;
//            }
//        }
//    }
//    for (int i = 0; i < 7; i++) cout << st[i] << " ";
//    return ans + ratings.size();
//    }