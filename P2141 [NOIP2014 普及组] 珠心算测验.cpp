////#include <iostream>
////#include <set>
////using namespace std;
////
//////����Ҫȥ��, �������Ǹ�����!!
////int main()
////{
////	bool arr[5000]={0};
////	int n,count = 0; cin >> n; // count ¼�ж��ٸ���
////	set<int> s1;//�����е���������ͬ
////	for (int i = 0; i < n; i++)
////	{
////		int temp; cin >> temp;
////		s1.insert(temp);
////	}//����˳�����е�����
////	//һ��ȥ������
////	auto it1 = s1.begin();
////	auto it4 = s1.end();
////	auto it5 = s1.end();//it2�ľ�����
////	it4--;//it1�ľ�����
////	for (int m = 0 ; m < s1.size()-2; m++)//m��¼1ָ���λ��
////	{
////		auto it2 = it1;
////		it2++;
////		auto it3 = it2;
////		it3++;
////		for (int i = 0; i < s1.size() - 1; i++)//i��¼2ָ���λ��
////		{
////			int c = 0;
////			c = *it1 + *it2;
////			for (; *it3 <= c&& it3!=s1.end(); it3++)
////			{//�����������������, ���С��c�ͼ�������, �����Ȼ��ߴ���c���˳�
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
//////	int n, count = 0; cin >> n; // count ¼�ж��ٸ���
//////	set<int> s1;//�����е���������ͬ
//////	for (int i = 0; i < n; i++)
//////	{
//////		int temp; cin >> temp;
//////		s1.insert(temp);
//////	}//����˳�����е�����
//////	//һ��ȥ������
//////	auto it1 = s1.begin();
//////	auto it4 = s1.end();
//////	auto it5 = s1.end();//it2�ľ�����
//////	it4--;//it1�ľ�����
//////	for (int m = 0; m < s1.size() - 2; m++)//m��¼1ָ���λ��
//////	{
//////		auto it2 = it1;
//////		it2++;
//////		auto it3 = it2;
//////		it3++;
//////		for (int i = 0; i < s1.size() - 1; i++)//i��¼2ָ���λ��
//////		{
//////			int c = 0;
//////			c = *it1 + *it2;
//////			for (; *it3 <= c && it3 != s1.end(); it3++)
//////			{//�����������������, ���С��c�ͼ�������, �����Ȼ��ߴ���c���˳�
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
//////����Ҫȥ��, �������Ǹ�����!!
////int main()
////{
////	bool arr[200] = { 0 };
////	int n, count = 0; cin >> n; // count ¼�ж��ٸ���
////	set<int> s1;//�����е���������ͬ
////	for (int i = 0; i < n; i++)
////	{
////		int temp; cin >> temp;
////		s1.insert(temp);
////	}//����˳�����е�����
////	//һ��ȥ������
////	auto it1 = s1.begin();
////	auto it4 = s1.end();
////	auto it5 = s1.end();//it2�ľ�����
////	it4--;//it1�ľ�����
////	for (int m = 0; m < s1.size() - 2; m++)//m��¼1ָ���λ��
////	{
////		auto it2 = it1;
////		it2++;
////		auto it3 = it2;
////		it3++;
////		for (int i = 0; i < s1.size() - 1; i++)//i��¼2ָ���λ��
////		{
////			int c = 0;
////			c = *it1 + *it2;
////			//ʹ��find()����
////			if (s1.count(c))//������ڷ���1, �����ڷ���0
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
//	//�ö��ֲ����������ĺ��Ƿ����, Ȼ��ֱ�ӱ����������Ϳ�����
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
