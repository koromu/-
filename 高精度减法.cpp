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
//        if (A[i] != B[i]) //��������λһλһλ�Ƚ�, �в�ֱͬ���ж��Ƿ�A����B
//            return A[i] > B[i];
//    return true;//��������,�ͷ�����,��������ȵ����
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
//    if (cmp(A, B))//�ж�A�Ƿ����b
//    {
//        //��������
//        vi C = sub(A, B);//����A-B
//        for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]);
//    }
//    else
//    {
//        //����
//        vi C = sub(B, A);
//        printf("-");
//        for (int i = C.size() - 1; i >= 0; i--) printf("%d", C[i]);
//    }
//
//
//
//    return 0;
//}
