
//01��������
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 1010;
//int n, m;
//int v[N], w[N];
//int f[N];
//
//int main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)
//        cin >> v[i] >> w[i];//��ÿһ����Ʒ�������������������
//
//    for (int i = 1; i <= n; i++)//ѭ��ÿһ����Ʒ
//        for (int j = m; j >= v[i]; j--)//j������, ѭ��ÿһ������?, ��ôf�д�ŵ���ÿ�����������ֵ
//            //�Ӵ�С��ö��, j - v[i]���ǴӴ�С, �����ȸı���Ǵ����f[j],��ʹ�õ���С����f[j - v[i]] 
//            //�����С����ö��, �ȸı����С����, ʹ�õ��Ǹ�С����, �����п��ܵ���С�������ʱ, ʹ�õ����Ѿ��ı��С���������ڵ�i��, ���ǵ�i-1�����
//            f[j] = max(f[j], f[j - v[i]] + w[i]);//��Ҫͨ��w[i]������f[j]�е�ֵ
//            
//    //ֻ�е�����w[i]ʱ, ���ܱ��f[j]
//    cout << f[m] << endl;   //���������mʱ, f[m]�зŵ��Ǵӵ�1����Ʒ����k����Ʒ, ����Ĵ��ֵ����Ʒ���ܷŲ�����.�����ǵõ�������ֵ
//    return 0;
//}
//��ȫ��������
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1010;
//int f[N];
//int v[N], w[N];
//int n, m;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
//
//	for (int i = 1; i <= n; i++)//ö��ÿһ����Ʒ
//		for (int j = v[i]; j <= m; j++)//ö��ÿһ������
//		{
//			f[j] = max(f[j], f[j - v[i]] + w[i]);//ʹ���˵ȼ۵ķ���, ���г�f[i][j]Ȼ�����ҵ�ͨʽf[j - v[i]] + w[i]��ʹ���滻
//		}
//
//	cout << f[m];
//	return 0;
//}
//���ر�������

//�Ż��д����s
//������1 2 4 8 ..... 512 ��ʾ1- 1023�е����е���, ö�ٴ�1023�����10
//��ס������10������ʾ����
//ȷ������, Ȼ��һ��һ����, Ȼ��һֱ��һֱ��, ֱ���쵽����, ��������C
//Ȼ������ͻ���һ��01��������, ����w �� v������Ǵ���õ��������������

//������
//#include <iostream>	
//#include <algorithm>
//
//using namespace std;
//
//const int N = 110;
//int w[N], v[N], s[N];
//int n, m;
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		cin >> v[i] >> w[i] >> s[i];
//	for (int i = 1; i <= n; i++)
//	{
//		for(int j = 0 ; j <= m ; j ++)
//			for (int k = 0; k <= s[i] && k * v[i] <= j; k++)//����j������й�
//			{
//				f[i][j] = max(f[i][j], f[i - 1][j - v[i] * k] + k * w[i]);
//			}
//	}
//	cout << f[n][m] << endl;
//
//	return 0;
//}

//�Ż���

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 2010;//��ǿ��ĸ���
//
//int w[N], v[N], s[N];
//int f[N];//����Ż������Ż��Ǹ� O(logs)
//int n, m;
//
//int main()
//{
//    cin >> n >> m;
//    int cnt = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int a, b, s;//a������, b�Ǽ�ֵ, s���ܹ��ĸ���
//        cin >> a >> b >> s;
//        int k = 1;//k�������Ŀ���
//        while (k <= s)
//        {
//            cnt++;
//            v[cnt] = a * k;//��¼���
//            w[cnt] = b * k;//��¼��ֵ
//            s -= k;//����ʣ��ĸ���
//            k *= 2;//�����һ��
//        }
//
//        if (s > 0)
//        {
//            cnt++;
//            v[cnt] = a * s;
//            w[cnt] = b * s;
//        }//ʣ��ĳ���C
//    }
//    n = cnt;//��¼��������ĸ���
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = m; j >= v[i]; j--)
//            f[j] = max(f[j], f[j - v[i]] + w[i]);
//    }
//    cout << f[m] << endl;
//
//    return 0;
//}


