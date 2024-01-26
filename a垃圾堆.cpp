#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<cstring>//strlen在这个头文件里
//
//int main()
//{
//    int n = 0;
//    char str1[100], str2[100];
//    scanf("%s", &str1);
//    n = strlen(str1);
//    for (int i = n-1, j = 0; i > 0, j < n; i--, j++) {
//        str2[j] = str1[i];//i的下标从n-1开始
//    }
//    for (int i = 0; i < n; i++) printf("%c", str2[i]);
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, i, x[10];
//	int k = 0, j = 0;
//	int min;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		scanf("%d", &x[i]);
//	for (i = 0; i < n; i++)
//	{
//		if (x[i] == 0)
//		{
//			k++;
//		}
//		else
//		{
//			min = abs(x[0]);
//			if (abs(x[i]) <= min)
//				j = i + 1;
//
//		}
//	}
//	printf("%d\n", k);
//	if (k == 0)
//		cout << j;
//	return 0;
//}
//int age(int n)                        //定义age函数
// {int c;
// if(n==1)
//   c=10;
// else
//   c = (n-1)+2;
//   return c;}
//
// #include<stdio.h>
// int main()
// {
//	 int age(int n);                     //声明age函数；
//   printf("%d",age(5));                //在执行age函数时，又调用了age函数；
//   return 0;
// }
//#include <stdio.h>
//
//int main()
//{
//	double s = 1;
//	int i = -1;
//	for (int j = 1; j <= 20; j++)
//	{
//		if (j % 2 == 0)
//			s = s + (1.0 / (2 * j + 1));
//		else
//			s = s + (1.0 / (2 * j + 1)) * i;
//	}
//	printf("%.6lf", s);
//	return 0;
//}
//#include <stdio.h> 
//double get( int n ) {
//	int i, k = 1;
//	double s = 0; 
//	for ( i = 0; i <= n; ++i )
//	{ 
//		s += 1.0 / ( 2*i+1 ) * k; k = -k; 
//	}
//	return s; 
//}
//int main() 
//{ 
//	int n;
//	scanf( "%d", &n ); 
//	printf( "%f", get( n ) ); 
//}