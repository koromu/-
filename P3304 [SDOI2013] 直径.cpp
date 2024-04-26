//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 200010, M = 2 * N;
//
//int h[N], e[M], ne[M], w[M], idx;
//int d1[N], d2[N], ans;
//int fa[N][20];
//int n;
//
//
//void add(int a, int b, int c)
//{
//	e[idx] = b, ne[idx] = h[a], w[idx] = c, h[a] = idx++;
//}
//
//void dfs(int u, int fa)
//{
//	for (int i = h[u]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (j == fa) continue;
//		dfs(j, u);
//		if (d1[u] <= d1[j] + w[i]) d2[u] = d1[u], d1[u] = d1[j] + w[i];
//		else if (d1[j] + w[i] > d2[u]) d2[u] = d1[j] + w[i];
//	}
//	ans = max(ans, d1[u] + d2[u]);
//}
//
//void bfs(int root)
//{
//
//}
//
//void lca(int u)
//{
//	
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int a, b, c;;
//		cin >> a >> b >> c;
//		add(a, b, c), add(b, a, c);
//	}
//
//	dfs(1, -1);//µÃµ½Ö±¾¶
//	bfs(1);
//	lca(1);
//
//	return 0;
//}