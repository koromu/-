//#include <iostream>
//#include <deque>	
//using namespace std;
//
//int main()
//{
//	//尝试单调队列
//	int n, k; cin >> n >> k;
//	int arr[1000005] = {0};//记录序列a们
//	for (int i = 1; i <= n; i++) cin >> arr[i];
//	deque <int> dq;//记录下标
//	for (int i = 1; i <= n; i++)
//	{
//		while (!dq.empty() && arr[dq.back()] > arr[i])//给i留位置,在下面才是真正的插入i
//			dq.pop_back();//在队尾放最小的数
//		//最后输出队头 ,每次与新来的数比较, 所以最前面的最小, 所以直接输出队头的就是最小
//		//如果为空则直接插入
//		dq.push_back(i);//插入这个元素作为队头, 或者在最小的数后面
//	//最后可能是只有i, 或者剩下几个数最后是i
//		//判断这么多个数, 从头的位置是否都在窗口中
//		if (i >= k)//下标至少要大于窗口
//		{
//			while (!dq.empty() && dq.front() <= i - k)
//				dq.pop_front();//按道理可以有的宽度的首元素的最小位置, 如果比最小还小, 就是在区间的左侧需要去头.
//				//最后的开头是真的最小的
//			cout << arr[dq.front()] << ' ';//打完就得到了全部的最小
//		}
//	}
//	cout << endl;
//	while (!dq.empty()) dq.pop_front();//清空
//	for (int i = 1; i <= n; i++)
//	{
//		while (!dq.empty() && arr[dq.back()] < arr[i])
//			dq.pop_back();
//		dq.push_back(i);
//		if (i >= k)
//		{
//			while (!dq.empty() && dq.front() <= i - k)
//				dq.pop_front();
//			cout << arr[dq.front()] << ' ';
//		}
//	}
//	return 0;
//}