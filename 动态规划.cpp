
//01背包问题
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 1010;
//int n, m;
//int v[N], w[N];
//int f[N];
//
//int main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)
//        cin >> v[i] >> w[i];//把每一个物品的体积和质量存入数组
//
//    for (int i = 1; i <= n; i++)//循环每一个物品
//        for (int j = m; j >= v[i]; j--)//j是容量, 循环每一个容量?, 那么f中存放的是每个容量的最大值
//            //从大到小的枚举, j - v[i]就是从大到小, 所以先改变的是大的数f[j],而使用的是小的数f[j - v[i]] 
//            //如果从小到大枚举, 先改变的是小的数, 使用的是更小的数, 所以有可能当更小的数变大时, 使用到了已经改变的小的数是属于第i层, 不是第i-1层的了
//            f[j] = max(f[j], f[j - v[i]] + w[i]);//主要通过w[i]来更新f[j]中的值
//            
//    //只有当加入w[i]时, 才能变大f[j]
//    cout << f[m] << endl;   //到最后容量m时, f[m]中放的是从第1件物品到第k件物品, 后面的大价值的物品可能放不进来.但还是得到了最大价值
//    return 0;
//}
//完全背包问题
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1010;
//int f[N];
//int v[N], w[N];
//int n, m;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
//
//	for (int i = 1; i <= n; i++)//枚举每一个物品
//		for (int j = v[i]; j <= m; j++)//枚举每一个容量
//		{
//			f[j] = max(f[j], f[j - v[i]] + w[i]);//使用了等价的方法, 先列出f[i][j]然后再找到通式f[j - v[i]] + w[i]再使用替换
//		}
//
//	cout << f[m];
//	return 0;
//}
//多重背包问题

//优化中打包了s
//可以用1 2 4 8 ..... 512 表示1- 1023中的所有的数, 枚举从1023变成了10
//记住可以用10个数表示就行
//确定上限, 然后一个一个除, 然后一直除一直除, 直到快到上限, 就求最后的C
//然后问题就会变成一个01背包问题, 存入w 和 v数组的是打包好的总重量和总体积

//暴力版
//#include <iostream>	
//#include <algorithm>
//
//using namespace std;
//
//const int N = 110;
//int w[N], v[N], s[N];
//int n, m;
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		cin >> v[i] >> w[i] >> s[i];
//	for (int i = 1; i <= n; i++)
//	{
//		for(int j = 0 ; j <= m ; j ++)
//			for (int k = 0; k <= s[i] && k * v[i] <= j; k++)//容量j和体积有关
//			{
//				f[i][j] = max(f[i][j], f[i - 1][j - v[i] * k] + k * w[i]);
//			}
//	}
//	cout << f[n][m] << endl;
//
//	return 0;
//}

//优化版

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 2010;//加强后的个数
//
//int w[N], v[N], s[N];
//int f[N];//这个优化就是优化那个 O(logs)
//int n, m;
//
//int main()
//{
//    cin >> n >> m;
//    int cnt = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int a, b, s;//a是重量, b是价值, s是总共的个数
//        cin >> a >> b >> s;
//        int k = 1;//k代表打包的棵树
//        while (k <= s)
//        {
//            cnt++;
//            v[cnt] = a * k;//记录体积
//            w[cnt] = b * k;//记录价值
//            s -= k;//更新剩余的个数
//            k *= 2;//打包下一个
//        }
//
//        if (s > 0)
//        {
//            cnt++;
//            v[cnt] = a * s;
//            w[cnt] = b * s;
//        }//剩余的常数C
//    }
//    n = cnt;//记录两个数组的个数
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = m; j >= v[i]; j--)
//            f[j] = max(f[j], f[j - v[i]] + w[i]);
//    }
//    cout << f[m] << endl;
//
//    return 0;
//}


