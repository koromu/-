//#include <stdio.h>
////#include <cmath>
//const long long mod = 1e9 + 7;
//
//int judge(int a, int b, int x, int y)
//{
//    if (a >= x && b <= y)
//    {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//long long power(int x, int n)
//{
//    long long last = 1;
//    while (n--)
//    {
//        last = x * last;
//        last = last % mod;
//    }
//
//    return last;
//}
//
//int main()
//{
//    int n, x, y;
//    scanf("%d %d %d", &n, &x, &y);
//    int count = 0;
//    int a, b;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d %d", &a, &b);
//        count = count + judge(a, b, x, y);
//    }
//    int last = power(2, count) - 1;
//    last = last % mod;
//    printf("%d", last);
//    return 0;
//}

//此题中long long 的每次取余数,防止指数爆炸