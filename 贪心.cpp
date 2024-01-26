#define _CRT_SECURE_NO_WARNINGS

//区间选点
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//int n;
//struct Range
//{
//    int l, r;
//}range[N];
//
//bool cmp(Range a, Range b)
//{ return a.l < b.l; }
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) scanf("%d%d", &range[i].l, &range[i].r);
//
//    sort(range, range + n,cmp);//按左端点在数轴上排好顺序
//
//    int res = 0, ed = -2e9;//记录最后一个节点
//    for (int i = 0; i < n; i++)
//        if (range[i].l > ed)//判断这个区间的左节点在不在当前最后区间的右节点之前, 如果不是, 说明已经有点覆盖了这个区间, 如果是, 说明没有点覆盖了这个区间, 需要进入判断, 增加新的点, 然后更新最后区间
//        {
//            res++;//点的数量加一
//            ed = range[i].r;//把最后一个区间的点更新掉
//        }
//
//    printf("%d\n", res);//打印需要多少个点
//
//    return 0;
//}

//默写
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//int n;
//struct range {
//	int l, r;
//}ranges[N];//用结构体数组存边
//
//bool cmp(range a, range b)
//{
//	return a.r < b.r;//为什么是按右端点排序呢?
//	//一般区间问题, 都先排个序, 左端点, 有段点, 双关键字
//	//好像用左端点排序也行???
//} 
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) scanf("%d%d", &ranges[i].l, &ranges[i].r);//读入每个区间
//
//	sort(ranges, ranges + n, cmp);
//	//排好序了
//
//	int ans = 0, ed = -2e9;
//	for (int i = 0; i < n; i++)
//	{
//		if (ranges[i].l > ed)//如果没覆盖区间的话, 就更新区间, 也就是第i个区间在上一个区间的右边
//		{
//			ans++;
//			ed = ranges[i].r;
//		}
//	}
//
//	cout << ans;
//	return 0;
//}
//在评论区看到这个
//#include <iostream>
//#include <vector>
//using namespace std;
//typedef pair<int, int> PII;
//int main()
//{
//    int n, l, r, res = 0;
//    vector<PII> v;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> l >> r;
//        v.push_back({ l,r });//存入每一个区间
//    }
//    sort(v.begin(), v.end());//先根据first排序, 也就是左端点
//    l = -2e9, r = -2e9;
//    for (int i = 0; i < v.size(); ++i)//从第一个左端点开始遍历
//    {
//        if (v[i].first <= r)//这个区间的左端点在上一个区间的右端点的左边, 说明还是在这个区间里面, 这次取两个区间的交集, 更新这个区间的左右端点, 因为只有交集的部分的点, 才是两个集合都有的点
//        {
//            l = max(l, v[i].first);
//            r = min(r, v[i].second);
//        }
//        else res += 1, l = v[i].first, r = v[i].second;//如果不是, 也就是新的区间脱离了上一个区间或者两个, 反正不在交集范围内了, 所以要取新的点了, 因为只有一个集合, 所以就取这个集合的左右端点
//    }//记得增加点的值哦
//    cout << res;
//    return 0;
//}//左端点排序, 所以其实左右都可以