//多重背包问题
//通式: 
//如果用上一层的就从大到小
//用本层的就从小到大

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 110;
//
//int s[N];
//int w[N][N], v[N][N];
//int n, m;
//int f[N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)//第一层默认初始化为0, 所以不取
//	{
//		cin >> s[i];
//		for (int j = 0; j < s[i]; j++)//所有的都要取
//		{
//			cin >> v[i][j] >> w[i][j];
//		}
//	}
//
//	for(int i = 1; i <= n ; i ++)
//		for (int j = m; j >= 0; j--)//从0 - m
//		{
//			for (int k = 0; k < s[i]; k++)//v和w的第二个下标由上面的j可知, 是属于0 - s[i] - 1
//				if (j >= v[i][k]) f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);
//		}
//
//	cout << f[m];
//	return 0;
//}
//分组背包问题
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int N = 110;
//int n, m;
//int f[N];
//int w[N][N], v[N][N];
//int s[N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> s[i];
//		for (int j = 0; j < s[i]; j++)
//			cin >> v[i][j] >> w[i][j];
//	}
//
//	for(int i = 1; i <= n ; i ++)
//		for (int j = m; j >= 0; j--)//注意, 是从后往前
//			for(int k = 0; k < s[i]; k ++)
//				if(v[i][k] < j)//注意关键
//					f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);
//	cout << f[m];
//	return 0;
//}

//数字三角形问题 - 逆序版本
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 510;
//
//int f[N][N];
//int m[N][N];
//int n;
//
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= i; j++)
//            cin >> m[i][j];
//
//    // for(int i = 0 ; i <= n ; i ++)
//    //     for(int j = 0 ; j <= i + 1; j ++)//f[i-1][j]可能是没有数据的地方, 所以把第一层没有数据地方初始化成负无穷, 免得和我们的有数据的强最大值
//    //         f[i][j] = -1e9;//注意要初始化
//
//    for (int i = 0; i <= n; i++)
//        for (int j = 0; j <= i; j++)//f[i-1][j]可能是没有数据的地方, 所以把第一层没有数据地方初始化成负无穷, 免得和我们的有数据的强最大值
//            f[i][j] = -1e9;//注意要初始化
//    // f[1][1] = m[1][1];//注意
//    // for(int i = 2;  i <= n ; i ++)
//    //     for(int j = 1 ; j <= i ; j ++)
//    //         f[i][j] = max(f[i-1][j] + m[i][j], f[i-1][j-1] + m[i][j]);//重要的一步, 也就是可以从哪里来的一步
//
//    for (int i = n; i >= 1; i--)
//        for (int j = i; j >= 1; j--)
//            f[i][j] = max(f[i + 1][j] + m[i][j], f[i + 1][j + 1] + m[i][j]);//这是一个逆序的版本, 可以减少初始化时的记忆, 还有结果的查找
//
//
//    // int res = -1e9;//注意, 以免有-10000和他抢最大值
//    // for(int i = 1 ; i <= n ; i ++)
//    //     if(f[n][i] > res) 
//    //         res = f[n][i];
//
//    // cout << res;
//    cout << f[1][1];
//    return 0;
//}
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 510;
//
//int f[N][N];
//int m[N][N];
//int n;
//
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= i; j++)
//            cin >> m[i][j];
//
//    for (int i = 0; i <= n; i++)
//        for (int j = 0; j <= i + 1; j++)//f[i-1][j]可能是没有数据的地方, 所以把第一层没有数据地方初始化成负无穷, 免得和我们的有数据的强最大值
//            f[i][j] = -1e9;//注意要初始化
//
//    //for (int i = 0; i <= n; i++)
//    //    for (int j = 0; j <= i; j++)//f[i-1][j]可能是没有数据的地方, 所以把第一层没有数据地方初始化成负无穷, 免得和我们的有数据的强最大值
//    //        f[i][j] = -1e9;//注意要初始化
//    f[1][1] = m[1][1];//注意
//    for (int i = 2; i <= n; i++)
//        for (int j = 1; j <= i; j++)
//            f[i][j] = max(f[i - 1][j] + m[i][j], f[i - 1][j - 1] + m[i][j]);//重要的一步, 也就是可以从哪里来的一步
//
//    f[1][1] = m[1][1];//注意
//    int res = -1e9;
//    for (int i = 2; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            f[i][j] = max(f[i - 1][j] + m[i][j], f[i - 1][j - 1] + m[i][j]);//重要的一步, 也就是可以从哪里来的一步
//            if (i == n)
//                res = max(f[n][j], res);
//        }
//    }
//    //for (int i = n; i >= 1; i--)
//    //    for (int j = i; j >= 1; j--)
//    //        f[i][j] = max(f[i + 1][j] + m[i][j], f[i + 1][j + 1] + m[i][j]);//这是一个逆序的版本, 可以减少初始化时的记忆, 还有结果的查找
//
//
//     //int res = -1e9;//注意, 以免有-10000和他抢最大值
//     //for(int i = 1 ; i <= n ; i ++)
//     //    if(f[n][i] > res) 
//     //        res = f[n][i];//正序的结果查找
//
//    cout << res;
//    // cout << f[1][1];
//    return 0;
//}//也是正确的, 在循环中找, 但是时间并没有少很多, 可能是判断的次数问题

