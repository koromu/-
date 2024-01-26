//#include <iostream>
//
//using namespace std;
////
////const double PI = 3.14;
//////设计一个圆类
//////求周长公式
////class yuan
////{
////	//访问权限
////public:
////
////	//属性
//////半径
////	int r;
////	//行为
////	//获取圆的周长
////	double C()
////	{
////		return 2 * PI * r;
////	}
////
////};
////
//////设计一个学生类
////class student{
////public:
////	string name;
////	int num;
////
////	//自我介绍
////	void intru_self()
////	{
////		cout << "我是" << name << ". 我的学号是" << num << endl;
////	}
////};
////
//////面向对象 : 封装继承,多态
////int main()
////{
////	 //通过圆创建具体的圆, 这个圆叫做对象
////	yuan c1;
////	c1.r = 10;//通过一个类创造一个对象 - 实例化
////	cout << "圆的周长是:" << c1.C() << endl;//通过点的方式使用行为
////	student Stu;
////	Stu.name = "你好"; Stu.num = 35;
////	Stu.intru_self();
////
////}
//
//
//class Box{
//private:
//	double width;
//	double high;
//	double length;
//protected:
//	double v;
//
//public:
//	double get_v(void);
//	void set(double l, double w, double h);
//};
//
//void Box::set(double l, double w, double h)
//{
//	Box::length = l;
//	Box::width = w;
//	Box::high = h;
//}
//
//double Box::get_v(void)
//{
//	return (length * width * high);
//}
//
//class small_box:Box//继承, 在不加限定的情况下是以private继承
//{
//public:
//	double get_small_v(void);
//	void set_small(double l, double w, double h);
//};
//
//void small_box::set_small(double l, double w, double h)
//{
//	v = l * w * h;
//}
//
//double small_box::get_small_v(void)
//{
//	return v;
//}
//
////继承
//
//
//int main()
//{
//	Box B;
//	//B.v 访问不到这个protected中的成员
//	B.set(1, 2, 3);
//	cout << B.get_v();
//
//	small_box sb;
//	sb.set_small(1, 2, 3);//可以在函数中直接使用v
//	cout << sb.get_small_v();
//
//	return 0;
//}