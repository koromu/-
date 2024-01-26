#define _CRT_SECURE_NO_WARNINGS
////#include <iostream>
////#include <cstring>
////#include <algorithm>
////
////using namespace std;
////
////const int N = 10;
////int n, path[N];//path就是存入当前的元素, 因为要用来打印元素
////bool st[N]; //状态数组
////
////void dfs(int u) //第几个数字，一共几个数字
////{
////    if (u == n)//判断是否满了
////    {
////        for (int i = 0; i < n; i++) cout << path[i] << ' '; //如果满了, 就输出保存的结果
////        puts(" ");
////        return;
////    }
////
////    for (int i = 1; i <= n; i++)//因为是从最小的值开始遍历的, 所以每个位置尽量都是最小, 自然就是是字典顺序
////        if (!st[i]) //这是一个遍历, 找到一个是没有被用过的数
////        {
////            path[u] = i;//path[0] = 1, path[1] = 2, path[2] = 3. 题目描述的就是从1 - n的数字, 所以直接遍历1 - n, 而这里的i就是一个个元素
////            st[i] = true; // i被用过
////            dfs(u + 1);// 走到下一层, 从这里出来的时候, 就是从最后一层出来, 然后在出来之前, 已经打印出来了结果
////            st[i] = false;//因为要回到上一层了, 所以要变回false
////        }//如果n都被遍历完了, 说明无路可走了, 就再回溯一层
////}
////
////int main()
////{
////
////    cin >> n;
////    dfs(0);
////    return 0;
////}
//
//八 - 皇后问题

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int N = 20;
//
//int n;
//char g[N][N];
//bool col[N], dg[N * 2], udg[N * 2];//第一个是列, 第二个是一条对角线, 第三个是第二条对角线
////由此可知,下面的一个for循环是"一行一行"遍历的
//void dfs(int u)
//{
//    if (u == n)
//    {
//        for (int i = 0; i < n; i++) puts(g[i]);
//        puts("");
//        return;//老规矩, 成功到了最后一行, 就输出答案
//    }
//
//    for (int i = 0; i < n; i++)//这里的u是纵坐标, i是横坐标
//        if (!col[i] && !dg[u + i] && !udg[n - u + i])//条件是这个对角线的截距, 和反对角线的截距, 和列都是false, 也就是都没有对象, 那么就可以给这层标记, 然后进入下一层 
//        {//从这里可知, 这个对角线记录的是截距, 如果截距为true那么这个对角线就是有对象的对角线
//            g[u][i] = 'Q';
//            col[i] = dg[u + i] = udg[n - u + i] = true;//i就是行, i + u就是这一行的y轴的截距, 也就是x + y, n - u + i就是 y - x + n, 其中n就是防止变成负数的偏移量 
//            dfs(u + 1);
//            col[i] = dg[u + i] = udg[n - u + i] = false;
//            g[u][i] = '.';//这里都是老规矩
//        }
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            g[i][j] = '.';//先全部初始化为 "."
//
//    dfs(0);
//
//    return 0;
//}
//
////#include <iostream>
////#include <cstring>
////#include <algorithm>
////#include <queue>//宽度优先搜索用的是队列
////
////using namespace std;
////
////typedef pair<int, int> PII;
////
////const int N = 110;
////
////int n, m;
////int g[N][N], d[N][N];//d是记录到原点的步数
////
////int bfs()
////{
////    queue<PII> q;//队列里面存的是坐标
////
////    memset(d, -1, sizeof d);//先把所有的到原点的位置全部初始化为-1
////    d[0][0] = 0;//显而易见第一个位置的距离是0
////    q.push({ 0, 0 });//
////
////    int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };//这个是四个方向的坐标
////
////    while (q.size())//当q的大小不为0
////    {
////        auto t = q.front();//得到q的头
////        q.pop();//弹出队头
////
////        for (int i = 0; i < 4; i++)
////        {//遍历四个方向
////            int x = t.first + dx[i], y = t.second + dy[i];
////
////            if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)//如果有一个方向满足 : 在边界内, 没有走过距离是-1, 而且途中不是墙, 因为只有第一次走过的点才是最短路
////            {
////                d[x][y] = d[t.first][t.second] + 1;//t是上一步的坐标, x是下一步的坐标, 并计算下一步距离原点的距离, 实际上就是在上一步的d数组中的数据 + 1
////                q.push({ x, y });//插入到队尾, 但是每次取出的是队头, 拿队头出来算一遍, 然后再插入能走的点位
////            }
////        }
////    }
////
////    return d[n - 1][m - 1];//返回终点到原点的距离
////}
////
////int main()
////{
////    cin >> n >> m;
////    for (int i = 0; i < n; i++)
////        for (int j = 0; j < m; j++)
////            cin >> g[i][j];//在g中存图
////
////    cout << bfs() << endl;
////
////    return 0;
////}
//
////图的层次
////#include <iostream>
////#include <algorithm>
////#include <cstring>
////
////using namespace std;
////
////const int N = 100010;
////int h[N], e[N], ne[N], idx;
////int q[N], d[N];
////int n, m;
////
////void add(int a, int b)
////{
////	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
////}
////
////int bfs()
////{
////	int tt = -1, hh = 0;
////	memset(d, -1, sizeof d);
////	d[1] = 0;
////	q[++tt] = 1;//从尾巴插进去
////	while (hh <= tt)
////	{
////		//头小于尾, 不为空
////		int t = q[hh++];//取出头元素
////		for (int i = h[t]; i != -1; i = ne[i])
////		{
////			//取出所有元素
////			int j = e[i];
////			if (d[j] == -1)
////			{
////				q[++tt] = j;
////				d[j] = d[t]+1;//特别注意
////			}
////		}
////	}
////	return d[n];
////}
////
////int main()
////{
////	cin >> n >> m;
////	memset(h, -1, sizeof h);
////	for (int i = 0; i < m; i++)
////	{
////		int a, b;
////		cin >> a >> b;
////		add(a, b);
////	}
////
////	cout << bfs();
////
////
////	return 0;
////}
//
//////树的重心
////#include <iostream>
////#include <cstring>
////
////using namespace std;
////
////const int N = 100010;
////
////int h[2 * N], e[N], ne[N], idx;//因为会存N条双向边, 所以用个数组存, 每个元素都是一个链表
////int n;
////bool st[N];//记录这个节点是不是已经走过了
////
////void add(int a, int b) {
////	e[idx] = b;
////	ne[idx] = h[a];
////	h[a] = idx++;
////}
////
////int dfs(int u)
////{
////	st[u] = true;
////	//遍历所有的节点
////	for(int i = h[u]; i != -1; i = ne[])
////
////}
////
////
////int main()
////{
////	cin >> n;
////	memset(h, -1, sizeof(h));
////	for (int i = 0; i < n - 1; i++)//n个节点有n-1条无向边
////	{
////		int a, b;
////		cin >> a >> b;
////		add(a, b); add(b, a);//存入两条边
////	}
////
////	dfs(1);//因为是图, 所以随便以那个为根节点都可以遍历;
////	return 0;
////}
//
//
////拓扑结构
////#include <iostream>
////#include <cstring>
////#include <algorithm>
////
////using namespace std;
////
////const int N = 100010;
////
////int h[N], e[N], ne[N], idx;
////int n, m;
////int d[N], q[N];//记录入度的数量, 和队列的数组
////
////void add(int a, int b)
////{
////    e[idx] = b; ne[idx] = h[a]; h[a] = idx++;//这个增加是在h数组的基础上建立的, 通过h[a]还可以存到这个数组的链子上
////}
////
////bool topsort()
////{
////    int tt = -1, hh = 0;
////
////    //把所有入度为0 的点存入数组
////    for (int i = 1; i <= n; i++)//总共是n个点, 注意插入的时候, 点的编号是从1 到 n的
////    {
////        if (d[i] == 0)
////            q[++hh] = i;//存入下标在q中
////    }
////    //一个循环直到把所有队列中的元素处理掉, 最后再队列里面的就是拓扑序, 在队列外面进不去的就是环
////    while (tt >= hh)
////    {
////        int t = q[tt++];
////        for (int i = h[t]; i != -1; i = ne[i])//遍历这条链上的点
////        {
////            int j = e[i];//取到i指向的点
////            if (--d[j] == 0)//删掉j这个点, 如果j指向的点的入度为0的话, 就可以存到里面去了
////                q[++tt] = j;//j是一个一个链表的头, 把这个头存进q中, 然后下次将要再遍历从这个j开始得链表
////        }
////    }
////    //再判断有没有入度为0的点, 有就放进去
////    return tt == n - 1;//最后得到的tt如果是n-1, 也就是说q数组的下标存入了所有的分支, 那么这个图是无环的拓扑结构
////}
////
////
////int main()
////{
////    cin >> n >> m;
////    memset(h, -1, sizeof h);
////    for (int i = 0; i < m; i++)
////    {
////        int a, b;
////        cin >> a >> b;
////        add(a, b);
////        d[b]++;
////    }
////    if (topsort())
////    {
////        for (int i = 0; i < n; i++) printf("%d ", q[i]);
////        puts("");
////    }
////    else
////        puts("-1");
////
////
////    return 0;
////}
//
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//int h[N], e[N], ne[N], idx;
//int n, m;
//int q[N], d[N];//记录入度
////d里面放的是b
////q里面放的也是b
//void add(int a, int b)
//{
//	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
//}
//
//bool topsort()
//{
//	//入度为0的进入队列中
//	int tt = -1, hh = 0;
//	d[1] = 0;//注意这个d不需要初始化成-1, 虽然不知道为什么会影响
//	for (int i = 1; i <= n; i++)
//	{
//		if (d[i] == 0)
//			q[++tt] = i;
//	}
//	while (tt >= hh)
//	{
//		int t = q[hh++];//得到一个点的编号
//		for (int i = h[t]; i != -1; i = ne[i])//得到一个点的编号在这个链表里的idx
//		{//得到这个idx对应的b
//			int j = e[i];//e[i]存的是一个b, 是a指向的点, h[t]存入的是idx
//			//--d[j];// t是入度为0的点
//			if (--d[j] == 0)
//				q[++tt] = j;//存入b
//		}
//	}//所以q, d, h这两个数组都是放的b, 只有e和ne有关的组成链表的东西索引用的idx, 其中e放b, ne放idx
//	return tt == n - 1;
//}
//
//int main()
//{
//	cin >> n >> m;
//	memset(h, -1, sizeof h);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		add(a, b);
//		d[b] ++;
//	}
//
//if(topsort())
//	for (int i = 0; i < n; i++) printf("%d ", q[i]);
//else
//	puts("-1");
//return 0;
//}

