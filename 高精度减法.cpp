//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//typedef vector<int> vi;
//
//vi A, B;
//string x, y;
//
//bool cmp(vi A, vi B)
//{
//    if (A.size() != B.size()) return A.size() > B.size();
//    for (int i = A.size() - 1; i >= 0; i--)
//        if (A[i] != B[i]) //如果从最高位一位一位比较, 有不同直接判断是否A大于B
//            return A[i] > B[i];
//    return true;//如果都相等,就返回真,可以用相等的相减
//}
//
//vi sub(vi A, vi B)
//{
//    vi C1;
//    int k = 0;
//    for (int i = 0; i < A.size(); i++)
//    {
//        k = A[i] - k;
//        if (i < B.size())
//        {
//            k -= B[i];
//            C1.push_back((k + 10) % 10);
//            if (k < 0)k = 1;
//            else k = 0;
//        }
//    }
//    if (k) C1.push_back(k);
//    while (C1.size() > 1 && C1.back() == 0) C1.pop_back();
//
//    return C1;
//}
//
//
//
//int main()
//{
//    cin >> x >> y;
//    for (int i = x.size() - 1; i >= 0; i--) A.push_back(x[i] - '0');
//    for (int i = y.size() - 1; i >= 0; i--) B.push_back(y[i] - '0');
//
//    if (cmp(A, B))//判断A是否大于b
//    {
//        //如果是相等
//        vi C = sub(A, B);//进行A-B
//        for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]);
//    }
//    else
//    {
//        //否则
//        vi C = sub(B, A);
//        printf("-");
//        for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]);
//    }
//
//
//
//    return 0;
//}
