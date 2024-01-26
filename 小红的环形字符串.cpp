//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////环形数组是个是啥?
////进行多次比较
//int main()
//{
//	int count = 0; //记录删除的元素
//	int N; cin >> N; // 记录长度
//	vector<char> v1(N);	//来个东西接收一下字符串
//	for (int i = 0; i < N; i++)
//	{
//		//char temp;
//		//cin >> temp;
//		//v1.push_back(temp);
//		cin >> v1[i];
//	}//构件好数组,发现不好查找收尾, 还是用动态的
//
//	auto it_h = v1.begin();//得到收尾的迭代器
//	auto it_e = v1.end();//得到收尾的迭代器
//	it_e--;//注意end()迭代器的位置
//	while (v1.size() >= 2 && *(it_h) == *(it_e))//只有数组还有两个元素时,需要判断
//	{
//		v1.erase(it_h);//清空后
//		count += 2;
//		v1.pop_back();
//		if (v1.empty())
//			break;
//		it_h = v1.begin();
//		it_e = v1.end();//为下个循环准备迭代器
//		it_e--;
//	}//收尾,并清空
//	auto it1 = v1.begin();
//	auto it3 = v1.end();
//	--it3;
//	while (it1 != it3)
//	{
//		//1和2比 2和3比 3和4比 -> 4个比3次
//		//1和2比 2和3比 3和(4比 4和5比 -> 5个比4次, 循环大小-1次
//		auto it2 = it1 + 1;
//		auto it4 = v1.end();
//		while (it2 != v1.end())
//		{
//			while (*it1 == *it2)
//			{
//				it2 = v1.erase(it2);
//				it1 = v1.erase(it1);//把第一个和第二个删掉
//				//如果相同直接删掉
//				//注意: 删掉之后,失效了 
//				//it1 = v1.begin();
//				count += 2;
//			}//如果不相等直接下一个
//			it1++;
//		}
//	}//当一直循环没用, 直到末尾退出
//	cout << count;
//
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int count = 0;
//	int N; cin >> N;
//	vector<char> v1(N);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> v1[i];
//	}
//
//	auto it_h = v1.begin();
//	auto it_e = v1.end();
//	it_e--;
//	while (!v1.empty() && *(it_h) == *(it_e))
//	{
//		v1.erase(it_h);
//		count += 2;
//		v1.pop_back();
//		if (v1.empty())
//			break;
//		it_h = v1.begin();
//		it_e = v1.end();
//		it_e--;
//	}
//
//	auto it1 = v1.begin();
//	auto it3 = v1.end();
//	--it3;
//	while (it1 != it3)
//	{
//		auto it2 = it1 + 1;
//		while (it2 != v1.end())
//		{
//			if (*it1 == *it2)
//			{
//				it2 = v1.erase(it2);
//				it1 = v1.erase(it1);
//				count += 2;
//			}
//			else
//			{
//				it1++;
//				it2++;
//			}
//		}
//	}
//
//
//
//	cout << count;
//
//	return 0;
//}
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////环形数组是个是啥?
////进行多次比较
//int main()
//{
//	int count = 0; //记录删除的元素
//	int N; cin >> N; // 记录长度
//	vector<char> v1;	//来个东西接收一下字符串
//	for (int i = 0; i < N; i++)
//	{
//		char temp;
//		cin >> temp;
//		v1.push_back(temp);
//	}//构件好数组,发现不好查找收尾, 还是用动态的
//
//	auto it_h = v1.begin();//得到收尾的迭代器
//	auto it_e = v1.end();//得到收尾的迭代器
//	it_e--;//注意end()迭代器的位置
//	while (*(it_h) == *(it_e) && it_h != it_e)//如果两个迭代器指向同一个位置, 不能进入循环
//	{
//		v1.erase(it_h);//清空后
//		it_e = v1.end();//重新赋值,再注意end()迭代器的位置
//		it_e--;
//		count += 2;
//		v1.erase(it_e);
//		it_h = v1.begin();
//		it_e = v1.end();//为下个循环准备迭代器
//		it_e--;
//	}//收尾,并清空
//	auto it1 = v1.begin();
//	while (it1 != --(v1.end()))
//	{
//		//1和2比 2和3比 3和4比 -> 4个比3次
//		//1和2比 2和3比 3和(4比 4和5比 -> 5个比4次, 循环大小-1次
//		while (*it1 == *(++it1))
//		{
//			it1 = v1.erase(it1);
//			it1 = v1.erase(it1);//把第一个和第二个删掉
//			//如果相同直接删掉
//			//注意: 删掉之后,失效了 
//			//it1 = v1.begin();
//			count += 2;
//		}//如果不相等直接下一个
//		it1++;
//	}//当一直循环没用, 直到末尾退出/
//	cout << count;
//
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////环形数组是个是啥?
////进行多次比较
//int main()
//{
//	int count = 0; //记录删除的元素
//	int N; cin >> N; // 记录长度
//	vector<char> v1(N);	//来个东西接收一下字符串
//	for (int i = 0; i < N; i++)
//	{
//		//char temp;
//		//cin >> temp;
//		//v1.push_back(temp);
//		cin >> v1[i];
//	}//构件好数组,发现不好查找收尾, 还是用动态的
//
//	auto it_h = v1.begin();//得到收尾的迭代器
//	auto it_e = v1.end();//得到收尾的迭代器
//	it_e--;//注意end()迭代器的位置
//	while (v1.size() >= 2 && *(it_h) == *(it_e) && it_h != it_e)//如果两个迭代器指向同一个位置, 不能进入循环
//	{
//		v1.erase(it_h);//清空后
//		count += 2;
//		v1.pop_back();
//		if (v1.empty())
//			break;
//		it_h = v1.begin();
//		it_e = v1.end();//为下个循环准备迭代器
//		it_e--;
//	}//收尾,并清空
//	auto it1 = v1.begin();
//	while (it1 != --(v1.end()))
//	{
//		auto it2 = it1 + 1;
//		while (*it1 == *it2 && it2 != v1.end())
//		{
//			it1 = v1.erase(it1);//把第一个和第二个删掉, it1删除后指向it2的位置了
//			it1 = v1.erase(it1);
//			//如果相同直接删掉
//			//注意: 删掉之后,失效了 
//			//it1 = v1.begin();
//			count += 2;
//			if (it1 ==v1.end())
//			{
//				cout << count;
//				return 0;
//			}
//			it2 = it1;
//			it2++;
//		}//如果不相等直接下一个
//		it1++;
//	}//当一直循环没用, 直到末尾退出/
//	cout << count;
//
//
//	return 0;
//}//最新版+1, 已解决越界问题