//���ر�������
//ͨʽ: 
//�������һ��ľʹӴ�С
//�ñ���ľʹ�С����

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 110;
//
//int s[N];
//int w[N][N], v[N][N];
//int n, m;
//int f[N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)//��һ��Ĭ�ϳ�ʼ��Ϊ0, ���Բ�ȡ
//	{
//		cin >> s[i];
//		for (int j = 0; j < s[i]; j++)//���еĶ�Ҫȡ
//		{
//			cin >> v[i][j] >> w[i][j];
//		}
//	}
//
//	for(int i = 1; i <= n ; i ++)
//		for (int j = m; j >= 0; j--)//��0 - m
//		{
//			for (int k = 0; k < s[i]; k++)//v��w�ĵڶ����±��������j��֪, ������0 - s[i] - 1
//				if (j >= v[i][k]) f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);
//		}
//
//	cout << f[m];
//	return 0;
//}
//���鱳������
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int N = 110;
//int n, m;
//int f[N];
//int w[N][N], v[N][N];
//int s[N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> s[i];
//		for (int j = 0; j < s[i]; j++)
//			cin >> v[i][j] >> w[i][j];
//	}
//
//	for(int i = 1; i <= n ; i ++)
//		for (int j = m; j >= 0; j--)//ע��, �ǴӺ���ǰ
//			for(int k = 0; k < s[i]; k ++)
//				if(v[i][k] < j)//ע��ؼ�
//					f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);
//	cout << f[m];
//	return 0;
//}

//�������������� - ����汾
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 510;
//
//int f[N][N];
//int m[N][N];
//int n;
//
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= i; j++)
//            cin >> m[i][j];
//
//    // for(int i = 0 ; i <= n ; i ++)
//    //     for(int j = 0 ; j <= i + 1; j ++)//f[i-1][j]������û�����ݵĵط�, ���԰ѵ�һ��û�����ݵط���ʼ���ɸ�����, ��ú����ǵ������ݵ�ǿ���ֵ
//    //         f[i][j] = -1e9;//ע��Ҫ��ʼ��
//
//    for (int i = 0; i <= n; i++)
//        for (int j = 0; j <= i; j++)//f[i-1][j]������û�����ݵĵط�, ���԰ѵ�һ��û�����ݵط���ʼ���ɸ�����, ��ú����ǵ������ݵ�ǿ���ֵ
//            f[i][j] = -1e9;//ע��Ҫ��ʼ��
//    // f[1][1] = m[1][1];//ע��
//    // for(int i = 2;  i <= n ; i ++)
//    //     for(int j = 1 ; j <= i ; j ++)
//    //         f[i][j] = max(f[i-1][j] + m[i][j], f[i-1][j-1] + m[i][j]);//��Ҫ��һ��, Ҳ���ǿ��Դ���������һ��
//
//    for (int i = n; i >= 1; i--)
//        for (int j = i; j >= 1; j--)
//            f[i][j] = max(f[i + 1][j] + m[i][j], f[i + 1][j + 1] + m[i][j]);//����һ������İ汾, ���Լ��ٳ�ʼ��ʱ�ļ���, ���н���Ĳ���
//
//
//    // int res = -1e9;//ע��, ������-10000���������ֵ
//    // for(int i = 1 ; i <= n ; i ++)
//    //     if(f[n][i] > res) 
//    //         res = f[n][i];
//
//    // cout << res;
//    cout << f[1][1];
//    return 0;
//}
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 510;
//
//int f[N][N];
//int m[N][N];
//int n;
//
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= i; j++)
//            cin >> m[i][j];
//
//    for (int i = 0; i <= n; i++)
//        for (int j = 0; j <= i + 1; j++)//f[i-1][j]������û�����ݵĵط�, ���԰ѵ�һ��û�����ݵط���ʼ���ɸ�����, ��ú����ǵ������ݵ�ǿ���ֵ
//            f[i][j] = -1e9;//ע��Ҫ��ʼ��
//
//    //for (int i = 0; i <= n; i++)
//    //    for (int j = 0; j <= i; j++)//f[i-1][j]������û�����ݵĵط�, ���԰ѵ�һ��û�����ݵط���ʼ���ɸ�����, ��ú����ǵ������ݵ�ǿ���ֵ
//    //        f[i][j] = -1e9;//ע��Ҫ��ʼ��
//    f[1][1] = m[1][1];//ע��
//    for (int i = 2; i <= n; i++)
//        for (int j = 1; j <= i; j++)
//            f[i][j] = max(f[i - 1][j] + m[i][j], f[i - 1][j - 1] + m[i][j]);//��Ҫ��һ��, Ҳ���ǿ��Դ���������һ��
//
//    f[1][1] = m[1][1];//ע��
//    int res = -1e9;
//    for (int i = 2; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            f[i][j] = max(f[i - 1][j] + m[i][j], f[i - 1][j - 1] + m[i][j]);//��Ҫ��һ��, Ҳ���ǿ��Դ���������һ��
//            if (i == n)
//                res = max(f[n][j], res);
//        }
//    }
//    //for (int i = n; i >= 1; i--)
//    //    for (int j = i; j >= 1; j--)
//    //        f[i][j] = max(f[i + 1][j] + m[i][j], f[i + 1][j + 1] + m[i][j]);//����һ������İ汾, ���Լ��ٳ�ʼ��ʱ�ļ���, ���н���Ĳ���
//
//
//     //int res = -1e9;//ע��, ������-10000���������ֵ
//     //for(int i = 1 ; i <= n ; i ++)
//     //    if(f[n][i] > res) 
//     //        res = f[n][i];//����Ľ������
//
//    cout << res;
//    // cout << f[1][1];
//    return 0;
//}//Ҳ����ȷ��, ��ѭ������, ����ʱ�䲢û���ٺܶ�, �������жϵĴ�������

