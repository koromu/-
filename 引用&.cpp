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
//	//����Ҫ�����õ�, ָ��ָ������ռ��ֵ, ������const int* ����  int&
//
//    int c = 10;
//    //��������ʱ��ʼ��
//    int& vc = c;
//
//    int arr[] = { 1,2,3,4 };
//    int(&t)[4] = arr;
//    cout << t << endl;
//
//    //�ṹ������
//    Coor c1;    //����һ���ṹ���������c1.
//    Coor& c2 = c1;    //��c1����һ��������c.
//    c2.x = 10;    //ͨ�����ø��ṹ����������ݳ�Ա��ֵ
//    c2.y = 20;
//    cout << c1.x << ' ' << c1.y << endl;    //����Ľ��:10 20
//
//    struct Point p1;
//    struct Point& p2 = p1;
//    p2.x = 1; p2.y = 2;//ͨ��p2�ı�p1
//    cout << p1.x << ' ' << p1.y << endl;
//    return 0;
//}