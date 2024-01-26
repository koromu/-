//#include <iostream>
//#include <algorithm>
//using namespace std;
//const long long n = 100005;
////进击的奶牛
//int main()
//{
//	/*
//	int a = -2, b = -3;
//	int c = (a + b) / 2;
//	cout << c;
//	*/
//
//	int N, C, arr[n] = { 0 }, ans = 0; cin >> N >> C;
//	//N是牛棚的个数, C是牛的数量
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	sort(arr, arr + N);//坐标点的排序
//	//用二分法枚举最大的最小距离是多少
//	//需要有牛棚才能放牛
//	int left = 0, right = arr[N-1]-arr[0], mid;//左右用来计算mid,不看坐标
//	while (left < right)
//	{
//		mid = (left + right+1) >> 1;
//		//需要判断是否有牛棚在+n个mid上
//			//一个牛棚只能有一头牛
//			//双指针检测一个空牛棚牛棚,有才能放牛
//		int peng = 0 ,c = 1;//c表示这个距离能放的牛的数量,第一头奶牛直接放进去了第一个位置,而后是比较距离
//		for (int j = 1; j < N; j++)
//		{
//			if (arr[j] - arr[peng] >= mid)//第一个arr[]-arr[]直接就是一个长度,这个长度需要比mid大,要不然mid就会跨越这个牛棚
//			{
//				c++;//放了一头牛
//				peng = j;//peng指的就是上一头牛的牛棚
//				//有时候不会进来判断,那么后一个指针的位置变动,前一个指针位置不变,最后计算的就是这之间有一个牛棚就行了
//			}
//		}
//		if (c >=C) {left = mid + 1;ans = mid;}//足够小,扩大mid
//			else right = mid;//太大了,缩小mid
//	}
//	cout << ans;
//	return 0;
//}