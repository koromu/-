//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int N = 20010;
//
//int h[N], e[N], ne[N], idx;
//int ans;
//void add(int a, int b)
//{
//    ne[idx] = h[a], e[idx] = b, h[a] = idx++;
//}
//
//int dfs(int u, int father)
//{
//    int dist = 0;//记录这个点最长的长度
//    int d1 = 0, d2 = 0;
//    for (int i = h[u]; i != -1; i = ne[i])
//    {
//        int j = e[i];
//        if (j == father) continue;
//        //遍历所有的子节点
//        int d = dfs(j, u) + 1;//返回子节点的最长距离
//        dist = max(dist, d);
//
//        if (d >= d1) d2 = d1, d1 = d;
//        else if (d > d2) d2 = d;
//        //这里使用d更新, d是什么?, 是当前这个子节点中最长的距离, dist是什么, 最长的一条边, 如果有两条边
//        //一条很长, 一条很短, 长的那条更新了dist, 轮到短的那条的话, dist不会被更新, 如果用dist更新d1 d2的话可能会错过次长边, 也就是d2可能一直不会更新
//    }
//    ans = max(d1 + d2, ans);
//
//    return dist;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    memset(h, -1, sizeof h);
//    for (int i = 0; i < n - 1; i++)
//    {
//        int a, b;
//        cin >> a >> b;
//        add(a, b), add(b, a);
//    }
//    dfs(1, -1);
//
//    cout << ans << endl;
//    return 0;
//}