//dijkstar

//#include <iostream>
//#include <cstring>
//
//using namespace std;
////有500个点, 100000条边, 所以是稠密图
////使用邻接矩阵
//const int N = 510;
//int n, m;
//int g[N][N];//邻接矩阵
//int dist[N];
//int st[N];
//
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	for (int i = 1; i <= n; i++)//循环次数?
//	{
//		int t = -1;//用来记录一个在所有没有确定的点中最小的点
//		for (int j = 1; j <= n; j++)
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;//其中j这个点满足 dist[j]小于所有的点
//
//		for (int j = 1; j <= n; j++)
//			dist[j] = min(dist[j], dist[t] + g[t][j]);//用 (1 - t的距离) 加上 (t - j的距离) 更新 (1 - j的距离)
//
//		st[t] = true;//t点标记为已经是最短的了
//	}
//	if (dist[n] == 0x3f3f3f3f) return -1;
//	return dist[n];
//}
//
//int main()
//{
//	cin >> n >> m;
//	memset(g, 0x3f, sizeof g);
//
//	while (m--)
//	{
//		int a, b, c;
//		//m条边
//		scanf("%d%d%d", &a, &b, &c);
//		g[a][b] = min(g[a][b], c);//g用来存储(a, b)点的边长
//		//因为可能有重边, 所以要min一下
//	}
//
//	printf("%d", dijkstra());
//
//	return 0;
//}
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int N = 510;
//int g[N][N];
//int dist[N];//记录每个距离1点的距离
//int st[N];
//int n, m;
//
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	//初始化第1个点的距离是0
//	dist[1] = 0;//注意
//	for (int i = 1; i <= n; i++)// 1 - n  注意
//	{
//		int t = -1;
//		for (int j = 1; j <= n; j++)// 1 - n  注意
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;//把t变成最小的!st[j](未弄过的元素)
//
//		if (t == n)
//			break;//说明找到了最短路径
//		for (int j = 1; j <= n; j++)
//		{//更新所有的点
//			dist[j] = min(dist[j], g[t][j] + dist[t]);//更新所有点的距离, 可能有些点是没有用的, 但是到最后总是最短的
//		}
//		st[t] = true;
//	}
//
//	if (dist[n] == 0x3f3f3f3f) return -1;
//	return dist[n];
//}
//
//int main()
//{
//	cin >> n >> m;
//	memset(g, 0x3f, sizeof g);
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		g[a][b] = min(g[a][b], c);
//	}
//
//	printf("%d", dijkstra());
//
//return 0;
//}

