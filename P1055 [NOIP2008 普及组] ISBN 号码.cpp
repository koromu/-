//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
////ASCII的数字0 对应 48 ,所以字符0可以减去48得到对应整数
//
//int main()
//{
//    /*    vector<string> v1;
//        for(int i=0;i<13;i++)
//        {
//            string s;
//            cin >> s;
//            v1.push_back(s);
//        }*/
//    char arr[14];
//    scanf("%s", arr);
//    int count = 0;
//        int k = 1;
//    for (int i = 0; i < 11; i++)
//    {
//        if (arr[i] != '-')
//        {
//            int a = arr[i];
//            count += (a -48) * k;
//            k++;
//        }
//    }
//    if ((arr[12] - 48) == count % 11)
//    {
//        printf("Right");
//    }
//    else
//    {
//        arr[12] = ((count % 11) + 48);
//        for (int i = 0; i < 13; i++)
//        {
//            printf("%c", arr[i]);
//        }
//    }
//
//    return 0;
//}