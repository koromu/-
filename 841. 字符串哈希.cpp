//��Ҫ�Ĺ�ϣ��ʽ - �ַ���ǰ׺��ϣ��
//Ԥ���������ǰ׺ �ַ����� ��ϣֵ

//��ζ���ǰ׺�Ĺ�ϣֵ, ���ַ�������p���Ƶ���
//Ȼ��ӳ��
//���ǲ���ӳ���0

//�ٶ��������ظ�, ��ͻp = 131 ����13331
//				   Q = 2^64  -> ֱ��unsigned long long 
//�������ֵ����ʲ���ͻ

//����������ǰ׺�Ĺ�ϣ�õ������Ӵ��Ĺ�ϣֵ


//�̵�һ�ٱ�������ϣ��, ����, Ȼ�����
//��ʽ : h[R] - h[L] * p ^ (R - L + 1;)


//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//typedef unsigned long long ull;
//
//const int N = 100000, P = 131;
//
//int n, m;
//char str[N];
//ull p[N], h[N];//Ԥ����p�Ķ��ٴη�, �����λ
//
//ull get(int l, int r)//���l��r֮��Ĺ�ϣֵ�Ĺ�ʽ
//{
//	return h[r] - h[l - 1] * p[r - l + 1];
//}
//
//int main()
//{
//	scanf("%d%d%s", &n, &m, str + 1);
//	//��ʼ��ǰ׺��ϣ, ���ҳ�ʼ��ǰ׺��ϣ
//	p[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		p[i] = p[i - 1] * P;
//		h[i] = h[i - 1] * P + str[i];//����������һλ, Ȼ���ڸ�λֱ�ӷ�str[i]��Ϊ�������� P ��0�η�, ����1
//	}
//	//����nѯ��
//	while (n--)
//	{
//		int l1, r1, l2, r2;
//		scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
//		//��l1, r1 ��l2, r2�������Ƿ���ͬ
//		if (get(l1, r1) == get(l2,r2))
//		{
//			puts("Yes\n");
//		}
//		else puts("No\n");
//	}
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//const int N = 100010;
//typedef unsigned long long ull;
////��ǰ׼��
//
//ull h[N], p[N];//h�Ǵ��ǰ׺��ϣ, p�Ǵ��Ԥ����õĴη�, ���ڽ�λ
//int n, m, P = 131;//��¼����n, m�β���
//char str[N];//����ַ���
//
//int get(int l, int r)
//{
//    //�õ�, l��r�Ĺ�ϣֵ
//    return h[r] - h[l - 1] * p[r - l + 1];//��λ���
//}
//
//
//int main()
//{
//    scanf("%d%d%s", &n, &m, str + 1);//��1��ʼ����ַ���, �ɲ����Դ�0��ʼ, ��Ȼ����, ����Ϊ�˰�ǰ׺��ϣ �� �η�����һ����ʹ�1 ��ʼ, �η����ܴ�0 ��ʼ
//    p[0] = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        //Ԥ����η���ǰ׺��ϣ
//        p[i] = p[i - 1] * P;
//        h[i] = h[i - 1] * P + str[i];
//    }
//
//    while (m--)
//    {
//        int l1, r1, l2, r2;
//        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
//
//        if (get(l1, r1) == get(l2, r2))
//            puts("Yes");
//        else
//            puts("No");//puts���Զ�����
//
//    }
//
//
//    return 0;
//}