//最长公共子序列
//f[i][j]表示第一个序列到i的子序列, 第二个到j的子序列是最长的相同子序列的集合
//#include <iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//int f[N][N];
//int n, m;
//char a[N], b[N];
//
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= m; i++) cin >> b[i];
//	int res = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)//依旧是两个循环求出二维状态的所有的结果, 一个一个的推导到最终结果
//		{
//			f[i][j] = max(f[i - 1][j], f[i][j - 1]);//实际上分成了四种情况, 还有一种是不含两个都不含第i和j个, 这其实就是以下三种情况的特殊情况, 所以是包含在答案内的, 而且还是存在重复的, 但是不遗漏
//			if (a[i] == b[j]) {
//				f[i][j] = f[i - 1][j - 1] + 1;
//			}
//			res = max(res, f[i][j]);
//		}
//	}
//	cout << res;
//	return 0;
//}

//石子合并
//也是一个f[i,j]的状态表示
//f[i,j]表示
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 310;
//int a[N];//初始数组和前缀和数组公用一个数组
//int f[N][N];
//int n;
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	for (int i = 1; i <= n; i++) a[i] += a[i - 1];//单个数组的前缀和公式
//
//	//区间dp需要遍历区间长度
//	for(int len = 2; len <= n; len ++)//再遍历这个长度下的所有的最后合并的点, 也就是从头到尾
//		for (int i = 1; i + len - 1 <= n; i++)//左端点是i, 右端点是起点加长度-1 . 例如 : 起点10, 长度20, 终点是29 = 10 + 20 -1 ( 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29) 
//		{
//			int l = i, r = i + len - 1;
//			f[l][r] = 1e9;
//			for (int k = i; k <= r; k++)//最后合并的点可以是从 左边界(i) 和 到右边界(r)
//			{
//				f[l][r] = min(f[l][r], f[l][k] + f[k + 1][r] + a[r] - a[l-1]);
//			}
//		}
//
//	cout << f[1][n];
//	return 0;
//}

//最长上升子序列
//#include <iostream>
//#include <algorithm>
//
//using namespace std; 
//const int N = 100010;
//
//int f[N], a[N];
//int n;
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//
//	int len = 0;
//	for (int i = 0; i < n; i++)
//	{
//		//计算的是最长长度是多少
//		int l = 0, r = len;//f中的是长度为len时的最长的长度
//		while (l < r)
//		{
//			int mid = l + r + 1>> 1;
//			if (f[mid] >= a[i])//要找的是大于
//			{
//				r = mid - 1;
//			}
//			else l = mid;
//		}
//		//找到了那个点
//		len = max(len, r + 1);
//		f[r + 1] = a[i];
//	}
//	cout << len;
//	return 0;
//}
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    int t; cin >> t;
//    while (t--) {
//        string s1, s2;
//        cin >> s1 >> s2;
//        int x1 = s1[s1.size() - 1], x2 = s2[s2.size() - 1];
//        int s1s, s2s;
//        s1s = s1.size(), s2s = s2.size();
//        if (x1 == x2) {
//            if (s1s == s2s) {
//                cout << '=' << endl;
//                continue;
//            }
//            if (s1.size() > s2.size() && x1 == 'L') {
//                cout << '>' << endl;
//                continue;
//            }
//            else if(s1.size() < s2.size() && x1 == 'L')
//            {
//                cout << '<' << endl;
//                continue;
//             }
//            if (s1.size() > s2.size() && x1 == 'S') {
//                cout << '<' << endl;
//                continue;
//            }
//            else if(s1.size() < s2.size() && x1 == 'S'){
//                cout << '>' << endl;
//                continue;
//            }
//        }
//        else if (x1 > x2) { cout << '<' << endl; continue; }
//        else { cout << '>' << endl; continue; }
//    }
//return 0; 
//}

