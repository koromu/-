//#include <iostream>
//
//using namespace std;
////
////const double PI = 3.14;
//////���һ��Բ��
//////���ܳ���ʽ
////class yuan
////{
////	//����Ȩ��
////public:
////
////	//����
//////�뾶
////	int r;
////	//��Ϊ
////	//��ȡԲ���ܳ�
////	double C()
////	{
////		return 2 * PI * r;
////	}
////
////};
////
//////���һ��ѧ����
////class student{
////public:
////	string name;
////	int num;
////
////	//���ҽ���
////	void intru_self()
////	{
////		cout << "����" << name << ". �ҵ�ѧ����" << num << endl;
////	}
////};
////
//////������� : ��װ�̳�,��̬
////int main()
////{
////	 //ͨ��Բ���������Բ, ���Բ��������
////	yuan c1;
////	c1.r = 10;//ͨ��һ���ഴ��һ������ - ʵ����
////	cout << "Բ���ܳ���:" << c1.C() << endl;//ͨ����ķ�ʽʹ����Ϊ
////	student Stu;
////	Stu.name = "���"; Stu.num = 35;
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
//class small_box:Box//�̳�, �ڲ����޶������������private�̳�
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
////�̳�
//
//
//int main()
//{
//	Box B;
//	//B.v ���ʲ������protected�еĳ�Ա
//	B.set(1, 2, 3);
//	cout << B.get_v();
//
//	small_box sb;
//	sb.set_small(1, 2, 3);//�����ں�����ֱ��ʹ��v
//	cout << sb.get_small_v();
//
//	return 0;
//}