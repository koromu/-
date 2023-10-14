//#include <iostream> 
//using namespace std;
//#include <set>
//
//int main()
//{
//	int n; cin >> n;
//	double c = 0.0;
//	multiset<int,less<int>> s1;//升序排列
//	for (int i = 0; i < n; i++)
//	{
//		int temp; cin >> temp;
//		c += temp;
//		s1.insert(temp);
//	}
//	c -= (*(s1.begin()) + *(--s1.end()));
//	c /= (n - 2);
//	printf("%.2lf", c);
//
//	return 0;
//}//还可以用max函数, 每次进行判断得到最大和最小值