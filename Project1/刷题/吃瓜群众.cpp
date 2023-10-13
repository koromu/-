//#include <iostream>
//using namespace std;
//#include <iostream>
//using namespace std;
//
//int jud(int x)
//{
//    if (x % 2 == 0)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    int w;
//    cin >> w;
//    //先做判断是不是偶数 偶数加奇数的奇数, 所以不能有奇数直接就是2的倍数, 然后再拿一个2出来, 判断另一半是不是2的倍数
//    //判断是不是0
//    if (w == 2)
//    {
//        cout << "NO, you can't divide the watermelon into two even parts.";
//        return 0;
//    }
//    if (jud(w))
//    {
//        if (jud(w - 2))
//            cout << "YES, you can divide the watermelon into two even parts.";
//        else
//            cout << "NO, you can't divide the watermelon into two even parts.";
//    }
//    else
//        cout << "NO, you can't divide the watermelon into two even parts.";
//
//    return 0;
//}