//最大不相交区间数量
//最大不相交区间为什么和区间取点的代码相同?
//区间取点就是取每个可以想相交的区间的交集的一个点, 会取下一个点的原因是因为不相交, 所以取的每个点都是一个不相交的集合, 如果相交就是取同一个点, 且为了取最少的点, 取的是右端点
//所以是相同的原理
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//int n;
//bool cmp(range a, range b)
//{
//    return a.r < b.r;
//}
//struct range{
//    int l, r;
//}ranges[N];
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) scanf("%d%d", &ranges[i].l, &ranges[i].r);
//
//    sort(ranges, ranges + n);
//
//    int res = 0, ed = -2e9;
//    for (int i = 0; i < n; i++)
//        if (ed < ranges[i].l)
//        {
//            res++;
//            ed = ranges[i].r;
//        }
//
//    printf("%d\n", res);
//
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//const int N = 100010;
//int n;
//struct range
//{
//    int l, r;
//}ranges[N];
//
//bool cmp(range a, range b)
//{
//    return a.l < b.l;
//}
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        int l, r;
//        scanf("%d%d", &l, &r);
//        ranges[i] = { l, r };
//    }
//    sort(ranges, ranges + n, cmp);
//
//    priority_queue<int, vector<int>, greater<int>> heap;//优先队列, 小根堆
//    for (int i = 0; i < n; i++)
//    {
//        auto r = ranges[i];//获取一个区间
//        if (heap.empty() || heap.top() >= r.l) 
//            heap.push(r.r);//如果现在区间的最左边的右端点比新的区间的左端点要大, 说明肯定有交集, 插入一个区间, 说明要分两个组 
//        else//heap.top >= range[i].l, 当前区间的左端点比最小的右端点还要小，放到任何一组都会有相交部分。
//        {
//            heap.pop(); //如果现在区间的最左边的右端点比新的区间的左端点要小, 说明没有交集, 说明不用新的组. 那为什么要就删去最左边的右端点?
//            //因为可以直接目前已知的是至少和最小的集合没有交集, 所以加入最小的集合的组中, 把代表最小的集合的组的点删去
//            heap.push(r.r);//更新这个区间的原因 : 因为是按左端点排序的, 所以这个区间判断过后, 后面区间肯定和这个区间的最小的右端点没有交集, 所以要删去并更新.
//        }
//    }
//    printf("%d\n", heap.size());
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 100010;
//int n;
//struct Range
//{
//    int l, r;
//}range[N];
//
//bool cmp(Range a, Range b)
//{
//    return a.l < b.l;
//}
//
//int main()
//{
//    int st, ed;
//    scanf("%d%d", &st, &ed);//读入目标区间
//    scanf("%d", &n);//读入区间数量
//    for (int i = 0; i < n; i++)
//    {
//        int l, r;
//        scanf("%d%d", &l, &r);
//        range[i] = { l, r };
//    }//读入各个区间
//
//    sort(range, range + n, cmp);//按照左端点排序
//
//    int res = 0;//使用的区间数
//    bool success = false;//是否能够覆盖
//    for (int i = 0; i < n; i++)
//    {
//        int j = i, r = -2e9;//双指针算法
//        while (j < n && range[j].l <= st)
//        {
//            r = max(r, range[j].r);
//            j++;//把这一次可能要用的区间遍历一遍, 然后到达下一次要使用的区间集合的起点
//        }//这个循环找到左端点能覆盖st的区间中, 右端点最远的点
//
//        if (r < st)//如果找没找到左端点覆盖st的, 那就直接返回-1
//        {
//            res = -1;
//            break;
//        }//如果这个右端点
//
//        res++;//使用了一个区间
//        if (r >= ed)//加了这个区间后, 已经覆盖了ed
//        {
//            success = true;//找到了, 跳出循环
//            break;
//        }
//
//        st = r;//还没有覆盖完全, 更新一下st, 更新到这个区间的右端点
//        i = j - 1;//为了让这个循环后i变成j
//    }
//
//    if (!success) res = -1;//如果失败了, 就会进入判断, 答案是-1
//    printf("%d\n", res);//成功了就直接输出
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//struct range {
//    int l, r;
//}ranges[N];
//
//bool cmp(range a, range b)
//{
//    return a.l < b.l;
//}
//
//int main()
//{
//    int st, ed, n;
//    cin >> st >> ed;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        scanf("%d%d", &ranges[i].l, &ranges[i].r);
//
//    sort(ranges, ranges + n, cmp);
//
//    int res = 0; bool success = false;
//    for (int i = 0; i < n; i++)
//    {
//        int j = i, r = -2e9;
//        while (j < n && ranges[j].l <= st)
//        {
//            r = max(r, ranges[j].r);//更新好, 就会成功
//            j++;
//        }
//
//        if (r < st)
//        {
//            res = -1;
//            break;
//        }
//        res++;
//        if (r >= ed)
//        {
//            success = true;
//            break;
//        }
//        st = r;//更新没有覆盖的区间的起点st
//        i = j - 1;
//    }
//    if (!success) res = -1;
//    cout << res;
//
//    return 0;
//}
//合并果子
//贪心问题, 也是Huffman树问题 - 完全二叉树(每一个节点一定有两个子节点)
//每次合并最小的两堆,就可以得到最优解
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	int n; cin >> n;
//	priority_queue<int, vector<int>, greater<int>> heap;//优先队列的小根堆
//	
//	for (int i = 0; i < n; i++)
//	{
//		int tmp; scanf("%d", &tmp);
//		heap.push(tmp);
//	}
//	int ans = 0;
//	while (!heap.empty())
//	{
//		int x = heap.top(); heap.pop();
//		int y = heap.top(); heap.pop();
//		ans += x + y;
//		heap.push(x + y);//插入新形成的一堆
//	}
//	cout << ans;
//	return 0;
//}
//货仓选址
//#include <iostream>
//#include <math.h>
//#include<algorithm>
//using namespace std;
//const int N = 100010;
//int a[N];
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	sort(a, a + n);
//
//	int x = a[(n >> 1)];
//	int ans = 0;
//	for (int i = 0; i < n; i ++ )//中间值是答案, 证明过程不记得了
//	{
//		ans += abs(a[i] - x);
//	}
//	cout << ans;
//}

//排队打水
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//int a[N];
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//
//	//有个证明得到的就是, 前面的人的时间越少越好
//	sort(a, a + n);
//
//	//公式
//	long long num = n, ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ans += a[i] * (num - 1);
//		num--;
//	}
//	cout << ans;
//	return 0;
//}
//耍杂技的牛
//需要证明按wi + si排序可以得到最优解
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef pair<int, int> pii;
//
//const int N = 50010;
//pii v1[N];
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int a, b; scanf("%d%d", &a, &b);
//		v1[i] = {a + b, a};//可以直接排序
//	}
//	sort(v1, v1 + n);
//
//	int ans = -2e9, w = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		ans = max(ans, w - (v1[i].first - v1[i].second));///first是a + b - a得到健康值
//		w += v1[i].second;//w一直加起来, 下面的都减去上面的
//	}
//
//	cout << ans;
//
//	return 0;
//}