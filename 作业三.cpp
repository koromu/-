//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << i << '*' << j << '=' << i * j << ' ';
//		}
//		cout << endl;
//	}
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n,c = 0; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			c += j;
//		}
//	}
//	cout << c;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    for (int i = 1; i <= 100010; i++)
//        if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
//        {
//            cout << i << endl;
//            break;
//        }
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//bool jud(int x)
//{
//	vector<int> ux;
//	int tmp = x, u = 0;
//	while (x)
//	{
//		int n = x % 10;
//		ux.push_back(n);
//		x /= 10;
//	}
//	for (int i = 0; i < ux.size(); i++)
//	{
//		u += ux[i] * pow(10, (ux.size() - i - 1));
//	}
//	return u == tmp;
//}
//
//int main()
//{
//	for (int i = 10; i <= 1000; i++)
//	{
//		if (jud(i))
//			cout << i << " ";
//	}
//
//	return 0;
//}