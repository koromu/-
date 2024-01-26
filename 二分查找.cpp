//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int N = 10010;
//vector<int> num;
//
//int fin(int x, int l, int r)
//{
//    while (l < r) {
//        int mid = (l + r + 1) >> 1;
//        if (num[mid] <= x) l = mid;
//        else r = mid - 1;
//    }
//    if (num[l] == x)
//        return l;
//    else return -1;
//}
//
//int main()
//{
//    int n, ta;
//
//    int ans = fin(ta, 0, n - 1);
//    cout << ans;
//
//    return 0;
//}
//
////int fin(int x, int l, int r) {
////    while (l < r) {
////        int mid = (l + r + 1) >> 1;
////        if (num[mid] <= x) l = mid;
////        else r = mid - 1;
////    }
////    if (num[l] == x)
////        return l;
////    else return -1;
////}
////class Solution {
////public:
////    int search(vector<int>& nums, int target) {
////        const int N = 10010;
////        int num[N];
////
////
////        int n, ta; 
////        cin >> n >> ta;
////        for (int i = 0; i < n; i++)scanf("%d", &num[i]);
////        int ans = fin(ta, 0, n - 1);
////        cout << ans;
////
////    }
////};