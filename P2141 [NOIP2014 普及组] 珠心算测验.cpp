////#include <iostream>
////#include <set>
////using namespace std;
////
//////可能要去重, 所以用那个东西!!
////int main()
////{
////	bool arr[5000]={0};
////	int n,count = 0; cin >> n; // count 录有多少个数
////	set<int> s1;//集合中的数各不相同
////	for (int i = 0; i < n; i++)
////	{
////		int temp; cin >> temp;
////		s1.insert(temp);
////	}//生成顺序排列的数字
////	//一次去两个数
////	auto it1 = s1.begin();
////	auto it4 = s1.end();
////	auto it5 = s1.end();//it2的警戒线
////	it4--;//it1的警戒线
////	for (int m = 0 ; m < s1.size()-2; m++)//m记录1指向的位置
////	{
////		auto it2 = it1;
////		it2++;
////		auto it3 = it2;
////		it3++;
////		for (int i = 0; i < s1.size() - 1; i++)//i记录2指向的位置
////		{
////			int c = 0;
////			c = *it1 + *it2;
////			for (; *it3 <= c&& it3!=s1.end(); it3++)
////			{//遍历第两个数后的数, 如果小于c就继续遍历, 如果相等或者大于c就退出
////				if (*it3 == c)
////					if (arr[*it3] == 0)
////					{
////						arr[*it3] = 1;
////						count++;
////					}
////				if (it3 == --s1.end())
////					break;
////			}
////			it2++;
////			if (it2 == it5)
////				break;
////		}
////		it1++;
////
////		if (it1 == it4)
////			break;
////	}
////	cout << count;
////	return 0;
////}
////
//////#include <iostream>
//////#include <set>
//////using namespace std;
//////
//////
//////int main()
//////{
//////	int n, count = 0; cin >> n; // count 录有多少个数
//////	set<int> s1;//集合中的数各不相同
//////	for (int i = 0; i < n; i++)
//////	{
//////		int temp; cin >> temp;
//////		s1.insert(temp);
//////	}//生成顺序排列的数字
//////	//一次去两个数
//////	auto it1 = s1.begin();
//////	auto it4 = s1.end();
//////	auto it5 = s1.end();//it2的警戒线
//////	it4--;//it1的警戒线
//////	for (int m = 0; m < s1.size() - 2; m++)//m记录1指向的位置
//////	{
//////		auto it2 = it1;
//////		it2++;
//////		auto it3 = it2;
//////		it3++;
//////		for (int i = 0; i < s1.size() - 1; i++)//i记录2指向的位置
//////		{
//////			int c = 0;
//////			c = *it1 + *it2;
//////			for (; *it3 <= c && it3 != s1.end(); it3++)
//////			{//遍历第两个数后的数, 如果小于c就继续遍历, 如果相等或者大于c就退出
//////				if (*it3 == c)
//////					count++;
//////				if (it3 == --s1.end())
//////					break;
//////			}
//////			it2++;
//////			if (it2 == it5)
//////				break;
//////		}
//////		it1++;
//////
//////		if (it1 == it4)
//////			break;
//////	}
//////	cout << count;
//////	return 0;
//////}//40
////
////#include <iostream>
////#include <set>
////using namespace std;
////
//////bool jud(set<int>&s1,int c)
//////{
//////	if (s1.count(c) == c)
//////		return 1;
//////	else
//////		return 0;
//////}
//////可能要去重, 所以用那个东西!!
////int main()
////{
////	bool arr[200] = { 0 };
////	int n, count = 0; cin >> n; // count 录有多少个数
////	set<int> s1;//集合中的数各不相同
////	for (int i = 0; i < n; i++)
////	{
////		int temp; cin >> temp;
////		s1.insert(temp);
////	}//生成顺序排列的数字
////	//一次去两个数
////	auto it1 = s1.begin();
////	auto it4 = s1.end();
////	auto it5 = s1.end();//it2的警戒线
////	it4--;//it1的警戒线
////	for (int m = 0; m < s1.size() - 2; m++)//m记录1指向的位置
////	{
////		auto it2 = it1;
////		it2++;
////		auto it3 = it2;
////		it3++;
////		for (int i = 0; i < s1.size() - 1; i++)//i记录2指向的位置
////		{
////			int c = 0;
////			c = *it1 + *it2;
////			//使用find()查找
////			if (s1.count(c))//如果存在返回1, 不存在返回0
////			{
////				if (arr[c] == 0)
////				{
////					count++;
////					arr[c] = 1;
////				}
////			}
////			it2++;
////			if (it2 == it5)
////				break;
////		}
////		it1++;
////
////		if (it1 == it4)
////			break;
////	}
////	cout << count;
////	return 0;
////}
//#include <iostream>
//
//using namespace std;
//const int	N = 110;
//int a[N], c, n;
//
//bool fin(int x, int y)
//{
//	int obj =x+ y;
//	int l = 0, r = n-1;
//	int mid;
//	while (l < r)
//	{
//		mid = (l + r) >> 1;
//		if (obj == a[mid])
//			return true;
//		else if(obj < a[mid])
//			r = mid;
//		else l = mid +1;
//	}
//	if (l < r && a[l] == obj)
//		return true;
//	else return false;
//}
//
//int main()
//{
//	//用二分查找两个数的和是否存在, 然后直接遍历两个数就可以了
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	for(int i= 0 ; i< n-1 ; i ++)
//		for (int j = i + 1; j < n; j++)
//		{
//			if (fin(a[i], a[j]))
//				c++;
//		}
//	cout << c;
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int countPairsWithSum(const vector<int>& nums) {
//	int count = 0;
//	int n = nums.size();
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (find(nums.begin(), nums.end(), nums[i] + nums[j]) != nums.end()) {
//				count++;
//			}
//		}
//	}
//	return count;
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	vector<int> nums(n);
//	for (int i = 0; i < n; i++) {
//		cin >> nums[i];
//	}
//
//	int result = countPairsWithSum(nums);
//	cout << result << endl;
//
//	return 0;
//}
