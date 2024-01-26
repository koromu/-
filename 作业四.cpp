//#include <iostream>
//#include <vector>
//using namespace std;
//
//int huiwen(long n)
//{
//    vector<int>  v1;
//    while (n)
//    {
//        v1.push_back(n % 10);
//        n /= 10;
//    }
//    int flag = 0;
//    for (int i = 0, j = v1.size() - 1; i < j; i++, j--)
//    {
//        if (v1[i] == v1[j])
//            continue;
//        else flag = 1;
//    }
//
//    if (flag) return 0;
//    return 1;
//}
//
//int main()
//{
//    for (int i = 1; i <= 300; i++)
//    {
//        if (huiwen(i))
//            if(huiwen(i*i))
//                cout << i << endl;
//    }
//
//    return 0;
//}