////#include<stdio.h>
////int ans[3];
////int n, sum;
////
////void jud(int x)
////{
////    ans[0] = (n % 3 == 0);
////    ans[1] = (n % 5 == 0);
////    ans[2] = (n % 7 == 0);
////    for (int i = 0; i < 3; i++)
////        if (ans[i])
////            sum++;
////}
////int main()
////{
////    scanf("%d", &n);
////    jud(n);
////    if (sum == 3)
////        printf("%d能同时被3、5、7整除", n);
////    else if (sum == 2)
////    {
////        if (ans[0] && ans[1])
////            printf("%d能同时被3、5整除", n);
////        else if (ans[0] && ans[2])
////            printf("%d能同时被3、7整除", n);
////        else
////            printf("%d能同时被5、7整除", n);
////    }
////    else if (sum == 1)
////    {
////        if (ans[0])
////            printf("%d能被3整除", n);
////        else if (ans[1])
////            printf("%d能被5整除", n);
////        else
////            printf("%d能被7整除", n);
////    }
////    else
////        printf("%d不能被3、5、7整除", n);
////    return 0;
////}
////#define _CRT_SECURE_NO_WARNINGS
////#include<stdio.h>
////int c;
////int i;
////int main()
////{
////    char s[5];
////    scanf("%s", &s);
////    for (i = 0; i < 5; i++)
////    {
////        while (!(s[i] - '0'));//去掉前导0
////        break;
////    }
////    c = i + 1;
////    printf("there are %d,", c);
////    for (int i = sizeof(s); i >= 0; i--)
////    {
////        if (s[i] >= '0' && s[i] <= '9')
////            printf(" %c", s[i]);
////    }
////
////    return 0;
////}
//#include <iostream>
//#include <string.h>
//using namespace std;
//string s;
//int main()
//{
//    cin >> s;
//    cout << "there are " << s.size() << ", ";
//    for (int i = s.size() - 1; i >= 0; i--)
//        cout << s[i] << " ";
//
//    return 0;
//}