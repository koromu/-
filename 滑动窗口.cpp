//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int N = 1000010;
//
//int q[N], a[N];//q��a����Ŀǰ�õ����±�, a��ԭ����
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
//    for (int i = 0; i < n; i++)//����a
//    {
//        //�ж�ͷԪ���ǲ����ڴ�����
//        if (head <= tail && i - k + 1 > q[head]) head++;//q[head]��ʾ���ڵĵ�һ��Ԫ�ص��±�, i- k + 1 ��ʾ��ǰ�����е���С����ʼλ��, �����ǰ��ͷ�±����ʼλ�û�ҪС�Ļ�, ����Ҫ����ͷ�±�
//
//        //�ж���Ҫ�²����Ԫ����ʲô��λ
//        while (head <= tail && a[i] <= a[q[tail]]) tail--;//ע����ͬҲ���Ե���
//        q[++tail] = i;
//        //��ӡ��Сֵ, �ж���û��ͷ
//        if (i > k - 1) printf("%d ", a[q[head]]);//���ٵ������γɵ�ʱ��ſ�ʼ��ӡ
//    }
//    //�ҳ���С�� 
//    for (int i = 0; i < n; i++)
//    {
//        if (head <= tail && i - k + 1 > q[head]) head++;
//        while (head <= tail && a[i] >= a[q[tail]]) tail--;
//        q[++tail] = i;
//        if (i > k - 1) printf("%d ", a[q[head]]);
//    }
//    return 0;
//}