//�����������
//f[i][j]��ʾ��һ�����е�i��������, �ڶ�����j���������������ͬ�����еļ���
//#include <iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//int f[N][N];
//int n, m;
//char a[N], b[N];
//
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= m; i++) cin >> b[i];
//	int res = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)//����������ѭ�������ά״̬�����еĽ��, һ��һ�����Ƶ������ս��
//		{
//			f[i][j] = max(f[i - 1][j], f[i][j - 1]);//ʵ���Ϸֳ����������, ����һ���ǲ���������������i��j��, ����ʵ������������������������, �����ǰ����ڴ��ڵ�, ���һ��Ǵ����ظ���, ���ǲ���©
//			if (a[i] == b[j]) {
//				f[i][j] = f[i - 1][j - 1] + 1;
//			}
//			res = max(res, f[i][j]);
//		}
//	}
//	cout << res;
//	return 0;
//}

//ʯ�Ӻϲ�
//Ҳ��һ��f[i,j]��״̬��ʾ
//f[i,j]��ʾ
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 310;
//int a[N];//��ʼ�����ǰ׺�����鹫��һ������
//int f[N][N];
//int n;
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	for (int i = 1; i <= n; i++) a[i] += a[i - 1];//���������ǰ׺�͹�ʽ
//
//	//����dp��Ҫ�������䳤��
//	for(int len = 2; len <= n; len ++)//�ٱ�����������µ����е����ϲ��ĵ�, Ҳ���Ǵ�ͷ��β
//		for (int i = 1; i + len - 1 <= n; i++)//��˵���i, �Ҷ˵������ӳ���-1 . ���� : ���10, ����20, �յ���29 = 10 + 20 -1 ( 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29) 
//		{
//			int l = i, r = i + len - 1;
//			f[l][r] = 1e9;
//			for (int k = i; k <= r; k++)//���ϲ��ĵ�����Ǵ� ��߽�(i) �� ���ұ߽�(r)
//			{
//				f[l][r] = min(f[l][r], f[l][k] + f[k + 1][r] + a[r] - a[l-1]);
//			}
//		}
//
//	cout << f[1][n];
//	return 0;
//}