//滑雪
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int N = 310;
//
//int m[N][N];
//bool st[N][N];
//int r, c;
//int ans, tmp;
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 };
//
//
//void dfs(int x, int y)
//{
//    if (x <= c && x >= 0 && y <= r && y >= 0 && !st[x][y])
//    {
//        tmp++;
//        st[x][y] = true;
//        for (int i = 0; i <= 3; i++)
//        {
//            if (m[x + dx[i]][y + dy[i]] < m[x][y])
//            {
//                dfs(x + dx[i], y + dy[i]);
//                st[x][y] = false;
//                }
//        }
//    ans = max(ans, tmp);
//    tmp--;
//    return;
//    }
//    return;
//}
//
//
//int main()
//{
//    cin >> r >> c;
//    for (int i = 1; i <= r; i++)
//        for (int j = 1; j <= c; j++)
//            cin >> m[i][j];
//
//    for (int i = 1; i <= r; i++)
//        for (int j = 1; j <= c; j++)
//            dfs(i, j);
//
//    cout << ans;
//    return 0;
//}


//滑雪默写
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//const int N = 310;
//
//int g[N][N];
//int f[N][N];
//int r, c;
//int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
//
//int dp(int x, int y)
//{
//	int& v = f[x][y];//用v代替
//	if (v != -1) return v;
//	v = 1;
//	for (int i = 0; i <= 3; i++)
//		if(x + dx[i] >=1 && x + dx[i] <= c && y + dy[i] <= r && y + dy[i] >= 1 && g[x][y] < g[x + dx[i]][y + dy[i]])
//			v = max(v, dp(x + dx[i], y + dy[i]) + 1);
//	return v;
//}
//
//int main()
//{
//	cin >> r >> c;
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			cin >> g[i][j];
//
//	memset(f, -1, sizeof f);
//
//	int ans = 0;
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			ans = max(ans, dp(i, j));
//
//	cout << ans;
//
//	return 0;
//}


//最短Hamilton路径
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20, M = 1 << N;
//
//int n;
//int w[N][N];
//int f[M][N];//这里的f的第一个数表示 - 目前使用了点, i看做是个二进制数, 每一位代表一个点, 第2个数表示, 
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> w[i][j];//读入所有的数据
//
//    memset(f, 0x3f, sizeof f);//因为要求的是, 说走路程的最小值, 所以要用min, 所以所以全部初始化成大值
//    f[1][0] = 0;//?
//
//    for (int i = 0; i < 1 << n; i++)//遍历f[M][N]
//        for (int j = 0; j < n; j++)
//            if (i >> j & 1)//看一下第j位有没有数, 如果是1代表有数,进入判断, 如果是0就是没数, 不进入判断, 下一位数
//                //找到一个j, 然后再找一个k, 然后全部算一遍从k到j
//                for (int k = 0; k < n; k++)//从0 - n
//                    if (i >> k & 1)
//                        f[i][j] = min(f[i][j], f[i - (1 << j)][k] + w[k][j]);//  i - ( 1 << j ) //(用所有除去j的点, 然后在k的点, 再走向j), 和(原本走过j, 在j的距离取最小值)
//                                                                             //这就是k的用处
//
//    cout << f[(1 << n) - 1][n - 1];
//
//    return 0;
//}

