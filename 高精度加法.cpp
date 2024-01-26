//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//string s1, s2;
//vector<int> A, B, C;
//int k = 0;
//
//vector<int> add(vector<int>& A, vector<int>& B)
//{
//    if (A.size() < B.size()) return add(B, A);
//    vector<int> C;
//    for (int i = 0; i < A.size(); i++)
//    {
//        k += A[i];
//        if (i < B.size())k += B[i];
//        C.push_back(k % 10);
//        k /= 10;
//    }
//    if (k) C.push_back(k);
//
//    return C;
//}
//
//int main()
//{
//    cin >> s1 >> s2;
//    for (int i = s1.size() - 1; i >= 0; i--) A.push_back(s1[i] - '0');
//    for (int i = s2.size() - 1; i >= 0; i--) B.push_back(s2[i] - '0');
//
//    C = add(A, B);
//    for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]);
//
//    return 0;
//}