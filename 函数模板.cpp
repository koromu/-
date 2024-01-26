//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//int MyAdd(int a, int b)
//{
//    return a + b;
//}
//
//template <class T>
//int MyAdd(T a, T b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int x1 = 10;
//    int x2 = 20;
//    char c = 'a';
//
//    //int o = MyAdd(x1, x2);//此时是调用普通函数
//    int o = MyAdd<>(x1, x2);//此时调用模板函数
//
//    printf("%d", o);
//    return 0;
//}