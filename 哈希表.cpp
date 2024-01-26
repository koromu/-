//#include <cstring>
//#include <iostream>
//
//using namespace std;
//
//const int N = 200003, null = 0x3f3f3f3f;
//
//int h[N];
//
//int find(int x)
//{
//    int t = (x % N + N) % N;
//    while (h[t] != null && h[t] != x)//如果不null, 说明这个坑位满人了, 或者这个坑位另一个世界的自己已经蹲注了
//    {
//        t++;//去找下一个坑位
//        if (t == N) t = 0;//如果找到了最后一个坑位, 绝望了, 选择从头开始找, 因为不是从0开始找到
//    }
//    return t;//最后返回蹲在哪里了
//}//所以说明, 这个200003是足够所以的数存储的, 为什么呢, 因为是经验
//
//int main()
//{
//    memset(h, 0x3f, sizeof h);//按字节改变, 每个字节都改编成3f, 一个整型四个四字节, 也就是 __ __ __ __  
//                              //                                                   0f 0f 0f 0f
//
//    int n;
//    scanf("%d", &n);
//
//    while (n--)
//    {
//        char op[2];
//        int x;
//        scanf("%s%d", op, &x);
//        if (*op == 'I')
//            h[find(x)] = x;
//        else
//        {
//            if (h[find(x)] == null) puts("No");//等于null也就是没有发生改变, 也就是没有插入数字
//            else puts("Yes");
//        }
//    }
//
//    return 0;
//}
//
//
//const int N = 100003;//找到第一个大于最大要求的质数
//
//int h[N], e[N], ne[N], idx;
//
//void insert(int x)
//{
//    int k = (x % N + N) % N;
//    e[idx] = x;//现在e这个数组中的用到了idx的位置存入x这个值
//    ne[idx] = h[k];//在记录这个x的下一个节点是h[k], 指向了原本h[k]的位置
//    h[k] = idx++;//然后让h[k]指向idx
//    //所以实际上还是h[k]指向idx, idx指向h[k]指向的末尾, 所以h[k]实际上就是ne[k];
//}//插入一个数字
//
//bool fi(int x)
//{
//    int k = (x % N + N) % N;//得到哈希数
//    for (int i = h[k]; i != -1; i = ne[i])//找到h[k]这个链子的头, 然后i = ne[k] ,然后一直i = ne[i]
//        if (e[i] == x)//每次判断是否是找到了值等于目标数字
//            return true;
//
//    return false;//如果全都没找到就返回找不到, 或者当h[k]直接就是-1, 也就是表的上指向的ne都是-1, 根本没有存入数字
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    memset(h, -1, sizeof h);//h的每一个位置都是指向下一个节点, 初始时全部都是指向-1, 也就是尾节点
//
//    while (n--)
//    {
//        char op[2];
//        int x;
//        scanf("%s%d", op, &x);
//
//        if (*op == 'I') insert(x);
//        else
//        {
//            if (fi(x)) puts("Yes");
//            else puts("No");
//        }
//    }
//
//    return 0;
//}

//总结, 拉链法用100003 开放寻址法用200003
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int N = 200001;
//
//int h[N];//只需要一个数组就可以存入所有的数
//int null = 0x3f3f3f3f;
//
//int fin(int x)
//{
//    //首先得到哈希值
//    int k = (x % N + N) % N;
//    //然后再h数组中从h[k]开始找 
//    while (h[k] != x && h[k] != null)//如果这个k存了数, 而且不是我们想要存的数, 并且这个数不是null, 是一个真正的数
//    {
//        k++;
//        if (k == N)//注意是下标k等于边界了才要进入, 不是h[k]
//            k = 0;
//    }//总能找到要存入的坑位的
//    return k;
//}
//
//int main()
//{
//    int n; scanf("%d", &n);
//    memset(h, 0x3f, sizeof h);//初始化, 注意这个函数在cstring中
//    while (n--)
//    {
//        int x;
//        char op[2]; 
//        scanf("%s%d", op, &x);//注意数组名就是地址
//        if (op[0] == 'I')
//            h[fin(x)] = x;
//        else
//        {
//            if (h[fin(x)] == null)
//                puts("No");
//            else puts("Yes");
//        }
//
//    }
//
//    return 0;
//}