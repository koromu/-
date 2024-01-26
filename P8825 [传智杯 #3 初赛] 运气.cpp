//#include <iostream>
//
//using namespace std;
//
//typedef long long ll;
//const ll mod = 1e9 + 7;
//
//int n, k;
//ll c;
//int main()
//{
//	//一次的范围是1 - 6
//	//两次的范围是11- 66
//	//三次的范围是111 - 666
//	//四次的范围是1111 - 6666
//	//五次的范围是11111 - 66666
//	//六次的范围是111111 - 666666
//	//n是确定范围的, k是用来判断遍历的
//	cin >> n >> k;
//	if (n == 1)
//	{
//		for (int i = 1; i <= 6; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 2)
//	{
//		for (int i = 11; i <= 66; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 3)
//	{
//		for (int i = 111; i <= 666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 4)
//	{
//		for (int i = 1111; i <= 6666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 5)
//	{
//		for (int i = 11111; i <= 66666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 6)
//	{
//		for (int i = 111111; i <= 666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 7)
//	{
//		for (int i = 1111111; i <= 6666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c % mod;
//		return 0;
//	}
//	else if (n == 8)
//	{
//		for (int i = 11111111; i <= 66666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c % mod;
//		return 0;
//	}
//	else if (n == 9)
//	{
//		for (int i = 111111111; i <= 666666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c % mod;
//		return 0;
//	}
//	else
//	{
//		for (int i = 1111111111; i <= 6666666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c % mod;
//		return 0;
//	}
//}
//
//#include <iostream>
//
//using namespace std;
//typedef long long ll;
//const ll mod = 1e9 + 7;
//int n, k;//投掷n次, 
//int c;
//void dfs(int a, ll b)//实际进来的是a - 1 个i, 所以是a - 1位, 要达到n位, 就需要  a - 1 == n 
//{
//	if (a - 1 == n)//如果a == n, 说明刚进入这层, 这个时候还没有进入下面的循环, 这个时候b还是a位, 但是个位还是0
//	{
//		if (b % k == 0)
//		{
//			c++;
//			c %= mod;
//		}
//		return;
//	}
//
//	for (int i = 1; i <= 6; i++)
//	{
//		//遍历每一位
//		dfs(a + 1, b * 10 + i);//进入a+1位, 大小是上一个直接左移一位, 然后个位从1开始遍历
//	}//如果退出来了就再个位再加一位
//}
//
//int main()
//{
//	cin >> n >> k;
//	dfs(1, 0);
//	cout << c;
//}