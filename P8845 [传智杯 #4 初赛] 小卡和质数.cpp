//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//异或值为1, 说明除了第一位二进制位, 其他位都相同, 说明相差为1
//	//也就是说这两个数的奇偶性不同, 偶数除了2都不是质数
//	//所以一定有一个2 => 10
//	//异或为1, 所以是11 => 3
//	int t, c = 0;
//	cin >> t;
//	while (t--)
//	{
//		int a, b; cin >> a >> b;
//		if (a > b)
//			swap(a, b);
//		if (a == 1 && b == 2)//1不是质数
//			puts("YES");
//		else puts("NO");
//	}
//	return 0;
//}