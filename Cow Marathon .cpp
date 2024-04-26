//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 200010, M = N << 1;
//
//int n, k, c;
//int h[N], e[M], w[M], ne[M], idx;
//int d1[N], d2[N], up[N];
//int s1[N], s2[N];
//int cost[N];
//int p1, p2;
//
////int depth[N], fa[N][16];
////int q[N];
//
//void add(int a, int b, int c)
//{
//    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
//}
//void dfs1(int u, int father)
//{
//    // d1[u] = d2[u] = -INF;  //这题所有边权都是正的，可以不用初始化为负无穷
//    for (int i = h[u]; ~i; i = ne[i])
//    {
//        int j = e[i];
//        if (j == father) continue;
//        dfs1(j, u);
//        if (d1[j] + w[i] >= d1[u])
//        {
//            d2[u] = d1[u], s2[u] = s1[u];
//            d1[u] = d1[j] + w[i], s1[u] = j;
//        }
//        else if (d1[j] + w[i] > d2[u])
//        {
//            d2[u] = d1[j] + w[i], s2[u] = j;
//        }
//    }
//    // if (d1[u] == -INF) d1[u] = d2[u] = 0; //特判叶子结点
//}
//void dfs2(int u, int father)
//{
//    for (int i = h[u]; ~i; i = ne[i])
//    {
//        int j = e[i];
//        if (j == father) continue;
//        if (s1[u] == j) up[j] = w[i] + max(up[u], d2[u]);   //son_u  = j，则用次大更新
//        else up[j] = w[i] + max(up[u], d1[u]);              //son_u != j，则用最大更新
//        dfs2(j, u);
//    }
//}
//
//void dfs(int u, int fa)
//{
//    for (int i = h[u]; ~i; i = ne[i])
//    {
//        int j = e[i];
//        if (j == fa)
//            continue;
//        cost[j] = cost[u] + 1;
//        dfs(j, u);
//    }
//}
//
//
////void bfs(int root)
////{
////    memset(depth, 0x3f, sizeof depth);
////    depth[0] = 0, depth[root] = 1;
////    int hh = 0, tt = 0;
////    q[0] = root;
////    while (hh <= tt)
////    {
////        int t = q[hh++];
////        for (int i = h[t]; ~i; i = ne[i])
////        {
////            int j = e[i];
////            if (depth[j] > depth[t] + 1)
////            {
////                depth[j] = depth[t] + 1;
////                q[++tt] = j;
////                fa[j][0] = t;
////                for (int k = 1; k <= 15; k++)
////                    fa[j][k] = fa[fa[j][k - 1]][k - 1];
////            }
////        }
////    }
////}
////
////
////int lca(int a, int b)
////{
////    if (depth[a] < depth[b]) swap(a, b);
////    for (int k = 15; k >= 0; k--)
////        if (depth[fa[a][k]] >= depth[b])
////            a = fa[a][k];
////    if (a == b) return a;
////    for (int k = 15; k >= 0; k--)
////        if (fa[a][k] != fa[b][k])
////        {
////            a = fa[a][k];
////            b = fa[b][k];
////        }
////    return fa[a][0];//找到的就是一个点的最近祖宗
////}
//
//int main()
//{
//    memset(h, -1, sizeof h);
//    scanf("%d%d%d", &n, &k, &c);
//    for (int i = 1; i < n; i++)
//    {
//        int a, b, c;
//        scanf("%d%d%d", &a, &b, &c);
//        add(a, b, c), add(b, a, c);
//    }
//
//    dfs1(1, -1);
//    dfs2(1, -1);
//    //bfs(1);
//    int res = 0;
//
//    //直径就是 d1 up 中的最大值, 花费就是最少的花费
//
//    for (int i = 0; i <= n; i++)
//    {
//        res = max(res, (max(d1[i], up[i]) * k - cost[i] * c));
//        cout << cost[i];
//    }
//
//    printf("%d\n", res);
//    //int p1 = lca();
//
//    return 0;
//}
