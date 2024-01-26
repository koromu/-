#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int n, ans, ans1;
//int fx[6] = { -1,0,1,0 };
//int fy[6] = { 0,1,0,-1 };//方向数组
//char d[1010][1010], ddd[1010][1010];
//
//void pr(char x[1010][1010])
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//			cout << x[i][j];
//		cout << endl;
//	}
//}
//
//void dfs(int x, int y) //求淹没后有几个大陆 
//{
//	d[x][y] = '.';
//
//	pr(d);
//
//	for (int i = 0; i < 4; i++) 
//		if (d[x + fx[i]][y + fy[i]] != '.' && x + fx[i] > 0 && x + fx[i] <= n && y + fy[i] > 0 && y + fy[i] <= n) 
//			dfs(x + fx[i], y + fy[i]);
//	return;
//}
//void df(int x, int y)//求淹没前有几个大陆 
//{
//	ddd[x][y] = '.';
//
//	pr(ddd);
//	
//	for (int i = 0; i < 4; i++) 
//		if (ddd[x + fx[i]][y + fy[i]] == '#' && x + fx[i] > 0 && x + fx[i] <= n && y + fy[i] > 0 && y + fy[i] <= n) //下一个点是陆地, 且在范围内
//			df(x + fx[i], y + fy[i]);//递归下一层且标记成海,也就是遍历所有的点, 遍历过的就是'.'
//	return;
//}
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> d[i][j];
//			ddd[i][j] = d[i][j];//从1, 1开始
//		}
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (d[i][j] == '#' && (d[i - 1][j] == '.' || d[i + 1][j] == '.' || d[i][j - 1] == '.' || d[i][j + 1] == '.')) //这个点是个陆地, 他的四周有一个是海
//			{
//				d[i][j] = '-';//标记成会淹没
//				pr(d);
//			}
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (ddd[i][j] == '#')
//			{
//				ans1++;
//				df(i, j);
//			}
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (d[i][j] == '#')
//			{
//				ans++;
//				dfs(i, j);
//			}
//	printf("%d", ans1 - ans);//总共的岛 - 没淹没的岛
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//const int N = 1010;
//char mp[N][N];
//bool st[N][N];
//int flag, n;
//
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//void dfs(int x, int y)
//{
//	st[x][y] = true;
//	if (mp[x + 1][y] == '#' && mp[x - 1][y] == '#' && mp[x][y + 1] == '#' && mp[x][y - 1] == '#')
//		flag = 1;
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (!st[x + dx[i]][y + dy[i]] && mp[x + dx[i]][y + dy[i]] == '#')
//			dfs(x + dx[i], y + dy[i]);
//	}
//}//一次把一个岛搜完, 然后就会因为st[i][j]这个条件不会再搜这个岛了
//
//
//int main()
//{
//	int ans = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		getchar();
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%c", &mp[i][j]);
//		}
//	}
//	for(int i = 1 ; i <= n ; i ++)
//		for (int j = 1; j <= n; j++)
//		{
//			if (!st[i][j] && mp[i][j] == '#')
//			{
//				flag = 0;
//				dfs(i, j);
//				if (flag == 0) ans++;
//			}
//		}
//	cout << ans;
//	return 0;
//}//不知道为什么过不了