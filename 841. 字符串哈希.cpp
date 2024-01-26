//重要的哈希方式 - 字符串前缀哈希法
//预处理除所有前缀 字符串的 哈希值

//如何定义前缀的哈希值, 把字符串看成p进制的数
//然后映射
//但是不能映射成0

//假定不存在重复, 冲突p = 131 或者13331
//				   Q = 2^64  -> 直接unsigned long long 
//这个经验值大概率不冲突

//可以用所有前缀的哈希得到所有子串的哈希值


//短的一百遍两个哈希数, 对齐, 然后相减
//公式 : h[R] - h[L] * p ^ (R - L + 1;)


//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//typedef unsigned long long ull;
//
//const int N = 100000, P = 131;
//
//int n, m;
//char str[N];
//ull p[N], h[N];//预处理p的多少次方, 方便进位
//
//ull get(int l, int r)//求的l到r之间的哈希值的公式
//{
//	return h[r] - h[l - 1] * p[r - l + 1];
//}
//
//int main()
//{
//	scanf("%d%d%s", &n, &m, str + 1);
//	//初始化前缀哈希, 并且初始化前缀哈希
//	p[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		p[i] = p[i - 1] * P;
//		h[i] = h[i - 1] * P + str[i];//整体向左移一位, 然后在个位直接放str[i]因为本来就是 P 的0次方, 乘以1
//	}
//	//处理n询问
//	while (n--)
//	{
//		int l1, r1, l2, r2;
//		scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
//		//问l1, r1 和l2, r2这两段是否相同
//		if (get(l1, r1) == get(l2,r2))
//		{
//			puts("Yes\n");
//		}
//		else puts("No\n");
//	}
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//const int N = 100010;
//typedef unsigned long long ull;
////提前准备
//
//ull h[N], p[N];//h是存放前缀哈希, p是存放预处理好的次方, 用于进位
//int n, m, P = 131;//记录长度n, m次操作
//char str[N];//存放字符串
//
//int get(int l, int r)
//{
//    //得到, l到r的哈希值
//    return h[r] - h[l - 1] * p[r - l + 1];//高位相减
//}
//
//
//int main()
//{
//    scanf("%d%d%s", &n, &m, str + 1);//从1开始存放字符串, 可不可以从0开始, 当然可以, 但是为了把前缀哈希 和 次方数组一起处理就从1 开始, 次方不能从0 开始
//    p[0] = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        //预处理次方和前缀哈希
//        p[i] = p[i - 1] * P;
//        h[i] = h[i - 1] * P + str[i];
//    }
//
//    while (m--)
//    {
//        int l1, r1, l2, r2;
//        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
//
//        if (get(l1, r1) == get(l2, r2))
//            puts("Yes");
//        else
//            puts("No");//puts会自动换行
//
//    }
//
//
//    return 0;
//}