//�����������
//#include <iostream>
//#include <algorithm>
//
//using namespace std; 
//const int N = 100010;
//
//int f[N], a[N];
//int n;
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//
//	int len = 0;
//	for (int i = 0; i < n; i++)
//	{
//		//�������������Ƕ���
//		int l = 0, r = len;//f�е��ǳ���Ϊlenʱ����ĳ���
//		while (l < r)
//		{
//			int mid = l + r + 1>> 1;
//			if (f[mid] >= a[i])//Ҫ�ҵ��Ǵ���
//			{
//				r = mid - 1;
//			}
//			else l = mid;
//		}
//		//�ҵ����Ǹ���
//		len = max(len, r + 1);
//		f[r + 1] = a[i];
//	}
//	cout << len;
//	return 0;
//}
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    int t; cin >> t;
//    while (t--) {
//        string s1, s2;
//        cin >> s1 >> s2;
//        int x1 = s1[s1.size() - 1], x2 = s2[s2.size() - 1];
//        int s1s, s2s;
//        s1s = s1.size(), s2s = s2.size();
//        if (x1 == x2) {
//            if (s1s == s2s) {
//                cout << '=' << endl;
//                continue;
//            }
//            if (s1.size() > s2.size() && x1 == 'L') {
//                cout << '>' << endl;
//                continue;
//            }
//            else if(s1.size() < s2.size() && x1 == 'L')
//            {
//                cout << '<' << endl;
//                continue;
//             }
//            if (s1.size() > s2.size() && x1 == 'S') {
//                cout << '<' << endl;
//                continue;
//            }
//            else if(s1.size() < s2.size() && x1 == 'S'){
//                cout << '>' << endl;
//                continue;
//            }
//        }
//        else if (x1 > x2) { cout << '<' << endl; continue; }
//        else { cout << '>' << endl; continue; }
//    }
//return 0; 
//}

//��ѩ
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int N = 310;
//
//int m[N][N];
//bool st[N][N];
//int r, c;
//int ans, tmp;
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 };
//
//
//void dfs(int x, int y)
//{
//    if (x <= c && x >= 0 && y <= r && y >= 0 && !st[x][y])
//    {
//        tmp++;
//        st[x][y] = true;
//        for (int i = 0; i <= 3; i++)
//        {
//            if (m[x + dx[i]][y + dy[i]] < m[x][y])
//            {
//                dfs(x + dx[i], y + dy[i]);
//                st[x][y] = false;
//                }
//        }
//    ans = max(ans, tmp);
//    tmp--;
//    return;
//    }
//    return;
//}
//
//
//int main()
//{
//    cin >> r >> c;
//    for (int i = 1; i <= r; i++)
//        for (int j = 1; j <= c; j++)
//            cin >> m[i][j];
//
//    for (int i = 1; i <= r; i++)
//        for (int j = 1; j <= c; j++)
//            dfs(i, j);
//
//    cout << ans;
//    return 0;
//}


//��ѩĬд
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//const int N = 310;
//
//int g[N][N];
//int f[N][N];
//int r, c;
//int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
//
//int dp(int x, int y)
//{
//	int& v = f[x][y];//��v����
//	if (v != -1) return v;
//	v = 1;
//	for (int i = 0; i <= 3; i++)
//		if(x + dx[i] >=1 && x + dx[i] <= c && y + dy[i] <= r && y + dy[i] >= 1 && g[x][y] < g[x + dx[i]][y + dy[i]])
//			v = max(v, dp(x + dx[i], y + dy[i]) + 1);
//	return v;
//}
//
//int main()
//{
//	cin >> r >> c;
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			cin >> g[i][j];
//
//	memset(f, -1, sizeof f);
//
//	int ans = 0;
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			ans = max(ans, dp(i, j));
//
//	cout << ans;
//
//	return 0;
//}


//���Hamilton·��
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20, M = 1 << N;
//
//int n;
//int w[N][N];
//int f[M][N];//�����f�ĵ�һ������ʾ - Ŀǰʹ���˵�, i�����Ǹ���������, ÿһλ����һ����, ��2������ʾ, 
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> w[i][j];//�������е�����
//
//    memset(f, 0x3f, sizeof f);//��ΪҪ�����, ˵��·�̵���Сֵ, ����Ҫ��min, ��������ȫ����ʼ���ɴ�ֵ
//    f[1][0] = 0;//?
//
//    for (int i = 0; i < 1 << n; i++)//����f[M][N]
//        for (int j = 0; j < n; j++)
//            if (i >> j & 1)//��һ�µ�jλ��û����, �����1��������,�����ж�, �����0����û��, �������ж�, ��һλ��
//                //�ҵ�һ��j, Ȼ������һ��k, Ȼ��ȫ����һ���k��j
//                for (int k = 0; k < n; k++)//��0 - n
//                    if (i >> k & 1)
//                        f[i][j] = min(f[i][j], f[i - (1 << j)][k] + w[k][j]);//  i - ( 1 << j ) //(�����г�ȥj�ĵ�, Ȼ����k�ĵ�, ������j), ��(ԭ���߹�j, ��j�ľ���ȡ��Сֵ)
//                                                                             //�����k���ô�
//
//    cout << f[(1 << n) - 1][n - 1];
//
//    return 0;
//}