////堆优化版, 使用的是优先队列, 存入的单元是边的权重和边的编号
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//const int N = 1000010;
//typedef pair<int, int > pii;
//
////因为是稀疏图所以使用 => 邻接表
//int h[N], e[N], ne[N], idx;
//int w[N];//存入权重
//int dist[N];
//bool st[N];
//
//void add(int a, int b, int c)
//{
//	e[idx] = b; ne[idx] = h[a]; w[idx] = c; h[a] = idx++;
//}
//
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;//初始化操作
//	priority_queue<pii, vector<pii>, greater<pii>> heap;
//	heap.push({ 0,1 });//
//	while (heap.size())
//	{
//		auto t = heap.top();
//		heap.pop();
//
//		int ver = t.second, distence = t.first;//ver是编号
//		if (st[ver])continue;
//
//		for (int i = h[ver]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j] > distence + w[i])//大于从t过来的距离的话就更新
//			{
//				dist[j] = distence + w[i];
//				heap.push({ dist[j], j });//距离放在前面
//			}
//		st[ver] = true;
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f)return -1;
//	return dist[n];
//}
//
//int n, m;
//int main()
//{
//	cin >> n >> m;
//	
//	memset(h, -1, sizeof h);
//
//	while (m--)
//	{
//		int a, b, c; 
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	cout << dijkstra();
//	return 0;
//}//总结: Dijkstra堆优化就是使用 优先队列 和 手写队列(/队列) 对稀疏图 再使用邻接矩阵的一个求正权最短路的算法

