#include <iostream>

using namespace std;

int five(int x/*��Ŀ��*/)
{
   //дһ����������,��һ�ַ�����ʱ��
   int count = 0;
   count = 5 * x;

   return count;
}

int three(int x)
{
   //дһ����������,�ڶ��ַ�����ʱ��
   int count;
   count = 3 * x + 11;

   return count;
}

int main()
{
   int x;
   cin >> x;
   //��һ��ֱ��һ��5����
   int a = five(x), b = three(x);//�������ַ����ĺ�ʱ
   //�ڶ���������11����,Ȼ��һ��3����
   if (a < b)
   {
       cout << "Local" << endl;
   }
   else
       cout << "Luogu" << endl;


   return 0;
}