//û����˾�����
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 6010;
//
//int n;
//int h[N], e[N], ne[N], idx;//�ڽӱ�������
//int happy[N];//ÿ���˵Ŀ���ָ��
//int f[N][2];//״̬����, �ڶ����±���0�����������i��������ָ��,�ڶ����±���1��ʾ�������i��������ָ�� 
//bool has_fa[N];//������Ƿ� "��"���ڵ� , Ҳ�����Ƿ�����˾
//
//void add(int a, int b)
//{
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//void dfs(int u)
//{
//    f[u][1] = happy[u];//����ڶ����±���1, ��ô����˵Ŀ���ֵ�϶���������, �����ȼ��������Ŀ���ֵ
//
//    for (int i = h[u]; ~i; i = ne[i])//��������ڵ�������ӽڵ�
//    {
//        int j = e[i];
//        dfs(j);
//
//        f[u][1] += f[j][0];//�����u�Ļ�, ��ô���ϵľ���û��j�Ŀ���ֵ���ܺ�
//        f[u][0] += max(f[j][0], f[j][1]);//���û��u�Ļ����Ǽ���, ��j����û��j������һ�����ֵ, ��Ϊ��j��û��j��һ����һ���Ľ��������
//    }
//}
//
//int main()
//{
//    scanf("%d", &n);//n����
//
//    for (int i = 1; i <= n; i++) scanf("%d", &happy[i]);
//
//    memset(h, -1, sizeof h);//��ͷ��ʼ����-1
//    for (int i = 0; i < n - 1; i++)
//    {
//        int a, b;//b��a����˾
//        scanf("%d%d", &a, &b);//�������bָ��a
//        add(b, a);//bָ��a
//        has_fa[a] = true;//���a������˾��
//    }
//
//    int root = 1;//��1��ʼ, �ҵ�һ��û�и��ڵ�ĵ�, Ҳ��������boss
//    while (has_fa[root]) root++;
//
//    dfs(root);//�������boss�ĵ������ҵ������ֵ
//
//    printf("%d\n", max(f[root][0], f[root][1]));//��ӡ���������boss ������ û�����boss ���е����ֵ
//
//    return 0;
//}

//Ĭд
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N = 6010;
//
//int f[N][2];
//int happy[N];
//int e[N], ne[N], h[N], idx;//�ڽӱ�
////��¼�Ƿ��и��ڵ������
//bool has_fa[N];
//
//void add(int a, int b)
//{
//	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
//}
//
//void dfs(int u)
//{
//	f[u][1] += happy[u];
//	
//	for (int i = h[u]; i != -1; i = ne[i])//�������е��ӽڵ�
//	{
//		int j = e[i];
//		dfs(j);//�ҵ�һ���ӽڵ�. ��ֱ�ӵݹ�
//		//������f
//		f[u][1] += f[j][0];
//		f[u][0] += max(f[j][1], f[j][0]);
//	}
//}
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) cin >> happy[i];
//
//	memset(h, -1, sizeof h);
//
//	for (int i = 1; i <= n - 1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		//bָ��a
//		add(b,a);//����ָ����
//		has_fa[a] = true;
//	}
//
//	int root = 1;
//	while (has_fa[root]) root++;
//
//	dfs(root);
//
//	cout << max(f[root][1], f[root][0]);
//
//	return 0;
//}

