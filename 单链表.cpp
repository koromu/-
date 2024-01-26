//#include <iostream>
//
//using namespace std;
//const int N = 100010;
//
////要两个数组, 一个存值, 一个存next
//int v[N], ne[N];
//
//int m, idx, head, x;//idx现在可以操作的指针
//
////初始化
//void init()
//{
//	head = -1;
//	idx = 0;
//}
//
////实现功能
////1. 向表头插入一个数
//void in_head(int x)
//{
//	v[idx] = x;//存入下标为idx的值
//	ne[idx] = head;//查到head后面, 那就是指向原本head指向的地方
//	head = idx++;
//	//此后还需要移动idx指向下一个要操作的下标, idx++ 可以合并成一个步骤
//	return;
//}
//
////2. 删除第k个(也就是下标为k-1)插入后面的数,也就是直接让下标k-1的直接指向下下个节点
//void rem(int k)
//{
//	if (k == 0)
//	{
//		head = ne[head];
//		return;
//	}
//	//记得删除的是k-1哦
//	ne[k - 1] = ne[ne[k - 1]];//ne[k-1]就是下一个节点 ne[下一个节点]就是下下个节点
//	return;
//}
//
////3. 在第k个插入的数后面插入一个数
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