//没有上司的舞会
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 6010;
//
//int n;
//int h[N], e[N], ne[N], idx;//邻接表来存数
//int happy[N];//每个人的开心指数
//int f[N][2];//状态数组, 第二个下标是0代表不包含这个i点的最大开心指数,第二个下标是1表示包含这个i点的最大开心指数 
//bool has_fa[N];//这个点是否 "有"父节点 , 也就是是否有上司
//
//void add(int a, int b)
//{
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//void dfs(int u)
//{
//    f[u][1] = happy[u];//如果第二个下标是1, 那么这个人的开心值肯定在这里面, 所以先加入这个点的开心值
//
//    for (int i = h[u]; ~i; i = ne[i])//遍历这个节点的所有子节点
//    {
//        int j = e[i];
//        dfs(j);
//
//        f[u][1] += f[j][0];//如果有u的话, 那么加上的就是没有j的开心值的总和
//        f[u][0] += max(f[j][0], f[j][1]);//如果没有u的话就是加上, 有j或者没有j的其中一个最大值, 因为有j和没有j不一定哪一个的结果是最大的
//    }
//}
//
//int main()
//{
//    scanf("%d", &n);//n个人
//
//    for (int i = 1; i <= n; i++) scanf("%d", &happy[i]);
//
//    memset(h, -1, sizeof h);//表头初始化成-1
//    for (int i = 0; i < n - 1; i++)
//    {
//        int a, b;//b是a的上司
//        scanf("%d%d", &a, &b);//存入的是b指向a
//        add(b, a);//b指向a
//        has_fa[a] = true;//标记a是有上司的
//    }
//
//    int root = 1;//从1开始, 找到一个没有父节点的点, 也就是最大的boss
//    while (has_fa[root]) root++;
//
//    dfs(root);//计算这个boss的底下能找到的最大值
//
//    printf("%d\n", max(f[root][0], f[root][1]));//打印的是有这个boss 或者是 没有这个boss 其中的最大值
//
//    return 0;
//}

//默写
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 6010;
//
//int f[N][2];
//int happy[N];
//int e[N], ne[N], h[N], idx;//邻接表
////记录是否有父节点的数组
//bool has_fa[N];
//
//void add(int a, int b)
//{
//	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
//}
//
//void dfs(int u)
//{
//	f[u][1] += happy[u];
//	
//	for (int i = h[u]; i != -1; i = ne[i])//遍历所有的子节点
//	{
//		int j = e[i];
//		dfs(j);//找到一个子节点. 就直接递归
//		//最后计算f
//		f[u][1] += f[j][0];
//		f[u][0] += max(f[j][1], f[j][0]);
//	}
//}
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) cin >> happy[i];
//
//	memset(h, -1, sizeof h);
//
//	for (int i = 1; i <= n - 1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		//b指向a
//		add(b,a);//从上指向下
//		has_fa[a] = true;
//	}
//
//	int root = 1;
//	while (has_fa[root]) root++;
//
//	dfs(root);
//
//	cout << max(f[root][1], f[root][0]);
//
//	return 0;
//}

