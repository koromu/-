//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int N = 1000010;
//
//int q[N], a[N];//q存a的中目前用到的下标, a存原数据
//int head = 0, tail = -1;
//
//
//int main()
//{
//    int n, k;
//    scanf("%d%d", &n, &k);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//
//    for (int i = 0; i < n; i++)//遍历a
//    {
//        //判断头元素是不是在窗口内
//        if (head <= tail && i - k + 1 > q[head]) head++;//q[head]表示窗口的第一个元素的下标, i- k + 1 表示当前可以有的最小的起始位置, 如果当前的头下标比起始位置还要小的话, 就需要弹出头下标
//
//        //判断需要新插入的元素在什么地位
//        while (head <= tail && a[i] <= a[q[tail]]) tail--;//注意相同也可以弹出
//        q[++tail] = i;
//        //打印最小值, 判断有没有头
//        if (i > k - 1) printf("%d ", a[q[head]]);//至少当窗口形成的时候才开始打印
//    }
//    //找出最小的 
//    for (int i = 0; i < n; i++)
//    {
//        if (head <= tail && i - k + 1 > q[head]) head++;
//        while (head <= tail && a[i] >= a[q[tail]]) tail--;
//        q[++tail] = i;
//        if (i > k - 1) printf("%d ", a[q[head]]);
//    }
//    return 0;
//}