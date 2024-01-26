//#define _CRT_SECURE_NO_WARNINGS
////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////typedef vector<pair<int ,int >> vp;
////typedef vector<int> vi;
////
////
////const int N = 3000010;
////int a[N], s[N];
////
////vp in, fin;//分别记录两个操作, 插入 和 求和区间
//////因为都是一头一尾, 所以用pair存入两个数据
////vi alls;//记录所有要用的坐标
////int n, m;
////
////int find(int x)//在alls中找到对应的下标
////{//所以是在alls中二分
////	int l = 0, r = alls.size() - 1;
////	while (l < r)
////	{
////		int mid = l + r >> 1;
////		if (alls[mid] >= x) r = mid;
////		else l = mid + 1;
////	}
////	return l + 1;
////}
////
////
////int main()
////{
////	cin >> n >> m;
////	int x, c, l, r;//在X上加C
////	for (int i = 0; i < n; i++)
////	{
////		scanf("%d%d", &x, &c);
////		in.push_back({ x,c });//准备要插入的c和坐标x
////		alls.push_back(x);//记录所有都要的坐标
////	}
////
////	for (int i = 0; i < m; i++)
////	{
////		scanf("%d%d", &l, &r);
////		fin.push_back({ l,r });
////		alls.push_back(l), alls.push_back(r);
////	}
////	//去重,然后可以进行操作
////	sort(alls.begin(), alls.end());
////	alls.erase(unique(alls.begin(), alls.end()), alls.end());
////
////	//插入数据
////	for (int i = 0; i < n; i++)
////	{
////		//遍历in容器, 在x上加c
////		//在a上加c
////		int x = find(in[i].first);
////		a[x] += in[i].second;//根据find中的返回值可知, a中的元素全部是右移一位的
////	}
////
////	//计算前缀和
////	for (int i = 1; i <= alls.size(); i++)
////		s[i] = s[i - 1] + a[i];//为了不取负数
////
////	//处理询问
////	for (int i = 0;i <= m-1;i++)
////	{
////		//直接用前缀和的差计算区间的大小
////		int l = find(fin[i].first), r = find(fin[i].second);
////		printf("%d\n", s[r] - s[l - 1]);
////	}
////
////	return 0;
////}
//
//#include <iostream>//以下有错误
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//const int N = 300010;
////储存操作的数组是pair
//typedef vector<pair<int, int >> vp;
//typedef vector<int> vi;
//
////简历操作数组, 原数数组, 前缀和数组
//vp in, count1;//前面的在x上加c的, 计算区间和的
//vi alls;//记录全部坐标的数组
//int a[N], s[N];
//
//int fin(int x)
//{
//    int l = 0, r = alls.size() - 1;
//    while (l < r)
//    {
//        int mid = (l + r) >> 1;
//        if (alls[mid] <= x)l = mid;
//        else r = mid - 1;
//    }
//
//
//
//    return r + 1;//从1开始得下表
//}
//
//int main()
//{
//    int n, m; cin >> n >> m;
//
//    for (int i = 0; i < n; i++)
//    {
//        int x, c; scanf("%d%d", &x, &c);
//        alls.push_back(x);
//        in.push_back({ x, c });
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        int l, r;
//        scanf("%d%d", &l, &r);
//        alls.push_back(l);
//        alls.push_back(r);
//        count1.push_back({ l, r });
//    }
//
//    //去重
//    sort(alls.begin(), alls.end());
//    alls.erase(unique(alls.begin(), alls.end()), alls.end());
//
//    //操作插入
//    for (int i = 0; i < in.size(); i++)
//        //把in中的x 加 上 c, x 是 数轴
//        //在alls数组上找到值为x的下标,然后
//        a[fin(in[i].first)] += in[i].second;
//
//    //此时a数组中已经初始化了,接下来计算s
//    for (int i = 1; i <= alls.size() - 1; i++)
//        s[i] = s[i - 1] + a[i];//那s[o]是多少a[0]到哪去了?
//    //答 : 在插入a的过程中, 返回值被加了1, 所以所有alls中的下标在a中都被加了1, 所以a中也是从1开始得, 所以这里要配合从1开始求前缀和
//
////处理count操作
//    for (int i = 0; i < count1.size(); i++)
//    {
//        int l = fin(count1[i].first);
//        int r = fin(count1[i].second);
//        printf("%d", (s[r] - s[l] + 1));
//    }
//
//}