//存在负权使用bellman_ford 或者spfa
//bellman_ford, 这是个需要备份的算法, 避免串联
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 510, M = 100010;
//
//struct edge
//{
//	int a, b, w;
//}edges[M];
//
//int n, m, k;
//int dist[N], backup[N];
//
//void bellman_ford()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//
//	for (int i = 0; i < k; i++)
//	{
//		memcpy(backup, dist, sizeof dist);
//		for (int j = 0; j < m; j++)
//		{
//			edge e = edges[j];
//			int a = e.a, b = e.b, w = e.w;//点a, 点b, ab这条边的权重w
//
//			dist[b] = min(dist[b], backup[a] + w);//相当于规定一次只更新相连的边, 不会因为一条边小, 而一直更新后面的边
//		}
//	}
//}
////if (dist[b] > backup[a] + w);
////{
////	dist[b] = backup[a] + w;
////}
//int main()
//{
//	cin >> n >> m >> k;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		edges[i] = { a,b,c };
//	}
//
//	bellman_ford();//处理函数
//
//	if (dist[n] > 0x3f3f3f3f / 2) printf("impossible");
//	else printf("%d", dist[n]);
//	return 0;
//}
////默写
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int M = 100010, N = 510;
////备份数组
//int dist[N], backup[N];
//int n, m, k;
//
//struct edge {
//	int a, b, w;
//} edges[M];
//
//void bellmen_ford()
//{
//	dist[1] = 0;
//	for (int i = 0; i < k; i++)//在限制的步数内
//	{
//		memcpy(backup, dist, sizeof dist);
//		for (int j = 0; j < m; j++)//更新每一条邻边
//		{
//			auto t = edges[j];
//			int a = t.a, b = t.b, w = t.w;
//			if (dist[b] > backup[a] + w);
//			dist[b] = backup[a] + w;
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m >> k;
//	memset(dist, 0x3f, sizeof dist);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, w;
//		cin >> a >> b >> w;
//		edges[i] = { a,b,w };
//	}
//	bellmen_ford();
//
//	if (dist[n] > 0x3f3f3f3f / 2) puts("impossible");
//	else cout << dist[n];
//}


