//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 200010, M = 2 * N;
//
//int h[N] = { -1 }, e[M] = { 0 }, ne[M] = { 0 }, idx = { 0 };
//int p1 = 0, p2 = 0;///记录两个端点
//int d1[N] = { 0 }, d2[N] = { 0 }, up[N] = { 0 }, dist[N] = { 0 };
//int s1[N] = { 0 };
//
//void add(int a, int b)  // 添加一条边a->b，边权为c
//{
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//void dfs_d(int u, int fa)
//{
//    for (int i = h[u]; ~i; i = ne[i])
//    {
//        int j = e[i];
//        if (j == fa) continue;
//        dist[u] = dist[j] + 1;
//        dfs_d(j, u);//继续遍历这个节点
//
//        if (d1[j] + 1 >= d1[u])
//        {
//            d2[u] = d1[u], d1[u] = d1[j] + 1;
//            s1[u] = j;
//        }
//        else if (d1[j] + 1 > d2[u])
//            d2[u] = d1[j] + 1;//处理好了点的来由, 和点的长度更新
//    }
//}
//
//void dfs_u(int u, int fa)
//{
//    for (int i = h[u]; ~i; i = ne[i])
//    {
//        int j = e[i];
//        if (j == fa) continue;
//        //先处理好上面的节点, 再处理下面的节点
//        if (s1[u] == j) //如果这个节点的子节点的最长边是从现在这个子节点过来的, 那么就用次长边更新
//            up[j] = max(d2[u], up[u]) + 1;//这个子节点的最长边是父节点u的向下的最长边, 和父节点u向上的最长边中的最大值
//        else
//            up[j] = max(up[u], d1[u]) + 1;
//        dfs_u(j, u);//从上往下处理
//    }
//}
//
//void solve()
//{
//    int n, k, c;
//    cin >> n >> k >> c;//顶点的个数, 每条边的长度和成本
//    if (n == 3) {
//        cout << 2 << endl;
//        return;
//    }
//    memset(h, -1, sizeof h);
//    memset(d1, 0, sizeof d1);
//    memset(d2, 0, sizeof d2);
//    memset(up, 0, sizeof up);
//    memset(dist, 0, sizeof dist);
//    memset(s1, 0, sizeof s1);
//    memset(e, 0, sizeof s1);
//    memset(ne, 0, sizeof s1);
//    idx = p1 = p2 = 0;
//    for (int i = 0; i < n - 1; i++)
//    {
//        int a, b;
//        cin >> a >> b;
//        add(a, b), add(b, a);
//    }
//    //最初顶点1是根, 每次只能移动道邻居上, 每次花费c元, 先找到树的直径, 然后计算1号点到中心最短的一条边
//
//    dfs_d(1, -1);
//    dfs_u(1, -1);//找到两端点
//
//    int ans = 0;
//    int tmp1 = 0, tmp2 = 0;
//    for (int i = 0; i <= n; i++)
//    {
//        tmp1 = max(d1[i], up[i]);
//        ans = max(ans, tmp1);//答案就是设某个节点时的最长边
//        if (ans == tmp1) p1 = i;
//
//        tmp1 = tmp2;
//        tmp2 = max(d2[i], tmp2);
//
//        if (tmp1 != tmp2)//说明没有更新
//            p2 = i;
//    }//得到了两个端点的序号
//    ans *= k;
//    int loss = d2[1] * c;
//    cout << (d1[1] + d2[1]) * k - loss << endl;
//}
//
//int main()
//{
//
//    int T;;
//    cin >> T;
//    while (T--)
//    {
//        solve();
//    }
//    return 0;
//}