#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

//int main()
//{
	//是否存在两个数的平方和
	//双指针,分别指向首和尾, 判断平方和和目标数的关系, 大于则移动尾指针, 减小平方和数, 小于则移动首指针, 增大平方和数

	//int n; cin >> n;
	//int arr[100001] = {0};
	//for (int i = 0; i < n; i++)
	//{
	//	int tmp;
	//	cin >> tmp;
	//	arr[i] = tmp;
	//}
	//int sum,c; cin >> sum;
	//sort(arr, arr + n);
	//for (int i = 0, j = n - 1; i < j;)
	//{
	//	c = (arr[i]*arr[i] + arr[j]*arr[j]);
	//	if (c > sum) j--;
	//	if (c < sum) i++;
	//	if (c == sum) 
	//	{
	//		cout << arr[i] << ' ' << arr[j] << endl;
	//		i++;
	//	}
	//}

	////判断回文字符
	//int n; cin >> n;
	//for (int m = 0; m < n; m++)
	//{
	//	string s; cin >> s;
	//	int i = 0, j;
	//	for (i = 0, j = s.size() - 1; i < j; i++, j--)
	//	{//如果两个指针指向的字符相同则进入循环
	//		if (s[i] != s[j]) {
	//			cout << "no" << endl;
	//			break;
	//		}
	//	}//一个字符串的循环
	//		if(s[i] == s[j])
	//			cout << "yes" << endl;
	//}

//	//寻找区间和
//	int n,s; cin >> n;
//	int arr[100001] = {0};
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	cin >> s;//目标和
//	int i = 0, j =0,now;
//	now = arr[0];
//	while (j<n)//i在j前面, 注意:当两个指针都指向最后时就结束了
//	{
//		//if (now < s) i++;
///*		if (now == s) 
//		{
//			cout << i << ' ' << j << endl;
//			i++;
//		}*/ //特点点两个i++的条件可以合并
//		//合并
//		if (now >= s)
//		{
//			if (now == s)
//			{
//				cout << i << ' ' << j << endl;
//			}
//			now -= arr[i];//i要++了, 要除去这个i
//			i++;//反正都是要i++的
//			//i++后需要注意i和j的位置
//			if (i > j) 
//			{
//				j++;//把i和j指向一个地方
//				now = arr[i];//让大小变为arr[i],指向同一个地方只算一个数 
//			}
//		}
//		if (now < s) { j++; now += arr[j]; }//
//	}

	//poj 3061
	// 第一行n,表示n个案例
	// 第二行一个N,一个S,N表示元素个数 , S表示目标的数
	//找到大于等于S的最小的长度,并输出
	//一行输出一个答案
//	return 0;
//}

//int main()
//{
//	int n, N, S, ans, now, c, arr[100005], x, y;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		ans = 9999;
//		cin >> N >> S;
//		x = y = 0;
//		for (int j = 0; j < N; j++)
//			cin >> arr[j];//初始化数组
//			c = arr[0];
//		while (y < N)
//		{
//			if (c <= S)
//			{
//				if (c == S) 
//				{ 
//					now = y - x+1; 
//					ans = min(ans, now);	
//				}
//				y++;
//				c += arr[y];
//			}
//			if (c > S)
//			{
//				now = y - x+1;
//				ans = min(ans, now);
//				c -= arr[x];
//				x++;//向前移动
//				if (x > y) { y++; c = arr[x]; }//防止x > y
//			}
//		}
//		if (ans == 9999)
//			ans = 0;
//		cout << ans << endl;
//	}
//	return 0;
//}



