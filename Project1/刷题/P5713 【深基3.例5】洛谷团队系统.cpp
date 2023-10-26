#include <iostream>

using namespace std;

int five(int x/*题目数*/)
{
   //写一个函数计算,第一种方法的时间
   int count = 0;
   count = 5 * x;

   return count;
}

int three(int x)
{
   //写一个函数计算,第二种方法的时间
   int count;
   count = 3 * x + 11;

   return count;
}

int main()
{
   int x;
   cin >> x;
   //第一种直接一题5分钟
   int a = five(x), b = three(x);//接收两种方法的耗时
   //第二种先来个11分钟,然后一题3分钟
   if (a < b)
   {
       cout << "Local" << endl;
   }
   else
       cout << "Luogu" << endl;


   return 0;
}