//�ɵ��ﰲ������
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 12, M = 1 << N;
//
//int n, m;
//long long f[N][M];//��i-1����չ����������, ������m�Ķ����Ƶ�1��λ�ñ�ʾ, ���Ա�������ʹ���˺ܶ��λ����, Ҳ����״̬ѹ���ĵ���
//bool st[M];//��ҪԤ����Ĵ���, ��¼������j������Ƿ�Ϸ�
//
//int main()
//{
//    while (cin >> n >> m, n || m)//����һ���кͿ�
//    {
//        for (int i = 0; i < 1 << n; i++)//������Ԥ����st����
//        {
//            int cnt = 0;
//            st[i] = true;//�ȼ�������
//            for (int j = 0; j < n; j++)//ѭ��ÿһ��λ��
//                if (i >> j & 1)//������λ����1
//                {
//                    if (cnt & 1/*�ж����������淽��*/) st[i] = false;//������1֮ǰ��������0, �Ǿͱ��Ϊ���Ϸ�
//                    cnt = 0;//һ��0������, ��һ��0�ĸ�����0��ʼ.
//                }
//                else cnt++;//������û�г���1, ��Ҫֱ���ж����λ����0, ��ô�ͼ�¼һ��0
//            if (cnt & 1) st[i] = false;//������������,Ҳ��ǳɲ��Ϸ�
//        }//Ԥ�������
//
//        memset(f, 0, sizeof f);//ȫ�����ó�0
//        f[0][0] = 1;//�������ֻ��1��, ������1????
//        for (int i = 1; i <= m; i++)//����ÿһ��
//            
//            for (int j = 0; j < 1 << n; j++)//j��k��һ����ģʽѭ��, �������еĿ��������еĿ����� 
//                for (int k = 0; k < 1 << n; k++)
//            
//                    if ((j & k) == 0 && st[j | k])//Ҳ����˵,j & kû���ص��ĵط�, ����������ص��ĵط��ͻ����һ��1, �Ͳ�������0. ���� j | k ��������j��k��1�ĵط������� , �������ʣ�µķ�϶(Ҳ����0)�ǺϷ���(Ҳ���Ƕ���ż����0), ��ô�ǺϷ���(�е�С�ϻ����Ǻ����)
//                        f[i][j] += f[i - 1][k];//k�� i-1 �еĶ�����״̬, j�ǵ� i �еĶ�����״̬, ���Լ�����, ��Ϊ���k�����j�ǺϷ���
//
//        cout << f[m][0] << endl;//ǰm���ǰں���, �ҵ�m��û��ͻ����������������, Ҳ�������Ҫ���״̬
//    }
//    return 0;
//}

//1����Ŀ�ȼ��ڰ����������ŷ���С���顣��������д���з���С���飩
//2��f(i, j) :�ڷŵ�i�У�i - 1����������ŵķ���״̬Ϊj�ķ�������jΪһ��������������Χ��0������λ���Ķ����Ʒ�Χ��"f[i][j]��ʾ�Ѿ�����ǰi�У��ӵ�i-1��������ķ����״̬��j�ķ�����"
//3��i - 1��ת�Ƶ�i�����㣺(j & k) == 0, ����k��i - 1�е�״̬��
//4��ͬʱÿ����Ч��״̬���㣺j | k �����������������㣬��ÿ������ֻ��������ĸ������

//Ĭд
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//const int N = 12, M = 1 << N;
//int a, b;
//long long f[N][M];//��һ������, �ڶ�����״̬
//bool st[M];
//
//int main()
//{
//	while (cin >> a >> b, a || b)
//	{
//		memset(st, 1, sizeof st);
//		//Ԥ����st����
//		for (int i = 0; i < (1 << a); i++)
//		{
//			int cnt = 0;
//			//st[i] = true;//�������ַ�ʽ, ֱ��ȫ�����õķ�ʽ����, Ϊʲô��?
//			//i�Ǵ�0 Ȼ��ÿ�� +1, ���������еĶ������������������
//			//���Դ���ÿһ��ѭ����Ҫ�����еĶ�����Ϊtrue, ע�� : ��������ѭ������������true
//
//			for (int j = 0; j < a; j++)//����ûһ��λ��
//			{
//				if ((i >> j) & 1)//����1�͸�cnt��1
//				{
//					if (cnt & 1) st[i] = false;
//					cnt = 0;//ֻҪ�ܽ����ѭ����ֱ�ӹ���
//				}
//				else  cnt++;
//			}
//			if (cnt & 1) st[i] = false;
//		}
//
//		memset(f, 0, sizeof f);
//		f[0][0] = 1;
//		for (int i = 1; i <= b; i++)
//
//			for(int j = 0; j < (1 << a);j++)
//				for (int k = 0; k < (1 << a); k++)
//
//					if ((j & k) == 0 && st[j | k])//�Ϸ��Ļ��Ÿ���f
//						f[i][j] += f[i - 1][k];
//
//		cout << f[b][0] << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//const int N =12, M = 1 << N;
//long long f[N][M];
//bool st[M];
//int n, m;
//
//int main()
//{
//    while(cin >> n >> m , n || m)
//    {
//        memset(st, 1, sizeof st);//������ѹ�������е�״̬
//        for(int i = 0 ; i < (1 << n); i++)//����ÿһ��״̬
//        {
//            int cnt = 0;
//            for(int j = 0 ; j < n ; j ++)//��ÿһ��״̬��ÿһλ
//            {
//                if((i >> j)  & 1)
//                {
//                    if(cnt & 1) st[i] = false;
//                    cnt = 0;
//                }
//                else cnt ++ ;
//            }
//            if(cnt & 1) st[i] = false;
//        }
//        memset(f, 0, sizeof f);//�ڶ���ʹ�����������, Ҳ��Ҫȫ��0, ����ͻ��ص�, ǰ���ε�����ȷ��, �����ȫ�Ǵ����
//        f[0][0] = 1;
//        for(int i = 1 ; i <= m; i ++)//����ÿһ��
//            for(int j = 0 ; j <( 1 << n); j++)
//                for(int k = 0 ; k < (1 << n); k++)
//                {
//                    //�Ա�ÿһ��ǰ����
//                    if(st[k | j] && (k & j) == 0)
//                        f[i][j] += f[i-1][k];
//                }
//        cout << f[m][0] << endl;
//    }
//
//    return 0;
//}//�Ѹ���

//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//const int N = 12, M = 1 << N;
//long long f[N][M];
//bool st[M];
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m, n || m)
//	{
//		memset(st, 1, sizeof st);
//		for (int i = 0; i < 1 << n; i++)
//		{
//			int cnt = 0;
//			for (int j = 0; j <= n; j++)
//			{
//				if ((i >> j) & 1)
//				{
//					if (cnt & 1) st[i] = false;
//					cnt = 0;
//				}
//				else cnt++;
//			}
//			if (cnt & 1)st[i] = false;
//		}
//			memset(f, 0, sizeof f);
//			for (int i = 1; i <= m; i++)
//				for (int j = 0; j < 1 << n; j++)
//					for (int k = 0; k < 1 << n; k++)
//						if ((j & k) == 0 && st[j | k])
//							f[i][j] += f[i - 1][k];
//
//			cout << f[m][0] << endl;
//		}
//	}
//	return 0;
//}//�Ѹ���

//���Hamilton·�� - ����������
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20, M = 1 << N;
//
//int n;//ͼ��һ��һά��ͼ
//int w[N][N];//����ÿһ�����Ȩ��
//int f[M][N];//״̬����,M��ʾ������λ, ��ʾÿ�����״̬, N��ʾ���ͣ�����Ǹ�����
////����ת�Ƶ���, ���ϸ��㵽��һ����ʱ����Сֵ, ���Ѿ�����˵���һ�������Сֵ�ڼ���ת�Ƶ���һ�����Ȩ��w[i][j]
////��һ����ľ����ڶ�����λ���������������λ
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> w[i][j];//����n������
//
//    memset(f, 0x3f, sizeof f);//���������, ���Գ�ʼ�������
//    f[1][0] = 0;//ͣ�ڵ�0������,��û��ʼ,���ǳ�ʼ����0
//
//    for (int i = 0; i < 1 << n; i++)//����ÿһ��״̬
//        for (int j = 0; j < n; j++)//�������״̬��ÿ����
//            if (i >> j & 1)//������״̬��������߹��˵Ļ�
//                for (int k = 0; k < n; k++)//������������һ����
//                    if (i >> k & 1)//��һ�����ǺϷ��Ļ�, Ҳ�����߹��Ļ�
//                        f[i][j] = min(f[i][j], f[i - (1 << j)][k] + w[k][j]);//�����Ÿ���һ��
//
//    cout << f[(1 << n) - 1][n - 1];//������,���ͣ��n-1�ĵ�, �����еĵ㶼�߹�, �ӵ�0������n-1������1, Ҳ���� (1 << n) -1
//
//    return 0;
//}
//
////Ĭд
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//const int N = 21, M = 1 << N;
//
//int w[N][N];
//int f[M][N];
//int n;
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> w[i][j];
//
//    memset(f, 0x3f, sizeof f);
//
//    for(int i = 0 ; i < 1 << n; i ++)//�������е����
//        for(int j = 0 ; j < n ;j ++)
//            if(i >> j & 1 )
//                for(int  k= 0 ; k < n; k ++)
//                    if (i >> k & 1)
//                        f[i][j] = min(f[i][j], f[i - (1 << j)][k] + w[k][j]);
//    cout << f[1 << n - 1][n - 1] << endl; 
//    return 0;
//}
