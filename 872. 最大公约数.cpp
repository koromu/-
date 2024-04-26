//#include <iostream>
//
//using namespace std;
//
//int gcd(int a, int b)
//{
//    while (a != b)
//    {
//        if (a > b) a -= b;
//        else b -= a;
//    }
//    return a;
//}
//
//int main()
//{
//    int t; cin >> t;
//    while (t--)
//    {
//        int a, b;
//        cin >> a >> b;
//        if (a % 2 == 0 && b % 2 == 0)
//            cout << 2 * gcd(a / 2, b / 2) << endl;
//        else if (a % 2 == 0 && b % 2 != 0)
//            cout << gcd(a / 2, b) << endl;
//        else if (a % 2 != 0 && b % 2 == 0)
//            cout << gcd(a, b / 2) << endl;
//        else
//            if (a > b)
//                cout << gcd((a + b) / 2, (a - b) / 2) << endl;
//            else cout << gcd((b + a) / 2, (b - a) / 2) << endl;
//    }
//
//}