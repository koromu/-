//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//#include <map>
//
//using namespace std;
//
//
////map<T1, T2> mapTT; 这里的容器是键值对类型, 类似python的字典, 默认构造中<键的类型, 值的类型>
//
//
//class Student
//{
//public:
//	int id;
//	string name;
//
//	Student()
//	{
//
//	}
//
//	//拷贝构造函数
//	Student(int id,string name)
//	{
//		this->id = id;
//		this->name = name;
//	}
//
//	// 输出运算符的重载
//	friend ostream &operator << (ostream &out, Student &t)
//	{
//		out << t.name;
//		return out;
//	}
//};
//
////int main()
////{
////
////	//构造好了一个学生对象
////	map<int, Student> Stu1;
////}
//
////map元素的插入 三种方式 , 插入和赋值
//
//int main()
//{
//	//构建一个map
//	map<int, string> mStu;
//
//	//1. 使用pair进行insert构造
//	//mStu.insert(pair(3,"nihao"))//错误, 在pair的初始化是,需要标志参数
//	pair<int, string> p(3, "nihao");
//	mStu.insert(p);
//	mStu.insert(pair<int, string>(6, "good"));
//
//	//2. 通过value_type的方式插入对象：mStu.insert(map<键类型, 值类型>::value_type(键, 值));
//	mStu.insert(map<int, string>::value_type(5, "hello"));//直接初始化value并赋值
//	//3. 先构造value_type, 再传入
//	map<int, string>::value_type v(7,"你好");
//	mStu.insert(v);
//	//有些编译器插入中文不是用UTF-8的格式
//
//	//4. 通过数组的方式插入值：map名字[键名称] = 值; -> 相当于中括号进行重载了 , 特点会进行覆盖
//	mStu[2] = "world";
//	//两层含义 -> ①. 插入(原map中不存在)  ② .修改(原map中存在时修改)
//	//修改的原理就是 先删除后添加
//	//需要承担删除原数据的后果
//
//	//但是使用insert插入的结果如下
//	mStu.insert(pair<int, string>(6, "bad"));//此处的bad插入失败, 不会被覆盖
//	mStu[6] = "bad";//此处吧6的值覆盖成了bad
//
//	//mStu[6] 不止可以插入, 修改元素, 还可以用来作为右值, 找到对应的值
//	//例如: 根据键找到值
//	string stu_name = mStu[10]; // 如果容器中不存在键位置的键值对, 他会自动创建一个键为10的键值对 , 值默认值为 ' '
//	cout << stu_name << endl; // 打印出来是个空 
//
//
//	//构造pair对象
//	//while (1)
//	//{
//	//	int key;
//	//	string value;
//	//	//然后再接收传来的数据到key和value , 大量的话就循环,覆盖,插入
//	//	pair<int, string> p (key, value);
//	//}
//
//	map<int, Student> Stu1;
//
//	//1
//	Student s1(1, "nihao");
//	Stu1.insert ( pair < int, Student > (s1.id , s1 ) );//插入的pair 中的参数类型, 需要和map的参数类型想同
//
//	//2,value_type进行插入
//	Student s2(2, "good");
//	Stu1.insert(map<int, Student>::value_type(s2.id, s2));//直接使用不需要取名字, 直接传入(). 括号前面不需要取名字
//	//在传入的第二个参数中不是名字, 而是一个学生对象, 第一个参数是id
//
//	//此时Stu1中的已经有两个元素,元素见文章图
//
//	//第三种方式存在特点!!
//	//3,数组形式, 非常方便, 但是存在效率的问题
//
//	Student s3(3, "hello");
//	Stu1[s3.id] = s3;
//
//
//
//
//	//检测元素
//	//find()
//
//	//map的迭代 -> 遍历
//	//但是map是两个对象, 所以迭代器指向的其实是个pair, 所以要使用pair进行接收
//	//map也会自动排序
//	for (auto it = mStu.begin();it != mStu.end(); it++)
//	{
//		auto p = *it;
//		int key = p.first;
//		string value = p.second;
//
//		cout << key << ':' << value << endl;
//	}
//	for (auto it = Stu1.begin(); it != Stu1.end(); it++)
//	{
//		pair<int, Student> p = *it;
//		int key = p.first;
//		Student student = p.second; // 这里要不要重载等于符号运算符
//
//		//对象 = 对象, 浅拷贝(
//		cout << key << ':' << student.name << endl;//如果直接输出一个对象, 就会报错, 除非在Student类中重载输出运算符(考察输出运算符的重载)
//		//cout << key << ':' << student << endl;//重载运算符的结果
//
//	}
//
//
//	cout << "------" << endl;
//	//获得map容器的键对应的值
//	//1. []
//
//	//2. find() 成功返回对应的迭代器, 失败返回end()的返回值
//	map<int, string>::iterator it6 = mStu.find(11);//查找学号为3 对应的学生名字
//	map<int, string>::iterator it7 = mStu.find(6);//查找学号为3 对应的学生名字
//	if (it6 == mStu.end())
//	{
//		cout << "not_find" << endl;
//		perror("find:");
//	}
//	else
//	{
//		cout << (*it6).second << endl;
//	}
//	if (it7 != mStu.end())
//	{
//		cout << (*it7).second << endl;
//	}
//	else
//	{
//		cout << "not_find" << endl;
//	}
//
//	//3.使用at()函数, 如果键值对不存在就会让迭代器指向map的最末尾.
//	//string stu_name2 = mStu.at(20); // 直接报出异常,停止运行
//
//	//cout << "at(3) : " << stu_name2 << endl;
//	return 0;
//}
//
//
//#include <iostream>
//#include <map>
//using namespace std;
////
//int main()
//{
//	map<int, string> mStu;
//	//插入 1-6
//	mStu.emplace(1, "good");
//
//	pair<int, string> p1(2, "bad");
//	mStu.insert(p1);
//	mStu.insert(pair<int, string>(3, "python"));
//
//	mStu[4] = "hello";
//
//	map<int, string>::value_type v1(5, "c");
//	mStu.insert(v1);
//	mStu.insert(map<int, string>::value_type(6, "people"));
//
//	//查找1-6
//	 map<int, string>::iterator it1 = mStu.find(1);//注意返回的是迭代器,迭代器指向的是pair,piar中存放的是一个key一个value(要么解引用后用'.', 要么直接用迭代器->)
//	 string name2 = mStu.at(2);//at只返回查到键对应的值
//	 int n = mStu.count(3);//返回存在键为3的对组数, 在map中可以作为检测存在的函数, 在mlutimap中查找存在得个数
//	 map<int, string>::iterator it2 = mStu.lower_bound(4);//第一个大于等于的迭代器, 在这则返回指向4的迭代器
//	 map<int, string>::iterator it3 = mStu.upper_bound(5);//第一个大于的迭代器, 在这里则返回指向6的迭代器
//	 pair<map<int, string>::iterator, map<int, string>::iterator> p = mStu.equal_range(6);//返回的pair中存放的是两个迭代器, beg和end, 所以pair<>尖括号中的类型是两个map的迭代器
//	 //巧的是,此处返回的值6和6后面的元素的迭代器
//	 
//	 //string name3 = mStu.at(7);//不存在则报错
//	 //perror("at");
//
//	 cout << "find(1):" << "second : " << it1->second << "first : " <<it1->first<< endl;//first是键, seconds是值
//	 cout << "at(2): :" << name2 << endl;
//	 cout << "count(3) : " << n << endl;
//	 cout << "lower_bound: " << it2->second <<"first : " << it2->first << endl;//这里可以看出两个东西指向的位置是哪
//	 cout << "upper_bound: " << it3->second << "first : " <<it3->first<< endl;
//	 cout << "euqle_range: first:" << p.first->first << " second:" << (--p.second)->second << endl;//equal_range 函数返回值是一个 pair 对象，其中的 first 和 second 成员都是迭代器，分别指向所匹配键范围的起始位置和结束位置
//	 //让second像前移一位,指向和beg相同的位置
//	 if (p.second != mStu.end()) {
//		 cout << "euqle_range: first:" << p.first->first << " second:" << (p.second--)->second << endl;
//	 }
//	 else {
//		 cout << "key not found" << endl;//此时显示了这句话
//	 }
//
//	 map<int, string> m1;
//	 m1.insert(map<int,string>::value_type (0, "nan"));
//	 mStu.swap(m1);//通过监视看到, 此时m1大小为6个元素, mStu大小为一个元素, 交换完成
//
//
//
//	 return 0;
//}