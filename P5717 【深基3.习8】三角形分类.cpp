//#include <iostream>
//#include <algorithm>
//using namespace std;
//int bian[3];
//bool jud_tr(int a, int b, int c)
//{
//	if (a + b <= c)
//	{
//		cout << "Not triangle" << endl;
//		return true;
//	}
//	else return false;
//}//注意不是三角形, 就直接退出
//
//void jud_r_tr(int a, int b, int c)
//{
//	if (a * a + b * b == c * c)
//		cout << "Right triangle" << endl;
//}
//
//void jud_a_tr(int a, int b, int c)//锐角
//{
//	if (a * a + b * b > c * c)
//		cout << "Acute triangle" << endl;
//}
//void jud_o_tr(int a, int b, int c)//钝角
//{
//	if (a * a + b * b < c * c)
//		cout << "Obtuse triangle" << endl;
//}
//
//void jud_i_tr(int a, int b, int c)//等腰
//{
//	if (a == b)
//		cout << "Isosceles triangle" << endl;
//}
//
//void jud_e_tr(int a, int b, int c)//等边
//{
//	if (a == b && b == c && a == c)
//		cout << "Equilateral triangle" << endl;
//}
//int main()
//{
//	for (int i = 0; i < 3; i++)
//		cin >> bian[i];
//	sort(bian, bian + 3);
//	if (jud_tr(bian[0], bian[1], bian[2]))
//		return 0;
//	else
//	{
//		jud_r_tr(bian[0], bian[1], bian[2]);
//		jud_a_tr(bian[0], bian[1], bian[2]);
//		jud_o_tr(bian[0], bian[1], bian[2]);
//		jud_i_tr(bian[0], bian[1], bian[2]);
//		jud_e_tr(bian[0], bian[1], bian[2]);
//	}
//
//	return 0;
//}