//spfa
//使用了队列,邻接表, 很像Dijkstra
//#include <iostream>
//#include <cstring>
//#include <queue>
//
//using namespace std;
//const int N = 100010;
//int n, m;
//int h[N], e[N], ne[N], idx, w[N];//有a -> b 有权重w啦 
//
//int dist[N];
//bool st[N];
//void add(int a, int b, int c)
//{
//	e[idx] = b; ne[idx] = h[a]; w[idx] = c; h[a] = idx++;
//}
//
//void spfa()
//{
//	memset(dist, 0x3f, sizeof dist);
//	queue<int> q;
//	dist[1] = 0;
//	q.push(1);
//	st[1] = true;
//	while (q.size())
//	{
//		int t = q.front();
//		q.pop();
//		st[t] = false;
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j] > dist[t] + w[j])
//			{
//				dist[j] = dist[t] + w[j];
//				//注意有一个判断如果一个数没有在队列中过, 那么就插入
//				if (!st[j])
//				{
//					q.push(j);
//					st[j] = true;
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	memset(h, -1, sizeof h);
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	spfa();
//	if (dist[n] == 0x3f3f3f3f) printf("impossible\n");
//	else printf("%d", dist[n]);
//
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//typedef pair<int,int > pii;
//const int N = 150010;
//int h[N], e[N], ne[N], w[N], idx;
//int dist[N];
//bool st[N];
//int n, m;
//
//void add(int a, int b, int c)
//{
//	e[idx] = b; ne[idx] = h[a]; w[idx] = c; h[a] = idx++;
//}
//
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;//两步初始化操作
//	priority_queue<pii,vector<pii>,greater<pii>> heap;//要存入的是到原点的距离, 和这个点的编号既看到这个pair就知道, 某点到起点的距离
//	heap.push({ 0,1 });
//
//	while (heap.size())
//	{
//		auto t = heap.top();
//		heap.pop();
//
//		int ver = t.second, dis = t.first;//取出来更好理解
//
//		//判断取出来的数是否使用过
//		if (st[ver]) continue;
//		st[ver] = true;
//		for (int i = h[ver]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j] > dist[ver] + dis)
//			{
//				dist[j] = dist[ver] + dis;
//				heap.push({ dist[j],j });
//			}
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f) return -1;
//	return dist[n];
//}
//
//int main()
//{
//	cin >> n >> m;
//	memset(h, -1, sizeof h);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		add(a, b, c);
//	}
//	printf("%d", dijkstra());
//
//	return 0;
//}
//prim求最小生成树
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 510, INF = 0x3f3f3f3f;
//
//int n, m;
//int g[N][N];//记录两点的距离
//int dist[N];//这是个啥?
//bool st[N];
//
//
//int prim()
//{
//    memset(dist, 0x3f, sizeof dist);//初始化
//
//    int res = 0;
//    for (int i = 0; i < n; i++)//n个点
//    {
//        int t = -1;
//        for (int j = 1; j <= n; j++)//所有点中, 找到dist最小的
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))//没有处理过, 并且 是第一个点或者现在的点是大的点  (第一次进来的话, t = 1, 然后退出来了)
//                t = j;//找到的是没有处理过的点中到集合上一个点距离最小的点
//
//        if (i && dist[t] == INF) return INF;//如果i不是第一遍, 且到t是无穷大, 所以所有点中最小的是无穷大, 说明已经断了, 不是连通的了 !!!!!!!!!!!!!注意
//
//        if (i) res += dist[t];//如果不是第一遍, 就加上这个最小边                                                              !!!!!!!!!!!!! 注意
//        st[t] = true;//标记为真, 进入到集合中了
//
//        for (int j = 1; j <= n; j++) dist[j] = min(dist[j], g[t][j]);//(第一遍的话,更新所有点到集合的距离), 随后dist表示的是所有点到集合上一个点的距离
//        //这个循环是让这个距离全部变成最小
//    }
//
//    return res;
//}
//
//
//int main()
//{
//    scanf("%d%d", &n, &m);
//
//    memset(g, 0x3f, sizeof g);
//
//    while (m--)
//    {
//        int a, b, c;
//        scanf("%d%d%d", &a, &b, &c);
//        g[a][b] = g[b][a] = min(g[a][b], c);//初始化g数组, 无向图, 且注意重边
//    }
//
//    int t = prim();
//
//    if (t == INF) puts("impossible");
//    else printf("%d\n", t);
//
//    return 0;
//}

