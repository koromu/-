//#include <iostream>
//
//using namespace std;
//const int N = 100010;
//
////Ҫ��������, һ����ֵ, һ����next
//int v[N], ne[N];
//
//int m, idx, head, x;//idx���ڿ��Բ�����ָ��
//
////��ʼ��
//void init()
//{
//	head = -1;
//	idx = 0;
//}
//
////ʵ�ֹ���
////1. ���ͷ����һ����
//void in_head(int x)
//{
//	v[idx] = x;//�����±�Ϊidx��ֵ
//	ne[idx] = head;//�鵽head����, �Ǿ���ָ��ԭ��headָ��ĵط�
//	head = idx++;
//	//�˺���Ҫ�ƶ�idxָ����һ��Ҫ�������±�, idx++ ���Ժϲ���һ������
//	return;
//}
//
////2. ɾ����k��(Ҳ�����±�Ϊk-1)����������,Ҳ����ֱ�����±�k-1��ֱ��ָ�����¸��ڵ�
//void rem(int k)
//{
//	if (k == 0)
//	{
//		head = ne[head];
//		return;
//	}
//	//�ǵ�ɾ������k-1Ŷ
//	ne[k - 1] = ne[ne[k - 1]];//ne[k-1]������һ���ڵ� ne[��һ���ڵ�]�������¸��ڵ�
//	return;
//}
//
////3. �ڵ�k����������������һ����
//void in(int k, int x)
//{
//	v[idx] = x;
//	ne[idx] = ne[k - 1];
//	ne[k - 1] = idx++;
//	return;
//}
//int main()
//{
//	init();
//	cin >> m;
//	while (m--)
//	{
//		char s; cin >> s;
//		if (s == 'H')
//		{
//			scanf("%d", &x);
//			in_head(x);
//		}
//		else if (s == 'D')
//		{
//			scanf("%d", &x);
//			rem(x);
//		}
//		else
//		{
//			int k; scanf("%d%d", &k, &x);
//			in(k, x);
//		}
//	}
//	for (int i = head; i != -1; i = ne[i])	printf("%d ", v[i]);
//	return 0;
//}
