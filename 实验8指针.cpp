#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3 };
//	int* p, i;
//	p = a;
//	for (i = 0; i < 3; i++)
//		printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	void swap(int* pt1, int* pt2);
//	int a, b, c; int* p1, * p2, * p3;
//	printf("请输入三个数a,b,c:");
//	scanf("%d,%d,%d", &a, &b, &c);
//	p1 = &a; p2 = &b; p3 = &c;
//	if (a > b) swap(p1, p2);
//	if (a > c) swap(p1, p3);
//	if (b > c) swap(p2, p3);
//	printf("排序后的三个数为：%d,%d,%d\n", a, b, c);
//	return 0;
//}
//void swap(int* pt1, int* pt2)
//{
//	int p;
//	p = *pt1;
//	*pt1 = *pt2;
//	*pt2 = p;
//}
//#include <stdio.h>
//int main()
//{
//	void move(int* pointer);
//	int a[3][3] = {0}, * p, i, j;
//	printf("请输入数组矩阵元素：\n");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", *(a + i) + j);
//	p = a[0];
//	move(p);
//	printf("转置后的矩阵为：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", *(*(a + i) + j));
//		printf("\n");
//	}
//	return 0;
//}
//void move(int(* pt)[3])
//{
//	int i, j, * t = 0;
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++)
//		{
//			*t = **(pt + 3 * i + j);
//			**(pt + 3 * i + j) = **(pt + 3 * j + i);
//			**(pt + 3 * j + i) = *t;
//		}
//}
//#include <stdio.h>
//int main()
//{
//	void move(int* pointer);
//	int a[3][3], * p, i, j;
//	printf("请输入数组矩阵元素：\n");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", &a[i][j]);
//	p = &a[0][0];
//	move(p);
//	printf("转置后的矩阵为：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//void move(int* pt)
//{
//	int i, j, t;
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++)
//		{
//			t = *(pt + 3 * i + j);
//			*(pt + 3 * i + j) = *(pt + 3 * j + i);
//			*(pt + 3 * j + i) = t;
//		}
//}
//1 4 7
//2 5 8
//3 6 9

//#include <stdio.h>
//int main()
//{
//	void move(int* pointer);
//	int a[3][3] = { 0 }, * p, i, j;
//	printf("请输入数组矩阵元素：\n");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", *(a + i) + j);
//	p = &a[0][0];
//	move(p);
//	printf("转置后的矩阵为：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", *(*(a + i) + j));
//		printf("\n");
//	}
//	return 0;
//}
//void move(int* pt)
//{
//	int i, j, t;
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++)
//		{
//			t = *(pt + 3 * i + j);
//			*(pt + 3 * i + j) = *(pt + 3 * j + i);
//			*(pt + 3 * j + i) = t;
//		}
//}//更改了输入输出

//形参改成指向一维数组的指针变量
//#include <stdio.h>
//int main()
//{
//	void move(int (* pointer)[3]);
//	int a[3][3], (* p)[3], i, j;
//	printf("请输入数组矩阵元素：\n");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", &a[i][j]);
//	p = a;
//	move(p);
//	printf("转置后的矩阵为：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//void move(int (*pt)[3])
//{
//	int i, j, t;
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++)
//		{
//			t = *(pt[i] + j);
//			*(pt[i] + j) = *(pt[j] + i);
//			*(pt[j] + i) = t;
//		}
//}
// 0 0 - 0 0
// 0 1 - 1 0
// 0 2 - 2 0 
// 1 0

//
//#include <stdio.h>
//const int N = 100010;
//int strlen(char a[])
//{
//	int cnt = 0;
//	for (int i = 0; i < 100010; i++)
//	{
//		if (a[i] != '\0')
//			cnt++;
//		else break;
//	}
//	return cnt;
//}
//
//int main()
//{
//	char a[N];
//	scanf("%s", a);
//	printf("%d", strlen(a));
//	return 0;
//}
//#include <stdio.h>
//#include <algorithm>
//#include <math.h>
//
//
//void swap(int& x, int& y) { int tmp = x; x = y; y = tmp; };
//
//void move(int a[5][5])
//{
//    int ma = -2e9, mi = 2e9;
//    int x1, y1, x2, y2;
//    for (int i = 0; i < 5; i++)
//        for (int j = 0; j < 5; j++)
//        {
//            if (a[i][j] > ma)
//            {
//                ma = a[i][j];
//                x1 = i, y1 = j;
//            }
//            if (a[i][j] < mi)
//            {
//                mi = a[i][j];
//                x2 = i, y2 = j;
//            }
//        }
//    swap(a[x2][y2], a[0][0]);
//    swap(a[x1][y1], a[2][2]);
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++)
//            printf("%d ", a[i][j]);
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int a[5][5];
//    for (int i = 0; i < 5; i++)for (int j = 0; j < 5; j++)
//            scanf("%d", &a[i][j]);
//
//    move(a);
//    return 0;
//}
