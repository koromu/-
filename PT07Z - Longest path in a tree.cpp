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
//    int dist = 0;//��¼�������ĳ���
//    int d1 = 0, d2 = 0;
//    for (int i = h[u]; i != -1; i = ne[i])
//    {
//        int j = e[i];
//        if (j == father) continue;
//        //�������е��ӽڵ�
//        int d = dfs(j, u) + 1;//�����ӽڵ�������
//        dist = max(dist, d);
//
//        if (d >= d1) d2 = d1, d1 = d;
//        else if (d > d2) d2 = d;
//        //����ʹ��d����, d��ʲô?, �ǵ�ǰ����ӽڵ�����ľ���, dist��ʲô, ���һ����, �����������
//        //һ���ܳ�, һ���ܶ�, ��������������dist, �ֵ��̵������Ļ�, dist���ᱻ����, �����dist����d1 d2�Ļ����ܻ����γ���, Ҳ����d2����һֱ�������
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