//蒙德里安的梦想
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 12, M = 1 << N;
//
//int n, m;
//long long f[N][M];//从i-1列伸展过来的行数, 行数用m的二进制的1的位置表示, 所以本代码中使用了很多的位运算, 也就是状态压缩的道理
//bool st[M];//需要预处理的代码, 记录了所有j的情况是否合法
//
//int main()
//{
//    while (cin >> n >> m, n || m)//接收一个行和宽
//    {
//        for (int i = 0; i < 1 << n; i++)//首先是预处理st数组
//        {
//            int cnt = 0;
//            st[i] = true;//先假设是真
//            for (int j = 0; j < n; j++)//循环每一个位置
//                if (i >> j & 1)//如果这个位置是1
//                {
//                    if (cnt & 1/*判断奇数的神奇方法*/) st[i] = false;//如果这个1之前有奇数个0, 那就标记为不合法
//                    cnt = 0;//一串0结束了, 下一串0的个数从0开始.
//                }
//                else cnt++;//最后如果没有出现1, 需要直接判断这个位置是0, 那么就记录一个0
//            if (cnt & 1) st[i] = false;//最后如果是奇数,也标记成不合法
//        }//预处理完成
//
//        memset(f, 0, sizeof f);//全部设置成0
//        f[0][0] = 1;//这种情况只有1中, 所以是1????
//        for (int i = 1; i <= m; i++)//遍历每一列
//            
//            for (int j = 0; j < 1 << n; j++)//j和k是一样的模式循环, 遍历所有的可能性两列的可能性 
//                for (int k = 0; k < 1 << n; k++)
//            
//                    if ((j & k) == 0 && st[j | k])//也就是说,j & k没有重叠的地方, 如果至少有重叠的地方就会出现一个1, 就不可能是0. 并且 j | k 就是所有j和k有1的地方加起来 , 如果这样剩下的缝隙(也就是0)是合法的(也就是都是偶数个0), 那么是合法的(有点小废话但是好理解)
//                        f[i][j] += f[i - 1][k];//k是 i-1 行的二进制状态, j是第 i 行的二进制状态, 可以加起来, 因为这个k和这个j是合法的
//
//        cout << f[m][0] << endl;//前m都是摆好了, 且第m行没有突出来的数的种类数, 也就是最后要求的状态
//    }
//    return 0;
//}

//1、题目等价于按照列来横着放置小方块。（其他人写的行放置小方块）
//2、f(i, j) :摆放第i列，i - 1列伸出来横着的方格状态为j的方案数，j为一个二进制数，范围是0～行数位数的二进制范围；"f[i][j]表示已经摆完前i行，从第i-1列伸出来的方块的状态是j的方案数"
//3、i - 1列转移到i列满足：(j & k) == 0, 其中k是i - 1列的状态；
//4、同时每个有效的状态满足：j | k 不存在连续奇数个零，即每个格子只能用纵向的格子来填；

//默写
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//const int N = 12, M = 1 << N;
//int a, b;
//long long f[N][M];//第一个是列, 第二个是状态
//bool st[M];
//
//int main()
//{
//	while (cin >> a >> b, a || b)
//	{
//		memset(st, 1, sizeof st);
//		//预处理st数组
//		for (int i = 0; i < (1 << a); i++)
//		{
//			int cnt = 0;
//			//st[i] = true;//必须这种方式, 直接全部设置的方式不行, 为什么呢?
//			//i是从0 然后每次 +1, 所以是所有的二进制情况都遍历到了
//			//所以答案是每一次循环都要把所有的都设置为true, 注意 : 错误于在循环外面设置了true
//
//			for (int j = 0; j < a; j++)//遍历没一个位置
//			{
//				if ((i >> j) & 1)//不是1就给cnt加1
//				{
//					if (cnt & 1) st[i] = false;
//					cnt = 0;//只要能进这个循环就直接归零
//				}
//				else  cnt++;
//			}
//			if (cnt & 1) st[i] = false;
//		}
//
//		memset(f, 0, sizeof f);
//		f[0][0] = 1;
//		for (int i = 1; i <= b; i++)
//
//			for(int j = 0; j < (1 << a);j++)
//				for (int k = 0; k < (1 << a); k++)
//
//					if ((j & k) == 0 && st[j | k])//合法的话才更新f
//						f[i][j] += f[i - 1][k];
//
//		cout << f[b][0] << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N =12, M = 1 << N;
//long long f[N][M];
//bool st[M];
//int n, m;
//
//int main()
//{
//    while(cin >> n >> m , n || m)
//    {
//        memset(st, 1, sizeof st);//二进制压缩的是行的状态
//        for(int i = 0 ; i < (1 << n); i++)//遍历每一个状态
//        {
//            int cnt = 0;
//            for(int j = 0 ; j < n ; j ++)//看每一个状态的每一位
//            {
//                if((i >> j)  & 1)
//                {
//                    if(cnt & 1) st[i] = false;
//                    cnt = 0;
//                }
//                else cnt ++ ;
//            }
//            if(cnt & 1) st[i] = false;
//        }
//        memset(f, 0, sizeof f);//第二次使用这个数组是, 也是要全是0, 否则就会重叠, 前几次的是正确的, 后面的全是错误的
//        f[0][0] = 1;
//        for(int i = 1 ; i <= m; i ++)//遍历每一列
//            for(int j = 0 ; j <( 1 << n); j++)
//                for(int k = 0 ; k < (1 << n); k++)
//                {
//                    //对比每一个前后行
//                    if(st[k | j] && (k & j) == 0)
//                        f[i][j] += f[i-1][k];
//                }
//        cout << f[m][0] << endl;
//    }
//
//    return 0;
//}//已改正