//#include<iostream>
//#include <cstring>
//
//using namespace std;
//const int N = 510;
//int n, m;
//int g[N][N];
//int dist[N];
//bool st[N];
//
//int prim()
//{
//	int res = 0;
//	memset(dist, 0x3f, sizeof dist);
//	memset(g, 0x3f, sizeof g);
//	for (int i = 0; i < n; i++)
//	{
//		
//		int t = -1;
//		for (int j = 1; j <= n; j++)
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//		st[t] = true;
//		if (i && dist[t] == 0x3f3f3f3f) return 0x3f3f3f3f;
//		//然后更新
//		res += dist[t];
//
//		for (int j = 1; j <= n; j++)
//			dist[j] = min(dist[j], g[t][j]);
//	}
//	return res;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	while (m--)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		g[a][b] = g[b][a] = min(g[a][b], c);
//	}
//	int t = prim();
//
//	if (t == 0x3f3f3f3f) puts("impossible");
//	else printf("%d", t);
//
//	return 0;
//}
//把边按权重排序
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int  N = 100010, M = 200010;
//
//struct edge {
//    int a, b, w;
//}edges[M];
//
//int n, m;
//int p[N];//并查集
//bool cmp(edge a, edge b)
//{
//    return a.w < b.w;
//}
//
//int find(int x)
//{
//    if (p[x] != x) p[x] = find(p[x]);
//    return p[x];
//}
//
//int main()
//{
//    int cou = 0, res = 0;
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < m; i++)
//    {
//        int a, b, w;
//        scanf("%d%d%d", &a, &b, &w);
//        edges[i] = { a,b,w };
//    }
//
//    for (int i = 1; i <= n; i++)
//        p[i] = i;
//    sort(edges, edges + m, cmp);
//
//    // for(auto it : edges)
//    // {
//    //     cout <<it.w;
//    // }
//    for (int i = 0; i < m; i++)
//    {
//        auto t = edges[i];
//        int a = t.a, b = t.b, w = t.w;
//        if (find(a) != find(b))
//        {
//            p[a] = b;
//            res += w;
//            cou++;
//        }
//    }
//
//    if (cou < n - 1) puts("impossible");//?
//    else printf("%d", res);
//
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 100010, M = 200010;
//struct edge {
//    int a, b, w;
//}edges[M];
//int n, m;
//int p[N];
//
//bool cmp(edge a, edge b)
//{
//    return a.w < b.w;
//}
//
//int fin(int x)
//{
//    if (p[x] != x) p[x] = fin(p[x]);//如果不是祖宗节点, 就继续找上一个节点, 如果找到了, 就让所有的子节点都指向它的祖宗节点
//    return p[x];
//}
//
//int kruskal()
//{
//    int res = 0, cou = 0;
//    for (int i = 1; i <= n; i++) p[i] = i;//初始化应该下标对应数字
//
//    for (int i = 0; i < m; i++)//
//    {
//        //遍历每一个边, 正因如此, 这里面使用的是edges集合
//        auto t = edges[i];
//        int a = t.a, b = t.b, c = t.w;
//        if (fin(a) != fin(b))
//        {
//            p[fin(a)] = fin(b);//让一个祖宗节点指向另一个祖宗节点 !!!!!!!!!!!!!!!!!!!!!
//            res += c;
//            cou++;
//        }
//    }
//
//    if (cou < n - 1) return 0x3f3f3f3f;
//    return res;
//}
//
//int main()
//{
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < m; i++)
//    {
//        int a, b, c;
//        scanf("%d%d%d", &a, &b, &c);
//        edges[i] = { a,b,c };
//    }
//    sort(edges, edges + m, cmp);
//    int t = kruskal();
//    if (t == 0x3f3f3f3f) puts("impossible");
//    else printf("%d", t);
//    return 0;
//}
//prim
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int N = 510, INF = 0x3f3f3f3f;
//
//int g[N][N];
//int dist[N];
//int n, m;
//bool st[N];
//int res, cou;
//
//int prim()
//{
//	memset(dist, 0x3f, sizeof dist);
//	for (int i = 0; i < n; i++)//遍历每个点
//	{
//		int t = -1;
//		for (int j = 1; j <= n; j++)
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//		
//		if (dist[t] == INF) return INF;//防止加INF
//
//		if (i) res += dist[t];//防止加INF
//		st[t] = true;
//		for (int j = 1; j <= n; j++)
//			dist[j] = min(dist[j], g[t][j]);//使用g数组的时候呢, 就要考虑g的范围是从1 - n
//	}
//	return res;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	memset(g, 0x3f, sizeof g);
//	while (m--)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		g[a][b] = g[b][a] = min(g[a][b], c);
//	}
//
//	int t = prim();
//
//	if(t == INF)
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010 * 2;
//int e[N], ne[N], idx;//邻接表存储图
//int h[N];
//int color[N];//保存各个点的颜色，0 未染色，1 是红色，2 是黑色
//int n, m;//点和边
//
//void add(int a, int b)//邻接表插入点和边
//{
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//bool dfs(int u, int c)//深度优先遍历
//{
//    color[u] = c;//u的点成 c 染色
//
//    //遍历和 u 相邻的点
//    for (int i = h[u]; i != -1; i = ne[i])
//    {
//        int b = e[i];
//        if (!color[b])//相邻的点没有颜色,则递归处理这个相邻点
//        {
//            if (!dfs(b, 3 - c)) return false;//（3 - 1 = 2， 如果 u 的颜色是2，则和 u 相邻的染成 1）
//            //（3 - 2 = 1， 如果 u 的颜色是1，则和 u 相邻的染成 2）
//        }
//        else if (color[b] && color[b] != 3 - c)//如果已经染色，判断颜色是否为 3 - c
//        {
//            return false;//如果不是，说明冲突，返回                   
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    memset(h, -1, sizeof h);//初始化邻接表
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++)//读入边
//    {
//        int a, b;
//        cin >> a >> b;
//        add(a, b), add(b, a);
//    }
//    for (int i = 1; i <= n; i++)//遍历点
//    {
//        if (!color[i])//如果没染色
//        {
//            if (!dfs(i, 1))//染色该点，并递归处理和它相邻的点
//            {
//                cout << "No" << endl;//出现矛盾，输出NO 
//                return 0;
//            }
//
//        }
//    }
//    cout << "Yes" << endl;//全部染色完成，没有矛盾，输出YES
//    return 0;
//}
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 510, M = 100010;
//
//int n1, n2, m;//记录两个点集合的个数
//int h[N], e[M], ne[M], idx;
//int match[N];
//bool st[N];
//
//void add(int a, int b)
//{
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//bool find(int x)
//{
//    for (int i = h[x]; i != -1; i = ne[i])
//    {
//        int j = e[i];
//        if (!st[j])
//        {
//            st[j] = true;
//            if (match[j] == 0 || find(match[j]))
//            {
//                match[j] = x;
//                return true;
//            }
//        }
//    }
//
//    return false;
//}
//
//int main()
//{
//    scanf("%d%d%d", &n1, &n2, &m);
//
//    memset(h, -1, sizeof h);
//
//    while (m--)
//    {
//        int a, b;
//        scanf("%d%d", &a, &b);
//        add(a, b);
//    }
//
//    int res = 0;
//    for (int i = 1; i <= n1; i++)
//    {
//        memset(st, false, sizeof st);
//        if (find(i)) res++;
//    }
//
//    printf("%d\n", res);
//
//    return 0;
//}