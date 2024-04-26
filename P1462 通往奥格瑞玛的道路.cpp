#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;
typedef pair<int, int> pii;
const int N = 100010, M = 500010;

int ro[N];
int h[N], e[M], ne[M], idx, w[M];
int dist[N];

int n, m, bb, maxb, minb;//��, ��, Ѫ��

void add(int a, int b, int c)
{
	e[idx] = b, ne[idx] = h[a], w[idx] = c, h[a] = idx++;
}

bool dijkstra(int mid)
{

	//	priority_queue<pii, vector<pii>, greater<pii>> pq;
	priority_queue <pair <int, int>> pq;
	for (int i = 0; i < n; i++) dist[i] = -0x3f3f3f3f;

	dist[1] = bb;//��1��0�����, �������0
	pq.push(make_pair(dist[1], 1));//�����ʼ��״̬, ��һ���ž���, �ڶ����ű��

	while (!pq.empty())
	{
		auto it = pq.top();
		int id = it.second;
		pq.pop();

		if (dist[id] != it.first) continue;//�������С��ֵ������, ���Բ������pair, ����һ��

		for (int i = h[id]; i != -1; i = ne[i])
		{
			int j = e[i];//j����	b, id����a
			if (ro[j] > mid) continue;//������Ҫ���µĻ���Ҫ�����ܹ�������ʹ�ù��Ľ��, ��ô����������ӽڵ�

			if (dist[j] < dist[id] - w[i] && dist[id] - w[i] >= 0)//Ҫ���ƿ�Ѫ��ʣ�µ�Ѫ����, ����ֻ�е���ǰ��Ѫ������·��Ѫ��ʣ�µ�Ѫ�ٵ�ʱ��, ��Ҫ����
			{
				dist[j] = dist[id] - w[i];
				//�����˵ĵ�����!
				pq.push(make_pair(dist[j], j));//������������µĵ��ʣ���Ѫ��, ����������µĵ�ı��idx
			}
		}
	}//�������, dist[n]�ͳ�����, ����Ϸ��ͷ���1, ���򷵻�0, �Ϸ��Ļ�, �������һ�����ᱻ����,
	return dist[n] != -0x3f3f3f3f;
}//ÿ��check��һ��dijk, �ҵ�С��t

int main()
{
	cin >> n >> m >> bb;
	memset(h, -1, sizeof h);
	for (int i = 0; i < n; i++) {
		//scanf("%d", &ro[i]);
		cin >> ro[i];
		maxb = max(ro[i], maxb);//����Ƿ���
	}
	//�����·��

	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		//scanf("%d%d%d", &a, &b, &c);
		cin >> a >> b >> c;
		add(a, b, c), add(b, a, c);
	}

	int l = 1, r = maxb;
	while (l <= r)
	{
		int mid = (l + r) >> 1;
		if (dijkstra(mid))//��������
			r = mid - 1;//����Ϸ�, ��ô�𰸿���С�ڵ���mid
		else l = mid + 1;//������Ϸ�, ��ô�𰸿��Դ���mid, ���ܵ���
	}

	if (l > maxb) puts("AFK");
	else cout << l << endl;
	//�ɷѴ�������һ�ε���Сֵ, �߹��������, ���Ƿ�������
	return 0;
}