//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//const int N = 12, M = 1 << N;
//long long f[N][M];
//bool st[M];
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m, n || m)
//	{
//		memset(st, 1, sizeof st);
//		for (int i = 0; i < 1 << n; i++)
//		{
//			int cnt = 0;
//			for (int j = 0; j <= n; j++)
//			{
//				if ((i >> j) & 1)
//				{
//					if (cnt & 1) st[i] = false;
//					cnt = 0;
//				}
//				else cnt++;
//			}
//			if (cnt & 1)st[i] = false;
//		}
//			memset(f, 0, sizeof f);
//			for (int i = 1; i <= m; i++)
//				for (int j = 0; j < 1 << n; j++)
//					for (int k = 0; k < 1 << n; k++)
//						if ((j & k) == 0 && st[j | k])
//							f[i][j] += f[i - 1][k];
//
//			cout << f[m][0] << endl;
//		}
//	}
//	return 0;
//}//已改正

//最短Hamilton路径 - 旅行商问题
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20, M = 1 << N;
//
//int n;//图是一个一维的图
//int w[N][N];//读入每一个点的权重
//int f[M][N];//状态数组,M表示二进制位, 表示每个点的状态, N表示最后停在了那个点上
////分析转移的是, 从上个点到下一个点时的最小值, 用已经求好了的上一个点的最小值在加上转移到下一个点的权重w[i][j]
////上一个点的就是在二进制位上消掉这个二进制位
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> w[i][j];//读入n个距离
//
//    memset(f, 0x3f, sizeof f);//性质是最短, 所以初始化成最大
//    f[1][0] = 0;//停在第0个点上,还没开始,就是初始化成0
//
//    for (int i = 0; i < 1 << n; i++)//遍历每一种状态
//        for (int j = 0; j < n; j++)//遍历这个状态的每个点
//            if (i >> j & 1)//如果这个状态的这个点走过了的话
//                for (int k = 0; k < n; k++)//遍历这个点的上一个点
//                    if (i >> k & 1)//上一个点是合法的话, 也就是走过的话
//                        f[i][j] = min(f[i][j], f[i - (1 << j)][k] + w[k][j]);//就试着更新一下
//
//    cout << f[(1 << n) - 1][n - 1];//最后输出,最后停在n-1的点, 且所有的点都走过, 从第0个到第n-1个都是1, 也就是 (1 << n) -1
//
//    return 0;
//}
//
////默写
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//const int N = 21, M = 1 << N;
//
//int w[N][N];
//int f[M][N];
//int n;
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> w[i][j];
//
//    memset(f, 0x3f, sizeof f);
//
//    for(int i = 0 ; i < 1 << n; i ++)//遍历所有的情况
//        for(int j = 0 ; j < n ;j ++)
//            if(i >> j & 1 )
//                for(int  k= 0 ; k < n; k ++)
//                    if (i >> k & 1)
//                        f[i][j] = min(f[i][j], f[i - (1 << j)][k] + w[k][j]);
//    cout << f[1 << n - 1][n - 1] << endl; 
//    return 0;
//}
