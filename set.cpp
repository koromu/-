//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//#include <set>
//
//using namespace std;
//
////int main()
//{
//
//
//	set<int> s1; //��������
//	set<int, greater<int>> s2;//��������
//
//	s1.insert(1);
//	s1.insert(3);
//	s1.insert(5);
//	s1.insert(8);
//	s1.insert(7);
//	s1.insert(10);
//
//	s2.insert(1);
//	s2.insert(3);
//	s2.insert(5);
//
//
//	//1. set.find(elem); //����elemԪ�أ�����ָ��elemԪ�صĵ�����
//	set<int>::iterator it1;
//	//��������������iterator
//	it1 = s1.find(10);//������ҵ�������set��,�᷵��end()setĩβ�ĵ�����;
//	it1--;//ȷʵ�õ������һ��Ԫ��
//	cout << *it1 << endl;
//
//
//	//find()���ص���iterator�Ķ���, ������find���������� , ����<T&x> ���ص���iterator find <T&x>������Null
//
//
//	//count()���Բ���set�����е�Ԫ�صĸ���, ����set��˵����0 ���� 1
//	//0��ʾ����, 1��ʾ��
//
//	//set.lower_bound(elem); ���ص�һ�� >=elem Ԫ�ص� ������, �൱�ڵõ�һ���ֽ����Ұ����ֽ��߱���
//	//set.upper_bound(elem); // ���ص�һ��>elemԪ�صĵ�����, �������ֽ��߱���
//	auto it2 = s1.lower_bound(5);
//	for (; it2 != s1.end(); it2++)
//		cout << *it2<< ' ';//5 8 7 10
//	cout << endl;
//
//	auto it3 = s1.upper_bound(5);
//	for (; it3 != s1.end(); it3++)
//		cout << *it3 << ' ';//8 7 10
//	cout << endl;
//
//
//	//��ֵĲ��Һ���
//	//set.equal_range(elem), ������������elem��ȵ������޵������������������Ǳ����䣬�����ǿ����䣬��[beg,end)
//	//��������������������������������������װ�� pair(��) ��, һ��pair�п��Դ洢��������, <int,char> <int, string> <set<T>::iterator,set<T>::iterator>
//	pair<set<int>::iterator, set<int>::iterator> p = s1.equal_range(7);
//	cout << (*p.first) << endl;//first, �Ƕ�Ӧ�����������е� ��յ�����beg -> lower_bound �ķ���ֵ
//	cout << (*p.second) << endl;//second �Ƕ�Ӧ�����������е� �ҿ�������end->upper_bound �ķ���ֵ
//
//
//	pair<set<int>::iterator, set<int>::iterator> p1 = s1.equal_range(11);
//
//	cout << endl;
//		set<int>::iterator it4 = p1.first;
//		set<int>::iterator it5 = p1.second;
//		it4--;
//		it5--;
//	cout << *it4 << endl; 
//	cout << *it5 << endl;
//	//�������11, �ǲ����ڵ�Ԫ��,��ô���ݱ�������ͬ,���ص�ֵ�᲻ͬ, vs2022���������������Ƿ���set��end(), ͨ��'--'���Եõ����һ��Ԫ��
//}