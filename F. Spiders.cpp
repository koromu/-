//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int N = 210, M = 110;//�����ı�
//
//int SS[M][N];//��һ��������ʾ��i + 1ֻ֩��
//int h[M][N], ne[M][N], e[M][N], idx;
//
//int ans;
//
//void add(int a, int b, int i)  // ���һ����a->b
//{
//    e[i][idx] = b, ne[i][idx] = h[i][a], h[i][a] = idx++;
//}
//
//int dfs(int u, int father, int x)
//{
//    int dist = 0;//��¼����ӿ��е����
//    int d1 = 0, d2 = 0;
//    for (int i = h[x][u]; i != -1; i = ne[x][i])
//    {
//        int j = e[x][i];
//        if (j == father) continue;
//        int d = dfs(j, u, x) + 1;
//        dist = max(dist, d);
//
//        if (d >= d1) d2 = d1, d1 = d;
//        else if (d > d2) d2 = d;
//    }
//    return dist;
//}
//
//int main()
//{
//    int n, x;//x���������, Ȼ����x - 1����
//    cin >> n >> x;
//    memset(h, -1, sizeof h);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < x - 1; j++)
//        {
//            int a, b;
//            cin >> a >> b;
//            add(a, b, i), add(b, a, i);
//        }
//        ans += dfs(1, -1, i);
//    }
//
//    cout << ans << endl;
//    return 0;
//}