//#include <vector>
//#include <string>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	vector<int> a(10, -1);//大小设置为10, 全部初始化为-1
//	a.size();//时间复杂度是O(1)
//	a.empty();
//	//特有的clear()函数
//
//	//vector有比较的功能(以字典序)
//	
//
//	//pair以first为第一关键值, second为第二关键字(也是一个字典序
//	
//	pair<int, string> p;
//	p = make_pair(10, "666");//构造函数
//	//可以把需要排序的东西放在first中, 不需要排序的附加信息放在second
//	
//
//	//string
//	//length()和size()一样,返回字符串长度
//	//size(), empty(), clear(), 
//	string a1 = "abc", b = "def";
//
//	a1 += b;//可以直接加
//	a1 += 'c';
//	cout << a1 << endl;
//	cout << a1.substr(1, 2) << endl;//从1开始, 长度是2
//	cout << a1.substr(1) << endl;//从1开始, 到最后
//	cout << a1.substr(1, 10) << endl;//从1开始, 长度是10, 超过了范围. 输出到最后一个为止
//
//	printf("%s\n", a1.c_str());//c_str()可以返回字符的起始地址
//
//
//	//queue
//	//push() 队尾插入, pop() 队头弹出, front()取出队头元素, back()取出队首元素
//	//没有clear(), 其他都有 
//
//	//堆 优先队列  -> 默认是大根堆
//	priority_queue<int> heap;//默认构造
//	priority_queue<int, vector<int>, greater<int >> heap;//这个是小根堆的参数
//
//	//如何得到小根堆呢?
//	// heap.push(-x);//相当于小根堆, 取出的时候全部取负数
//	
//	//没有claer()
//
//	//deque的速度很慢
//	//前插, 尾插, 前删, 尾删除,
//	//还可以随机访问, 但是速度是vector的好几倍
//
//}