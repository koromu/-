#define _CRT_SECURE_NO_WARNINGS
////#include <iostream>
////#include <cstring>
////#include <algorithm>
////
////using namespace std;
////
////const int N = 10;
////int n, path[N];//path���Ǵ��뵱ǰ��Ԫ��, ��ΪҪ������ӡԪ��
////bool st[N]; //״̬����
////
////void dfs(int u) //�ڼ������֣�һ����������
////{
////    if (u == n)//�ж��Ƿ�����
////    {
////        for (int i = 0; i < n; i++) cout << path[i] << ' '; //�������, ���������Ľ��
////        puts(" ");
////        return;
////    }
////
////    for (int i = 1; i <= n; i++)//��Ϊ�Ǵ���С��ֵ��ʼ������, ����ÿ��λ�þ���������С, ��Ȼ�������ֵ�˳��
////        if (!st[i]) //����һ������, �ҵ�һ����û�б��ù�����
////        {
////            path[u] = i;//path[0] = 1, path[1] = 2, path[2] = 3. ��Ŀ�����ľ��Ǵ�1 - n������, ����ֱ�ӱ���1 - n, �������i����һ����Ԫ��
////            st[i] = true; // i���ù�
////            dfs(u + 1);// �ߵ���һ��, �����������ʱ��, ���Ǵ����һ�����, Ȼ���ڳ���֮ǰ, �Ѿ���ӡ�����˽��
////            st[i] = false;//��ΪҪ�ص���һ����, ����Ҫ���false
////        }//���n������������, ˵����·������, ���ٻ���һ��
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
//�� - �ʺ�����

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int N = 20;
//
//int n;
//char g[N][N];
//bool col[N], dg[N * 2], udg[N * 2];//��һ������, �ڶ�����һ���Խ���, �������ǵڶ����Խ���
////�ɴ˿�֪,�����һ��forѭ����"һ��һ��"������
//void dfs(int u)
//{
//    if (u == n)
//    {
//        for (int i = 0; i < n; i++) puts(g[i]);
//        puts("");
//        return;//�Ϲ��, �ɹ��������һ��, �������
//    }
//
//    for (int i = 0; i < n; i++)//�����u��������, i�Ǻ�����
//        if (!col[i] && !dg[u + i] && !udg[n - u + i])//����������Խ��ߵĽؾ�, �ͷ��Խ��ߵĽؾ�, ���ж���false, Ҳ���Ƕ�û�ж���, ��ô�Ϳ��Ը������, Ȼ�������һ�� 
//        {//�������֪, ����Խ��߼�¼���ǽؾ�, ����ؾ�Ϊtrue��ô����Խ��߾����ж���ĶԽ���
//            g[u][i] = 'Q';
//            col[i] = dg[u + i] = udg[n - u + i] = true;//i������, i + u������һ�е�y��Ľؾ�, Ҳ����x + y, n - u + i���� y - x + n, ����n���Ƿ�ֹ��ɸ�����ƫ���� 
//            dfs(u + 1);
//            col[i] = dg[u + i] = udg[n - u + i] = false;
//            g[u][i] = '.';//���ﶼ���Ϲ��
//        }
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            g[i][j] = '.';//��ȫ����ʼ��Ϊ "."
//
//    dfs(0);
//
//    return 0;
//}
//
////#include <iostream>
////#include <cstring>
////#include <algorithm>
////#include <queue>//������������õ��Ƕ���
////
////using namespace std;
////
////typedef pair<int, int> PII;
////
////const int N = 110;
////
////int n, m;
////int g[N][N], d[N][N];//d�Ǽ�¼��ԭ��Ĳ���
////
////int bfs()
////{
////    queue<PII> q;//����������������
////
////    memset(d, -1, sizeof d);//�Ȱ����еĵ�ԭ���λ��ȫ����ʼ��Ϊ-1
////    d[0][0] = 0;//�Զ��׼���һ��λ�õľ�����0
////    q.push({ 0, 0 });//
////
////    int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };//������ĸ����������
////
////    while (q.size())//��q�Ĵ�С��Ϊ0
////    {
////        auto t = q.front();//�õ�q��ͷ
////        q.pop();//������ͷ
////
////        for (int i = 0; i < 4; i++)
////        {//�����ĸ�����
////            int x = t.first + dx[i], y = t.second + dy[i];
////
////            if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)//�����һ���������� : �ڱ߽���, û���߹�������-1, ����;�в���ǽ, ��Ϊֻ�е�һ���߹��ĵ�������·
////            {
////                d[x][y] = d[t.first][t.second] + 1;//t����һ��������, x����һ��������, ��������һ������ԭ��ľ���, ʵ���Ͼ�������һ����d�����е����� + 1
////                q.push({ x, y });//���뵽��β, ����ÿ��ȡ�����Ƕ�ͷ, �ö�ͷ������һ��, Ȼ���ٲ������ߵĵ�λ
////            }
////        }
////    }
////
////    return d[n - 1][m - 1];//�����յ㵽ԭ��ľ���
////}
////
////int main()
////{
////    cin >> n >> m;
////    for (int i = 0; i < n; i++)
////        for (int j = 0; j < m; j++)
////            cin >> g[i][j];//��g�д�ͼ
////
////    cout << bfs() << endl;
////
////    return 0;
////}
//
////ͼ�Ĳ��
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
////	q[++tt] = 1;//��β�Ͳ��ȥ
////	while (hh <= tt)
////	{
////		//ͷС��β, ��Ϊ��
////		int t = q[hh++];//ȡ��ͷԪ��
////		for (int i = h[t]; i != -1; i = ne[i])
////		{
////			//ȡ������Ԫ��
////			int j = e[i];
////			if (d[j] == -1)
////			{
////				q[++tt] = j;
////				d[j] = d[t]+1;//�ر�ע��
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
//////��������
////#include <iostream>
////#include <cstring>
////
////using namespace std;
////
////const int N = 100010;
////
////int h[2 * N], e[N], ne[N], idx;//��Ϊ���N��˫���, �����ø������, ÿ��Ԫ�ض���һ������
////int n;
////bool st[N];//��¼����ڵ��ǲ����Ѿ��߹���
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
////	//�������еĽڵ�
////	for(int i = h[u]; i != -1; i = ne[])
////
////}
////
////
////int main()
////{
////	cin >> n;
////	memset(h, -1, sizeof(h));
////	for (int i = 0; i < n - 1; i++)//n���ڵ���n-1�������
////	{
////		int a, b;
////		cin >> a >> b;
////		add(a, b); add(b, a);//����������
////	}
////
////	dfs(1);//��Ϊ��ͼ, ����������Ǹ�Ϊ���ڵ㶼���Ա���;
////	return 0;
////}
//
//
////���˽ṹ
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
////int d[N], q[N];//��¼��ȵ�����, �Ͷ��е�����
////
////void add(int a, int b)
////{
////    e[idx] = b; ne[idx] = h[a]; h[a] = idx++;//�����������h����Ļ����Ͻ�����, ͨ��h[a]�����Դ浽��������������
////}
////
////bool topsort()
////{
////    int tt = -1, hh = 0;
////
////    //���������Ϊ0 �ĵ��������
////    for (int i = 1; i <= n; i++)//�ܹ���n����, ע������ʱ��, ��ı���Ǵ�1 �� n��
////    {
////        if (d[i] == 0)
////            q[++hh] = i;//�����±���q��
////    }
////    //һ��ѭ��ֱ�������ж����е�Ԫ�ش����, ����ٶ�������ľ���������, �ڶ����������ȥ�ľ��ǻ�
////    while (tt >= hh)
////    {
////        int t = q[tt++];
////        for (int i = h[t]; i != -1; i = ne[i])//�����������ϵĵ�
////        {
////            int j = e[i];//ȡ��iָ��ĵ�
////            if (--d[j] == 0)//ɾ��j�����, ���jָ��ĵ�����Ϊ0�Ļ�, �Ϳ��Դ浽����ȥ��
////                q[++tt] = j;//j��һ��һ�������ͷ, �����ͷ���q��, Ȼ���´ν�Ҫ�ٱ��������j��ʼ������
////        }
////    }
////    //���ж���û�����Ϊ0�ĵ�, �оͷŽ�ȥ
////    return tt == n - 1;//���õ���tt�����n-1, Ҳ����˵q������±���������еķ�֧, ��ô���ͼ���޻������˽ṹ
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
//int q[N], d[N];//��¼���
////d����ŵ���b
////q����ŵ�Ҳ��b
//void add(int a, int b)
//{
//	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
//}
//
//bool topsort()
//{
//	//���Ϊ0�Ľ��������
//	int tt = -1, hh = 0;
//	d[1] = 0;//ע�����d����Ҫ��ʼ����-1, ��Ȼ��֪��Ϊʲô��Ӱ��
//	for (int i = 1; i <= n; i++)
//	{
//		if (d[i] == 0)
//			q[++tt] = i;
//	}
//	while (tt >= hh)
//	{
//		int t = q[hh++];//�õ�һ����ı��
//		for (int i = h[t]; i != -1; i = ne[i])//�õ�һ����ı��������������idx
//		{//�õ����idx��Ӧ��b
//			int j = e[i];//e[i]�����һ��b, ��aָ��ĵ�, h[t]�������idx
//			//--d[j];// t�����Ϊ0�ĵ�
//			if (--d[j] == 0)
//				q[++tt] = j;//����b
//		}
//	}//����q, d, h���������鶼�Ƿŵ�b, ֻ��e��ne�йص��������Ķ��������õ�idx, ����e��b, ne��idx
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
////��500����, 100000����, �����ǳ���ͼ
////ʹ���ڽӾ���
//const int N = 510;
//int n, m;
//int g[N][N];//�ڽӾ���
//int dist[N];
//int st[N];
//
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	for (int i = 1; i <= n; i++)//ѭ������?
//	{
//		int t = -1;//������¼һ��������û��ȷ���ĵ�����С�ĵ�
//		for (int j = 1; j <= n; j++)
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;//����j��������� dist[j]С�����еĵ�
//
//		for (int j = 1; j <= n; j++)
//			dist[j] = min(dist[j], dist[t] + g[t][j]);//�� (1 - t�ľ���) ���� (t - j�ľ���) ���� (1 - j�ľ���)
//
//		st[t] = true;//t����Ϊ�Ѿ�����̵���
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
//		//m����
//		scanf("%d%d%d", &a, &b, &c);
//		g[a][b] = min(g[a][b], c);//g�����洢(a, b)��ı߳�
//		//��Ϊ�������ر�, ����Ҫminһ��
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
//int dist[N];//��¼ÿ������1��ľ���
//int st[N];
//int n, m;
//
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	//��ʼ����1����ľ�����0
//	dist[1] = 0;//ע��
//	for (int i = 1; i <= n; i++)// 1 - n  ע��
//	{
//		int t = -1;
//		for (int j = 1; j <= n; j++)// 1 - n  ע��
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;//��t�����С��!st[j](δŪ����Ԫ��)
//
//		if (t == n)
//			break;//˵���ҵ������·��
//		for (int j = 1; j <= n; j++)
//		{//�������еĵ�
//			dist[j] = min(dist[j], g[t][j] + dist[t]);//�������е�ľ���, ������Щ����û���õ�, ���ǵ����������̵�
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

