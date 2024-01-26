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
//	set<int> s1; //升序排序
//	set<int, greater<int>> s2;//降序排序
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
//	//1. set.find(elem); //查找elem元素，返回指向elem元素的迭代器
//	set<int>::iterator it1;
//	//迭代器的类型是iterator
//	it1 = s1.find(10);//如果查找的数不在set中,会返回end()set末尾的迭代器;
//	it1--;//确实得到了最后一个元素
//	cout << *it1 << endl;
//
//
//	//find()返回的是iterator的对象, 名字是find函数的名字 , 类型<T&x> 返回的是iterator find <T&x>而不是Null
//
//
//	//count()可以查找set容器中的元素的个数, 对于set来说是有0 或者 1
//	//0表示不在, 1表示在
//
//	//set.lower_bound(elem); 返回第一个 >=elem 元素的 迭代器, 相当于得到一个分界线且包括分界线本身
//	//set.upper_bound(elem); // 返回第一个>elem元素的迭代器, 不包括分界线本身
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
//	//奇怪的查找函数
//	//set.equal_range(elem), 返回容器中与elem相等的上下限的两个迭代器。上限是闭区间，下限是开区间，如[beg,end)
//	//函数返回两个迭代器，而这两个迭代器被封装在 pair(对) 中, 一个pair中可以存储两种数据, <int,char> <int, string> <set<T>::iterator,set<T>::iterator>
//	pair<set<int>::iterator, set<int>::iterator> p = s1.equal_range(7);
//	cout << (*p.first) << endl;//first, 是对应两个迭代器中的 左闭迭代器beg -> lower_bound 的返回值
//	cout << (*p.second) << endl;//second 是对应两个迭代器中的 右开迭代器end->upper_bound 的返回值
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
//	//如果传入11, 是不存在的元素,那么根据编译器不同,返回的值会不同, vs2022中两个迭代器都是返回set的end(), 通过'--'可以得到最后一个元素
//}