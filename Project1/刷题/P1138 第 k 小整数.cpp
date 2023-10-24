//#include <iostream>
//#include <algorithm>
//#include <set>
//using namespace std;
//
////int main()
////{
////	int n, k; cin >> n >> k;
////	set<int> s1;
////	for (int i = 0; i < n; i++) 
////	{
////		int tmp; cin >> tmp;
////		s1.insert(tmp); 
////	}//集合去重
////	set<int>::iterator it = s1.begin();
////	for (int i = 1; i < k&&it!=s1.end(); i++)
////		it++;//it从第一个开始, +1得到第二个,所以距离第k小的元素k-1步 
////	//0 - k左闭右开是k步
////	//1 - k左闭右开是k-1步
////	if (it == s1.end())
////		cout << "NO RESULT" << endl;
////	else
////		cout << *it;
////	return 0;
////}
//
////还有函数方法
//int main()
//{
//	int n, k,arr[10005]; cin >> n >> k;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	//先排序再去重
//	//排序 sort()
//	sort(arr, arr + n);
//	//去重 unique,居然是把重复的元素放到数组的最后面
//	int len = unique(arr, arr + n) - arr;//返回最后一个之后的元素的地址, 再减去数组首地址, 得到伪去重后的长度
//	if (len >= k)
//		cout << arr[k - 1];
//	else
//		cout << "NO RESULT";
//
//	return 0;
//}