////���Ż���, ʹ�õ������ȶ���, ����ĵ�Ԫ�Ǳߵ�Ȩ�غͱߵı��
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//const int N = 1000010;
//typedef pair<int, int > pii;
//
////��Ϊ��ϡ��ͼ����ʹ�� => �ڽӱ�
//int h[N], e[N], ne[N], idx;
//int w[N];//����Ȩ��
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
//	dist[1] = 0;//��ʼ������
//	priority_queue<pii, vector<pii>, greater<pii>> heap;
//	heap.push({ 0,1 });//
//	while (heap.size())
//	{
//		auto t = heap.top();
//		heap.pop();
//
//		int ver = t.second, distence = t.first;//ver�Ǳ��
//		if (st[ver])continue;
//
//		for (int i = h[ver]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j] > distence + w[i])//���ڴ�t�����ľ���Ļ��͸���
//			{
//				dist[j] = distence + w[i];
//				heap.push({ dist[j], j });//�������ǰ��
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
//}//�ܽ�: Dijkstra���Ż�����ʹ�� ���ȶ��� �� ��д����(/����) ��ϡ��ͼ ��ʹ���ڽӾ����һ������Ȩ���·���㷨

//���ڸ�Ȩʹ��bellman_ford ����spfa
//bellman_ford, ���Ǹ���Ҫ���ݵ��㷨, ���⴮��
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
//			int a = e.a, b = e.b, w = e.w;//��a, ��b, ab�����ߵ�Ȩ��w
//
//			dist[b] = min(dist[b], backup[a] + w);//�൱�ڹ涨һ��ֻ���������ı�, ������Ϊһ����С, ��һֱ���º���ı�
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
//	bellman_ford();//������
//
//	if (dist[n] > 0x3f3f3f3f / 2) printf("impossible");
//	else printf("%d", dist[n]);
//	return 0;
//}
////Ĭд
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int M = 100010, N = 510;
////��������
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
//	for (int i = 0; i < k; i++)//�����ƵĲ�����
//	{
//		memcpy(backup, dist, sizeof dist);
//		for (int j = 0; j < m; j++)//����ÿһ���ڱ�
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
//ʹ���˶���,�ڽӱ�, ����Dijkstra
//#include <iostream>
//#include <cstring>
//#include <queue>
//
//using namespace std;
//const int N = 100010;
//int n, m;
//int h[N], e[N], ne[N], idx, w[N];//��a -> b ��Ȩ��w�� 
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
//				//ע����һ���ж����һ����û���ڶ����й�, ��ô�Ͳ���
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
//	dist[1] = 0;//������ʼ������
//	priority_queue<pii,vector<pii>,greater<pii>> heap;//Ҫ������ǵ�ԭ��ľ���, �������ı�żȿ������pair��֪��, ĳ�㵽���ľ���
//	heap.push({ 0,1 });
//
//	while (heap.size())
//	{
//		auto t = heap.top();
//		heap.pop();
//
//		int ver = t.second, dis = t.first;//ȡ�����������
//
//		//�ж�ȡ���������Ƿ�ʹ�ù�
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
//prim����С������
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 510, INF = 0x3f3f3f3f;
//
//int n, m;
//int g[N][N];//��¼����ľ���
//int dist[N];//���Ǹ�ɶ?
//bool st[N];
//
//
//int prim()
//{
//    memset(dist, 0x3f, sizeof dist);//��ʼ��
//
//    int res = 0;
//    for (int i = 0; i < n; i++)//n����
//    {
//        int t = -1;
//        for (int j = 1; j <= n; j++)//���е���, �ҵ�dist��С��
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))//û�д����, ���� �ǵ�һ����������ڵĵ��Ǵ�ĵ�  (��һ�ν����Ļ�, t = 1, Ȼ���˳�����)
//                t = j;//�ҵ�����û�д�����ĵ��е�������һ���������С�ĵ�
//
//        if (i && dist[t] == INF) return INF;//���i���ǵ�һ��, �ҵ�t�������, �������е�����С���������, ˵���Ѿ�����, ������ͨ���� !!!!!!!!!!!!!ע��
//
//        if (i) res += dist[t];//������ǵ�һ��, �ͼ��������С��                                                              !!!!!!!!!!!!! ע��
//        st[t] = true;//���Ϊ��, ���뵽��������
//
//        for (int j = 1; j <= n; j++) dist[j] = min(dist[j], g[t][j]);//(��һ��Ļ�,�������е㵽���ϵľ���), ���dist��ʾ�������е㵽������һ����ľ���
//        //���ѭ�������������ȫ�������С
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
//        g[a][b] = g[b][a] = min(g[a][b], c);//��ʼ��g����, ����ͼ, ��ע���ر�
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
//		//Ȼ�����
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
//�ѱ߰�Ȩ������
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
//int p[N];//���鼯
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
//    if (p[x] != x) p[x] = fin(p[x]);//����������ڽڵ�, �ͼ�������һ���ڵ�, ����ҵ���, �������е��ӽڵ㶼ָ���������ڽڵ�
//    return p[x];
//}
//
//int kruskal()
//{
//    int res = 0, cou = 0;
//    for (int i = 1; i <= n; i++) p[i] = i;//��ʼ��Ӧ���±��Ӧ����
//
//    for (int i = 0; i < m; i++)//
//    {
//        //����ÿһ����, �������, ������ʹ�õ���edges����
//        auto t = edges[i];
//        int a = t.a, b = t.b, c = t.w;
//        if (fin(a) != fin(b))
//        {
//            p[fin(a)] = fin(b);//��һ�����ڽڵ�ָ����һ�����ڽڵ� !!!!!!!!!!!!!!!!!!!!!
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
//	for (int i = 0; i < n; i++)//����ÿ����
//	{
//		int t = -1;
//		for (int j = 1; j <= n; j++)
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//		
//		if (dist[t] == INF) return INF;//��ֹ��INF
//
//		if (i) res += dist[t];//��ֹ��INF
//		st[t] = true;
//		for (int j = 1; j <= n; j++)
//			dist[j] = min(dist[j], g[t][j]);//ʹ��g�����ʱ����, ��Ҫ����g�ķ�Χ�Ǵ�1 - n
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
//int e[N], ne[N], idx;//�ڽӱ�洢ͼ
//int h[N];
//int color[N];//������������ɫ��0 δȾɫ��1 �Ǻ�ɫ��2 �Ǻ�ɫ
//int n, m;//��ͱ�
//
//void add(int a, int b)//�ڽӱ�����ͱ�
//{
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//bool dfs(int u, int c)//������ȱ���
//{
//    color[u] = c;//u�ĵ�� c Ⱦɫ
//
//    //������ u ���ڵĵ�
//    for (int i = h[u]; i != -1; i = ne[i])
//    {
//        int b = e[i];
//        if (!color[b])//���ڵĵ�û����ɫ,��ݹ鴦��������ڵ�
//        {
//            if (!dfs(b, 3 - c)) return false;//��3 - 1 = 2�� ��� u ����ɫ��2����� u ���ڵ�Ⱦ�� 1��
//            //��3 - 2 = 1�� ��� u ����ɫ��1����� u ���ڵ�Ⱦ�� 2��
//        }
//        else if (color[b] && color[b] != 3 - c)//����Ѿ�Ⱦɫ���ж���ɫ�Ƿ�Ϊ 3 - c
//        {
//            return false;//������ǣ�˵����ͻ������                   
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    memset(h, -1, sizeof h);//��ʼ���ڽӱ�
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++)//�����
//    {
//        int a, b;
//        cin >> a >> b;
//        add(a, b), add(b, a);
//    }
//    for (int i = 1; i <= n; i++)//������
//    {
//        if (!color[i])//���ûȾɫ
//        {
//            if (!dfs(i, 1))//Ⱦɫ�õ㣬���ݹ鴦��������ڵĵ�
//            {
//                cout << "No" << endl;//����ì�ܣ����NO 
//                return 0;
//            }
//
//        }
//    }
//    cout << "Yes" << endl;//ȫ��Ⱦɫ��ɣ�û��ì�ܣ����YES
//    return 0;
//}
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 510, M = 100010;
//
//int n1, n2, m;//��¼�����㼯�ϵĸ���
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