//#include <iostream>
//using namespace std;
//
//
//typedef struct Coor
//{
//    int x;
//    int y;
//}Coor;
//
//struct Point
//{
//    int x;
//    int y;
//};
//
//int main()
//{
//    int b = 0;
//    int& a = b;
//    a = 4;
//    std::cout << a << '\t' << std::endl; // 4
//    b = 5;
//    std::cout << a << std::endl; // 5
//	//不需要解引用的, 指针指向这个空间的值, 类似于const int* 类型  int&
//
//    int c = 10;
//    //声明引用时初始化
//    int& vc = c;
//
//    int arr[] = { 1,2,3,4 };
//    int(&t)[4] = arr;
//    cout << t << endl;
//
//    //结构体引用
//    Coor c1;    //定义一个结构体变量，叫c1.
//    Coor& c2 = c1;    //给c1起了一个别名叫c.
//    c2.x = 10;    //通过引用给结构体变量的数据成员赋值
//    c2.y = 20;
//    cout << c1.x << ' ' << c1.y << endl;    //输出的结果:10 20
//
//    struct Point p1;
//    struct Point& p2 = p1;
//    p2.x = 1; p2.y = 2;//通过p2改变p1
//    cout << p1.x << ' ' << p1.y << endl;
//    return 0;
//}