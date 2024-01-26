//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int s, v;
//    for (s = 1;s<1441; s++)
//    {
//        v = 1;
//
//        int t1;//路上要的时间
//        //至少要10分钟,然后额外加上路上的时间
//        t1 = s / v;
//        //路上的时间不满一分钟,按一分钟算
//        if ((s % v) != 0)
//        {
//            t1 += 1;
//        }
//        int m = 50;//初始时间
//        int h = 7;
//        for (; t1 != 0; t1--)
//        {
//            //计算分
//            m -= 1;
//            if (m == 0)
//            {
//                //计算时
//                h -= 1;
//                m = 60;
//            }
//            if (h == 0)
//            {
//                h = 24;
//            }
//        }
//        if (m == 60) {
//            m = 0;
//            h += 1;
//        }
//        if (h == 24)
//        {
//            h = 0;
//        }
// 
//        //查看时是几位数
//        if (h >= 10)
//        {
//            if (m >= 10)
//            {
//                printf("%d %d   ", s, v);
//                printf("%d:%d\n", h, m);
//            }
//            else
//            {
//                printf("%d %d   ", s, v);
//                printf("%d:0%d\n", h, m);
//            }
//        }
//        else
//        {
//            if (m >= 10)
//            {
//                printf("%d %d   ", s, v);
//                printf("0%d:%d\n", h, m);
//            }
//            else
//            {
//                printf("%d %d   ", s, v);
//                printf("0%d:0%d\n", h, m);
//            }
//
//        }
//    }
//    return 0;
//}