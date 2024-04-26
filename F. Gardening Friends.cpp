//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 200010, M = 2 * N;
//
//int h[N] = { -1 }, e[M] = { 0 }, ne[M] = { 0 }, idx = { 0 };
//int p1 = 0, p2 = 0;///��¼�����˵�
//int d1[N] = { 0 }, d2[N] = { 0 }, up[N] = { 0 }, dist[N] = { 0 };
//int s1[N] = { 0 };
//
//void add(int a, int b)  // ���һ����a->b����ȨΪc
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
//        dfs_d(j, u);//������������ڵ�
//
//        if (d1[j] + 1 >= d1[u])
//        {
//            d2[u] = d1[u], d1[u] = d1[j] + 1;
//            s1[u] = j;
//        }
//        else if (d1[j] + 1 > d2[u])
//            d2[u] = d1[j] + 1;//������˵������, �͵�ĳ��ȸ���
//    }
//}
//
//void dfs_u(int u, int fa)
//{
//    for (int i = h[u]; ~i; i = ne[i])
//    {
//        int j = e[i];
//        if (j == fa) continue;
//        //�ȴ��������Ľڵ�, �ٴ�������Ľڵ�
//        if (s1[u] == j) //�������ڵ���ӽڵ������Ǵ���������ӽڵ������, ��ô���ôγ��߸���
//            up[j] = max(d2[u], up[u]) + 1;//����ӽڵ������Ǹ��ڵ�u�����µ����, �͸��ڵ�u���ϵ�����е����ֵ
//        else
//            up[j] = max(up[u], d1[u]) + 1;
//        dfs_u(j, u);//�������´���
//    }
//}
//
//void solve()
//{
//    int n, k, c;
//    cin >> n >> k >> c;//����ĸ���, ÿ���ߵĳ��Ⱥͳɱ�
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
//    //�������1�Ǹ�, ÿ��ֻ���ƶ����ھ���, ÿ�λ���cԪ, ���ҵ�����ֱ��, Ȼ�����1�ŵ㵽������̵�һ����
//
//    dfs_d(1, -1);
//    dfs_u(1, -1);//�ҵ����˵�
//
//    int ans = 0;
//    int tmp1 = 0, tmp2 = 0;
//    for (int i = 0; i <= n; i++)
//    {
//        tmp1 = max(d1[i], up[i]);
//        ans = max(ans, tmp1);//�𰸾�����ĳ���ڵ�ʱ�����
//        if (ans == tmp1) p1 = i;
//
//        tmp1 = tmp2;
//        tmp2 = max(d2[i], tmp2);
//
//        if (tmp1 != tmp2)//˵��û�и���
//            p2 = i;
//    }//�õ��������˵�����
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