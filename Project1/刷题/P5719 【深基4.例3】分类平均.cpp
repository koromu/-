#include <iostream>
using namespace std;

int jud(int x, int k)
{
   if (!(x % k))
       return 1;
   else
       return 0;
}

int main()
{
   int n, k;
   float countA = 0.0, countB = 0.0, a = 0.0, b = 0.0;
   cin >> n >> k;
   if (k == 0)
       return 0;
   for (int i = 1.0; i <= n; i++)
   {
       if (jud(i, k))
       {
           countA += (float)i;//�����1, ����A��, ��0ΪB��
           a++;
       }
       else
       {
           countB += (float)i;
           b++;
       }
   }
   countB = countB / b;
   countA = countA / a;
   printf("%.1f, %.1f", countA, countB);
   return 0;
}