//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////环形数组是个是啥?
////进行多次比较
//int main()
//{
//	int count = 0; //记录删除的元素
//	int N; cin >> N; // 记录长度
//	vector<char> v1(N);	//来个东西接收一下字符串
//	for (int i = 0; i < N; i++)
//	{
//		//char temp;
//		//cin >> temp;
//		//v1.push_back(temp);
//		cin >> v1[i];
//	}//构件好数组,发现不好查找收尾, 还是用动态的
//
//	auto it_h = v1.begin();//得到收尾的迭代器
//	auto it_e = v1.end();//得到收尾的迭代器
//	it_e--;//注意end()迭代器的位置
//	
//	
//
//	while (v1.size() >= 2 && *(it_h) == *(it_e) && it_h != it_e)//如果两个迭代器指向同一个位置, 不能进入循环
//	{
//		v1.erase(it_h);//清空后
//		count += 2;
//		v1.pop_back();
//		if (v1.empty())
//			break;
//		it_h = v1.begin();
//		it_e = v1.end();//为下个循环准备迭代器
//		it_e--;
//	}//收尾,并清空
//	auto it1 = v1.begin();
//	while (it1 != --(v1.end()))
//	{
//		//1和2比 2和3比 3和4比 -> 4个比3次
//		//1和2比 2和3比 3和(4比 4和5比 -> 5个比4次, 循环大小-1次
//		auto it2 = it1 + 1;
//		while (*it1 == *it2 && it2 != v1.end())
//		{
//			it2 = v1.erase(it2);
//			it1 = v1.erase(it1);//把第一个和第二个删掉
//			cin >> *it1 >> *it2;
//			//如果相同直接删掉
//			//注意: 删掉之后,失效了 
//			//it1 = v1.begin();
//			count += 2;
//		}//如果不相等直接下一个
//		it1++;
//	}//当一直循环没用, 直到末尾退出/
//	cout << count;
//
//
//	return 0;
//}//最新版

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////环形数组是个是啥?
////进行多次比较
//int main()
//{
//	int count = 0; //记录删除的元素
//	int N; cin >> N; // 记录长度
//	vector<char> v1(N);	//来个东西接收一下字符串
//	for (int i = 0; i < N; i++)
//	{
//		//char temp;
//		//cin >> temp;
//		//v1.push_back(temp);
//		cin >> v1[i];
//	}//构件好数组,发现不好查找收尾, 还是用动态的
//	int i1 = 0;
//	int i2 = 0;
//	vector<char>::iterator it1;
//	while(1)
//	{
//			auto it_h = v1.begin();//得到收尾的迭代器
//			auto it_e = v1.end();//得到收尾的迭代器
//			it_e--;//注意end()迭代器的位置
//
//			if (v1.size() >= 2 && *(it_h) == *(it_e) && it_h != it_e)//如果两个迭代器指向同一个位置, 不能进入循环
//			{
//				v1.erase(it_h);//清空后
//				count += 2;
//				v1.pop_back();
//				if (v1.empty())
//					break;
//				it_h = v1.begin();
//				it_e = v1.end();//为下个循环准备迭代器
//				it_e--;
//				i1++;
//			}//收尾,并清空
//			vector <char>::iterator it3;
//			if(i1 != 0)
//			{
//				it1 = v1.begin();
//				i1 = 0;
//			}
//
//				//auto it1 = v1.begin();
//				auto it4 = it1;
//				if (i2 != 0)
//				{
//					it4++;
//					it1 = it4;
//					i2 = 0;
//				}
//				auto it2 = it1 + 1; 
//				it3 = it2;
//				if (*it1 == *it2 && it2 != v1.end())
//				{
//					it1 = v1.erase(it1);//把第一个和第二个删掉, it1删除后指向it2的位置了
//					it1 = v1.erase(it1);
//					it4 = it1;
//					//如果相同直接删掉
//					//注意: 删掉之后,失效了 
//					//it1 = v1.begin();
//					count += 2;
//					//if (it1 == v1.end())
//					//{
//					//	cout << count;
//					//	return 0;
//					//}
//					it2 = it1;
//					it2++;
//					i2++;
//				}//如果不相等直接下一个
//				it1++;
//			//当一直循环没用, 直到末尾退出/
//			if(it1 != --(v1.end())&& *it1 != *it3 && it3 == v1.end())
//			{
//				cout << count;
//				return 0;
//			}
//	}
//	cout << count;
//	return 0;
//}//最新版+2

//int check1(char a[])
//{//判断首尾
//	char beg = a[0],end = a[sizeof(a) - 1];
//	if (beg == end)
//		return 1;
//	else return 0;
//}
//
//
//int check2(char a[])
//{//判断相邻
//	
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int c = 0, n; cin >> n;
//	char arr[10005];
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	int i=0, j =n-1;//指向arr的边界
//	while (j < sizeof(arr))
//	{
//		if (check1(arr))
//		{
//			i++;
//			j--;
//			c += 2;
//		}
//	}
//
//
//
//	return 0;
//}