#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

//环形数组是个是啥?
//进行多次比较
int main()
{
	int count = 0; //记录删除的元素
	int N; cin >> N; // 记录长度
	vector<char> v1;	//来个东西接收一下字符串
	for (int i = 0; i < N; i++)
	{
		char temp;
		cin >> temp;
		v1.push_back(temp);
	}//构件好数组,发现不好查找收尾, 还是用动态的

	auto it_h = v1.begin();//得到收尾的迭代器
	auto it_e = v1.end();//得到收尾的迭代器
	it_e--;//注意end()迭代器的位置
	while (it_h == it_e)
	{
		while (*(it_h) == *(it_e) && it_h != it_e)//如果两个迭代器指向同一个位置, 不能进入循环
		{
			v1.erase(it_h);//清空后
			it_e = v1.end();//重新赋值,再注意end()迭代器的位置
			it_e--;
			count += 2;
			v1.erase(it_e);
			it_h = v1.begin();
			it_e = v1.end();//为下个循环准备迭代器
			it_e--;
		}//收尾,并清空
		auto it1 = v1.begin();
		while (it1 != --(v1.end()))
		{
			//1和2比 2和3比 3和4比 -> 4个比3次
			//1和2比 2和3比 3和(4比 4和5比 -> 5个比4次, 循环大小-1次
			while (*it1 == *(++it1))
			{
				it1 = v1.erase(it1);
				it1 = v1.erase(it1);//把第一个和第二个删掉
				//如果相同直接删掉
				//注意: 删掉之后,失效了 
				//it1 = v1.begin();
				count += 2;
			}//如果不相等直接下一个
			it1++;
		}//当一直循环没用, 直到末尾退出/
	}
	cout << count;


	return 0;
}