#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int n, ans, ans1;
//int fx[6] = { -1,0,1,0 };
//int fy[6] = { 0,1,0,-1 };//��������
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
//void dfs(int x, int y) //����û���м�����½ 
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
//void df(int x, int y)//����ûǰ�м�����½ 
//{
//	ddd[x][y] = '.';
//
//	pr(ddd);
//	
//	for (int i = 0; i < 4; i++) 
//		if (ddd[x + fx[i]][y + fy[i]] == '#' && x + fx[i] > 0 && x + fx[i] <= n && y + fy[i] > 0 && y + fy[i] <= n) //��һ������½��, ���ڷ�Χ��
//			df(x + fx[i], y + fy[i]);//�ݹ���һ���ұ�ǳɺ�,Ҳ���Ǳ������еĵ�, �������ľ���'.'
//	return;
//}
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> d[i][j];
//			ddd[i][j] = d[i][j];//��1, 1��ʼ
//		}
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (d[i][j] == '#' && (d[i - 1][j] == '.' || d[i + 1][j] == '.' || d[i][j - 1] == '.' || d[i][j + 1] == '.')) //������Ǹ�½��, ����������һ���Ǻ�
//			{
//				d[i][j] = '-';//��ǳɻ���û
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
//	printf("%d", ans1 - ans);//�ܹ��ĵ� - û��û�ĵ�
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
//}//һ�ΰ�һ��������, Ȼ��ͻ���Ϊst[i][j]����������������������
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
//}//��֪��Ϊʲô������