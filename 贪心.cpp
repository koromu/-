#define _CRT_SECURE_NO_WARNINGS

//����ѡ��
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//int n;
//struct Range
//{
//    int l, r;
//}range[N];
//
//bool cmp(Range a, Range b)
//{ return a.l < b.l; }
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) scanf("%d%d", &range[i].l, &range[i].r);
//
//    sort(range, range + n,cmp);//����˵����������ź�˳��
//
//    int res = 0, ed = -2e9;//��¼���һ���ڵ�
//    for (int i = 0; i < n; i++)
//        if (range[i].l > ed)//�ж�����������ڵ��ڲ��ڵ�ǰ���������ҽڵ�֮ǰ, �������, ˵���Ѿ��е㸲�����������, �����, ˵��û�е㸲�����������, ��Ҫ�����ж�, �����µĵ�, Ȼ������������
//        {
//            res++;//���������һ
//            ed = range[i].r;//�����һ������ĵ���µ�
//        }
//
//    printf("%d\n", res);//��ӡ��Ҫ���ٸ���
//
//    return 0;
//}

//Ĭд
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//int n;
//struct range {
//	int l, r;
//}ranges[N];//�ýṹ��������
//
//bool cmp(range a, range b)
//{
//	return a.r < b.r;//Ϊʲô�ǰ��Ҷ˵�������?
//	//һ����������, �����Ÿ���, ��˵�, �жε�, ˫�ؼ���
//	//��������˵�����Ҳ��???
//} 
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) scanf("%d%d", &ranges[i].l, &ranges[i].r);//����ÿ������
//
//	sort(ranges, ranges + n, cmp);
//	//�ź�����
//
//	int ans = 0, ed = -2e9;
//	for (int i = 0; i < n; i++)
//	{
//		if (ranges[i].l > ed)//���û��������Ļ�, �͸�������, Ҳ���ǵ�i����������һ��������ұ�
//		{
//			ans++;
//			ed = ranges[i].r;
//		}
//	}
//
//	cout << ans;
//	return 0;
//}
//���������������
//#include <iostream>
//#include <vector>
//using namespace std;
//typedef pair<int, int> PII;
//int main()
//{
//    int n, l, r, res = 0;
//    vector<PII> v;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> l >> r;
//        v.push_back({ l,r });//����ÿһ������
//    }
//    sort(v.begin(), v.end());//�ȸ���first����, Ҳ������˵�
//    l = -2e9, r = -2e9;
//    for (int i = 0; i < v.size(); ++i)//�ӵ�һ����˵㿪ʼ����
//    {
//        if (v[i].first <= r)//����������˵�����һ��������Ҷ˵�����, ˵�������������������, ���ȡ��������Ľ���, ���������������Ҷ˵�, ��Ϊֻ�н����Ĳ��ֵĵ�, �����������϶��еĵ�
//        {
//            l = max(l, v[i].first);
//            r = min(r, v[i].second);
//        }
//        else res += 1, l = v[i].first, r = v[i].second;//�������, Ҳ�����µ�������������һ�������������, �������ڽ�����Χ����, ����Ҫȡ�µĵ���, ��Ϊֻ��һ������, ���Ծ�ȡ������ϵ����Ҷ˵�
//    }//�ǵ����ӵ��ֵŶ
//    cout << res;
//    return 0;
//}//��˵�����, ������ʵ���Ҷ�����

