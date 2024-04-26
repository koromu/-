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

int n, m, bb, maxb, minb;//点, 边, 血量

void add(int a, int b, int c)
{
	e[idx] = b, ne[idx] = h[a], w[idx] = c, h[a] = idx++;
}

bool dijkstra(int mid)
{

	//	priority_queue<pii, vector<pii>, greater<pii>> pq;
	priority_queue <pair <int, int>> pq;
	for (int i = 0; i < n; i++) dist[i] = -0x3f3f3f3f;

	dist[1] = bb;//从1到0这个点, 距离就是0
	pq.push(make_pair(dist[1], 1));//插入初始的状态, 第一个放距离, 第二个放编号

	while (!pq.empty())
	{
		auto it = pq.top();
		int id = it.second;
		pq.pop();

		if (dist[id] != it.first) continue;//如果被更小的值更新了, 所以不看这个pair, 看下一个

		for (int i = h[id]; i != -1; i = ne[i])
		{
			int j = e[i];//j就是	b, id就是a
			if (ro[j] > mid) continue;//如果这次要更新的花费要大于总供给可以使用过的金额, 那么就跳过这个子节点

			if (dist[j] < dist[id] - w[i] && dist[id] - w[i] >= 0)//要控制扣血后剩下的血更多, 所以只有当当前的血比这条路扣血后剩下的血少的时候, 才要更新
			{
				dist[j] = dist[id] - w[i];
				//更新了的点入列!
				pq.push(make_pair(dist[j], j));//插入这个被更新的点的剩余的血量, 和这个被更新的点的编号idx
			}
		}
	}//这个做完, dist[n]就出来了, 如果合法就返回1, 否则返回0, 合法的话, 就是最后一个数会被更新,
	return dist[n] != -0x3f3f3f3f;
}//每次check做一次dijk, 找到小的t

int main()
{
	cin >> n >> m >> bb;
	memset(h, -1, sizeof h);
	for (int i = 0; i < n; i++) {
		//scanf("%d", &ro[i]);
		cin >> ro[i];
		maxb = max(ro[i], maxb);//这个是费用
	}
	//读入过路费

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
		if (dijkstra(mid))//如果这个答案
			r = mid - 1;//如果合法, 那么答案可以小于等于mid
		else l = mid + 1;//如果不合法, 那么答案可以大于mid, 不能等于
	}

	if (l > maxb) puts("AFK");
	else cout << l << endl;
	//缴费次数最多的一次的最小值, 走过城市最多, 但是费用最少
	return 0;
}