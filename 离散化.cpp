//#define _CRT_SECURE_NO_WARNINGS
////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////typedef vector<pair<int ,int >> vp;
////typedef vector<int> vi;
////
////
////const int N = 3000010;
////int a[N], s[N];
////
////vp in, fin;//�ֱ��¼��������, ���� �� �������
//////��Ϊ����һͷһβ, ������pair������������
////vi alls;//��¼����Ҫ�õ�����
////int n, m;
////
////int find(int x)//��alls���ҵ���Ӧ���±�
////{//��������alls�ж���
////	int l = 0, r = alls.size() - 1;
////	while (l < r)
////	{
////		int mid = l + r >> 1;
////		if (alls[mid] >= x) r = mid;
////		else l = mid + 1;
////	}
////	return l + 1;
////}
////
////
////int main()
////{
////	cin >> n >> m;
////	int x, c, l, r;//��X�ϼ�C
////	for (int i = 0; i < n; i++)
////	{
////		scanf("%d%d", &x, &c);
////		in.push_back({ x,c });//׼��Ҫ�����c������x
////		alls.push_back(x);//��¼���ж�Ҫ������
////	}
////
////	for (int i = 0; i < m; i++)
////	{
////		scanf("%d%d", &l, &r);
////		fin.push_back({ l,r });
////		alls.push_back(l), alls.push_back(r);
////	}
////	//ȥ��,Ȼ����Խ��в���
////	sort(alls.begin(), alls.end());
////	alls.erase(unique(alls.begin(), alls.end()), alls.end());
////
////	//��������
////	for (int i = 0; i < n; i++)
////	{
////		//����in����, ��x�ϼ�c
////		//��a�ϼ�c
////		int x = find(in[i].first);
////		a[x] += in[i].second;//����find�еķ���ֵ��֪, a�е�Ԫ��ȫ��������һλ��
////	}
////
////	//����ǰ׺��
////	for (int i = 1; i <= alls.size(); i++)
////		s[i] = s[i - 1] + a[i];//Ϊ�˲�ȡ����
////
////	//����ѯ��
////	for (int i = 0;i <= m-1;i++)
////	{
////		//ֱ����ǰ׺�͵Ĳ��������Ĵ�С
////		int l = find(fin[i].first), r = find(fin[i].second);
////		printf("%d\n", s[r] - s[l - 1]);
////	}
////
////	return 0;
////}
//
//#include <iostream>//�����д���
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//const int N = 300010;
////���������������pair
//typedef vector<pair<int, int >> vp;
//typedef vector<int> vi;
//
////������������, ԭ������, ǰ׺������
//vp in, count1;//ǰ�����x�ϼ�c��, ��������͵�
//vi alls;//��¼ȫ�����������
//int a[N], s[N];
//
//int fin(int x)
//{
//    int l = 0, r = alls.size() - 1;
//    while (l < r)
//    {
//        int mid = (l + r) >> 1;
//        if (alls[mid] <= x)l = mid;
//        else r = mid - 1;
//    }
//
//
//
//    return r + 1;//��1��ʼ���±�
//}
//
//int main()
//{
//    int n, m; cin >> n >> m;
//
//    for (int i = 0; i < n; i++)
//    {
//        int x, c; scanf("%d%d", &x, &c);
//        alls.push_back(x);
//        in.push_back({ x, c });
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        int l, r;
//        scanf("%d%d", &l, &r);
//        alls.push_back(l);
//        alls.push_back(r);
//        count1.push_back({ l, r });
//    }
//
//    //ȥ��
//    sort(alls.begin(), alls.end());
//    alls.erase(unique(alls.begin(), alls.end()), alls.end());
//
//    //��������
//    for (int i = 0; i < in.size(); i++)
//        //��in�е�x �� �� c, x �� ����
//        //��alls�������ҵ�ֵΪx���±�,Ȼ��
//        a[fin(in[i].first)] += in[i].second;
//
//    //��ʱa�������Ѿ���ʼ����,����������s
//    for (int i = 1; i <= alls.size() - 1; i++)
//        s[i] = s[i - 1] + a[i];//��s[o]�Ƕ���a[0]����ȥ��?
//    //�� : �ڲ���a�Ĺ�����, ����ֵ������1, ��������alls�е��±���a�ж�������1, ����a��Ҳ�Ǵ�1��ʼ��, ��������Ҫ��ϴ�1��ʼ��ǰ׺��
//
////����count����
//    for (int i = 0; i < count1.size(); i++)
//    {
//        int l = fin(count1[i].first);
//        int r = fin(count1[i].second);
//        printf("%d", (s[r] - s[l] + 1));
//    }
//
//}