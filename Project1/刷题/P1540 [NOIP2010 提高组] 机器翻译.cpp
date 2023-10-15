#include <iostream>
#include <queue>
using namespace std;
//M个单位,每个单位一个单词和译义, 最新的单词存入前,如果等于M, 那么删除最早的单词

//每个数字代表一个英文单词

//M是内存容量 N是文章长度

//M表示要注意删除前面的单词 N表示要输入的单词个数

//最后输出查字典的个数

//例题使用哈希表

int main()
{
	int arr[1005] = { 0 };//直接把数当作下标, 进行标记,存在标1, 不存在标0
	//选择一个容器
	//用一个count记录查字典次数
	int count = 0;
	//需要查找容器中的值,存在就不用查字典(要么遍历, 要么查找)

	//先进先出queue
	queue<int> q1;//容器中记录了的元素为有的元素
	int M, N;
	cin >> M >> N;
	for (; N > 0; N--)
	{
		int temp;
		cin >> temp;
		if (q1.empty() || arr[temp] == 0)
		{
			if ((int)q1.size() == M)
			{
				//删除第一个
				arr[q1.front()] = 0;
				q1.pop();
				//在哈希表上把标记去掉
			}
			//初始全都为0
			//如果为0, 就插入

		}
		//如果满了
		if (arr[temp] == 0)
		{
			q1.push(temp);//第一个位置插入
			arr[temp] = 1;//插入后有了, 在哈希表上做标记, 不需要查字典了
			count++;
		}
	}
	//如果不为0, 说明已经存在, 不需要查字典, 就不用管了

	cout << count << endl;
	return 0;
}