//����ཻ��������
//����ཻ����Ϊʲô������ȡ��Ĵ�����ͬ?
//����ȡ�����ȡÿ���������ཻ������Ľ�����һ����, ��ȡ��һ�����ԭ������Ϊ���ཻ, ����ȡ��ÿ���㶼��һ�����ཻ�ļ���, ����ཻ����ȡͬһ����, ��Ϊ��ȡ���ٵĵ�, ȡ�����Ҷ˵�
//��������ͬ��ԭ��
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//int n;
//bool cmp(range a, range b)
//{
//    return a.r < b.r;
//}
//struct range{
//    int l, r;
//}ranges[N];
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) scanf("%d%d", &ranges[i].l, &ranges[i].r);
//
//    sort(ranges, ranges + n);
//
//    int res = 0, ed = -2e9;
//    for (int i = 0; i < n; i++)
//        if (ed < ranges[i].l)
//        {
//            res++;
//            ed = ranges[i].r;
//        }
//
//    printf("%d\n", res);
//
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//const int N = 100010;
//int n;
//struct range
//{
//    int l, r;
//}ranges[N];
//
//bool cmp(range a, range b)
//{
//    return a.l < b.l;
//}
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        int l, r;
//        scanf("%d%d", &l, &r);
//        ranges[i] = { l, r };
//    }
//    sort(ranges, ranges + n, cmp);
//
//    priority_queue<int, vector<int>, greater<int>> heap;//���ȶ���, С����
//    for (int i = 0; i < n; i++)
//    {
//        auto r = ranges[i];//��ȡһ������
//        if (heap.empty() || heap.top() >= r.l) 
//            heap.push(r.r);//����������������ߵ��Ҷ˵���µ��������˵�Ҫ��, ˵���϶��н���, ����һ������, ˵��Ҫ�������� 
//        else//heap.top >= range[i].l, ��ǰ�������˵����С���Ҷ˵㻹ҪС���ŵ��κ�һ�鶼�����ཻ���֡�
//        {
//            heap.pop(); //����������������ߵ��Ҷ˵���µ��������˵�ҪС, ˵��û�н���, ˵�������µ���. ��ΪʲôҪ��ɾȥ����ߵ��Ҷ˵�?
//            //��Ϊ����ֱ��Ŀǰ��֪�������ٺ���С�ļ���û�н���, ���Լ�����С�ļ��ϵ�����, �Ѵ�����С�ļ��ϵ���ĵ�ɾȥ
//            heap.push(r.r);//������������ԭ�� : ��Ϊ�ǰ���˵������, ������������жϹ���, ��������϶�������������С���Ҷ˵�û�н���, ����Ҫɾȥ������.
//        }
//    }
//    printf("%d\n", heap.size());
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 100010;
//int n;
//struct Range
//{
//    int l, r;
//}range[N];
//
//bool cmp(Range a, Range b)
//{
//    return a.l < b.l;
//}
//
//int main()
//{
//    int st, ed;
//    scanf("%d%d", &st, &ed);//����Ŀ������
//    scanf("%d", &n);//������������
//    for (int i = 0; i < n; i++)
//    {
//        int l, r;
//        scanf("%d%d", &l, &r);
//        range[i] = { l, r };
//    }//�����������
//
//    sort(range, range + n, cmp);//������˵�����
//
//    int res = 0;//ʹ�õ�������
//    bool success = false;//�Ƿ��ܹ�����
//    for (int i = 0; i < n; i++)
//    {
//        int j = i, r = -2e9;//˫ָ���㷨
//        while (j < n && range[j].l <= st)
//        {
//            r = max(r, range[j].r);
//            j++;//����һ�ο���Ҫ�õ��������һ��, Ȼ�󵽴���һ��Ҫʹ�õ����伯�ϵ����
//        }//���ѭ���ҵ���˵��ܸ���st��������, �Ҷ˵���Զ�ĵ�
//
//        if (r < st)//�����û�ҵ���˵㸲��st��, �Ǿ�ֱ�ӷ���-1
//        {
//            res = -1;
//            break;
//        }//�������Ҷ˵�
//
//        res++;//ʹ����һ������
//        if (r >= ed)//������������, �Ѿ�������ed
//        {
//            success = true;//�ҵ���, ����ѭ��
//            break;
//        }
//
//        st = r;//��û�и�����ȫ, ����һ��st, ���µ����������Ҷ˵�
//        i = j - 1;//Ϊ�������ѭ����i���j
//    }
//
//    if (!success) res = -1;//���ʧ����, �ͻ�����ж�, ����-1
//    printf("%d\n", res);//�ɹ��˾�ֱ�����
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//struct range {
//    int l, r;
//}ranges[N];
//
//bool cmp(range a, range b)
//{
//    return a.l < b.l;
//}
//
//int main()
//{
//    int st, ed, n;
//    cin >> st >> ed;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        scanf("%d%d", &ranges[i].l, &ranges[i].r);
//
//    sort(ranges, ranges + n, cmp);
//
//    int res = 0; bool success = false;
//    for (int i = 0; i < n; i++)
//    {
//        int j = i, r = -2e9;
//        while (j < n && ranges[j].l <= st)
//        {
//            r = max(r, ranges[j].r);//���º�, �ͻ�ɹ�
//            j++;
//        }
//
//        if (r < st)
//        {
//            res = -1;
//            break;
//        }
//        res++;
//        if (r >= ed)
//        {
//            success = true;
//            break;
//        }
//        st = r;//����û�и��ǵ���������st
//        i = j - 1;
//    }
//    if (!success) res = -1;
//    cout << res;
//
//    return 0;
//}
//�ϲ�����
//̰������, Ҳ��Huffman������ - ��ȫ������(ÿһ���ڵ�һ���������ӽڵ�)
//ÿ�κϲ���С������,�Ϳ��Եõ����Ž�
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	int n; cin >> n;
//	priority_queue<int, vector<int>, greater<int>> heap;//���ȶ��е�С����
//	
//	for (int i = 0; i < n; i++)
//	{
//		int tmp; scanf("%d", &tmp);
//		heap.push(tmp);
//	}
//	int ans = 0;
//	while (!heap.empty())
//	{
//		int x = heap.top(); heap.pop();
//		int y = heap.top(); heap.pop();
//		ans += x + y;
//		heap.push(x + y);//�������γɵ�һ��
//	}
//	cout << ans;
//	return 0;
//}
//����ѡַ
//#include <iostream>
//#include <math.h>
//#include<algorithm>
//using namespace std;
//const int N = 100010;
//int a[N];
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	sort(a, a + n);
//
//	int x = a[(n >> 1)];
//	int ans = 0;
//	for (int i = 0; i < n; i ++ )//�м�ֵ�Ǵ�, ֤�����̲��ǵ���
//	{
//		ans += abs(a[i] - x);
//	}
//	cout << ans;
//}

//�ŶӴ�ˮ
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//int a[N];
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//
//	//�и�֤���õ��ľ���, ǰ����˵�ʱ��Խ��Խ��
//	sort(a, a + n);
//
//	//��ʽ
//	long long num = n, ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ans += a[i] * (num - 1);
//		num--;
//	}
//	cout << ans;
//	return 0;
//}
//ˣ�Ӽ���ţ
//��Ҫ֤����wi + si������Եõ����Ž�
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef pair<int, int> pii;
//
//const int N = 50010;
//pii v1[N];
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int a, b; scanf("%d%d", &a, &b);
//		v1[i] = {a + b, a};//����ֱ������
//	}
//	sort(v1, v1 + n);
//
//	int ans = -2e9, w = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		ans = max(ans, w - (v1[i].first - v1[i].second));///first��a + b - a�õ�����ֵ
//		w += v1[i].second;//wһֱ������, ����Ķ���ȥ�����
//	}
//
//	cout << ans;
//
//	return 0;
//}