//#include <cstring>
//#include <iostream>
//
//using namespace std;
//
//const int N = 200003, null = 0x3f3f3f3f;
//
//int h[N];
//
//int find(int x)
//{
//    int t = (x % N + N) % N;
//    while (h[t] != null && h[t] != x)//�����null, ˵�������λ������, ���������λ��һ��������Լ��Ѿ���ע��
//    {
//        t++;//ȥ����һ����λ
//        if (t == N) t = 0;//����ҵ������һ����λ, ������, ѡ���ͷ��ʼ��, ��Ϊ���Ǵ�0��ʼ�ҵ�
//    }
//    return t;//��󷵻ض���������
//}//����˵��, ���200003���㹻���Ե����洢��, Ϊʲô��, ��Ϊ�Ǿ���
//
//int main()
//{
//    memset(h, 0x3f, sizeof h);//���ֽڸı�, ÿ���ֽڶ��ı��3f, һ�������ĸ����ֽ�, Ҳ���� __ __ __ __  
//                              //                                                   0f 0f 0f 0f
//
//    int n;
//    scanf("%d", &n);
//
//    while (n--)
//    {
//        char op[2];
//        int x;
//        scanf("%s%d", op, &x);
//        if (*op == 'I')
//            h[find(x)] = x;
//        else
//        {
//            if (h[find(x)] == null) puts("No");//����nullҲ����û�з����ı�, Ҳ����û�в�������
//            else puts("Yes");
//        }
//    }
//
//    return 0;
//}
//
//
//const int N = 100003;//�ҵ���һ���������Ҫ�������
//
//int h[N], e[N], ne[N], idx;
//
//void insert(int x)
//{
//    int k = (x % N + N) % N;
//    e[idx] = x;//����e��������е��õ���idx��λ�ô���x���ֵ
//    ne[idx] = h[k];//�ڼ�¼���x����һ���ڵ���h[k], ָ����ԭ��h[k]��λ��
//    h[k] = idx++;//Ȼ����h[k]ָ��idx
//    //����ʵ���ϻ���h[k]ָ��idx, idxָ��h[k]ָ���ĩβ, ����h[k]ʵ���Ͼ���ne[k];
//}//����һ������
//
//bool fi(int x)
//{
//    int k = (x % N + N) % N;//�õ���ϣ��
//    for (int i = h[k]; i != -1; i = ne[i])//�ҵ�h[k]������ӵ�ͷ, Ȼ��i = ne[k] ,Ȼ��һֱi = ne[i]
//        if (e[i] == x)//ÿ���ж��Ƿ����ҵ���ֵ����Ŀ������
//            return true;
//
//    return false;//���ȫ��û�ҵ��ͷ����Ҳ���, ���ߵ�h[k]ֱ�Ӿ���-1, Ҳ���Ǳ����ָ���ne����-1, ����û�д�������
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    memset(h, -1, sizeof h);//h��ÿһ��λ�ö���ָ����һ���ڵ�, ��ʼʱȫ������ָ��-1, Ҳ����β�ڵ�
//
//    while (n--)
//    {
//        char op[2];
//        int x;
//        scanf("%s%d", op, &x);
//
//        if (*op == 'I') insert(x);
//        else
//        {
//            if (fi(x)) puts("Yes");
//            else puts("No");
//        }
//    }
//
//    return 0;
//}

//�ܽ�, ��������100003 ����Ѱַ����200003
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int N = 200001;
//
//int h[N];//ֻ��Ҫһ������Ϳ��Դ������е���
//int null = 0x3f3f3f3f;
//
//int fin(int x)
//{
//    //���ȵõ���ϣֵ
//    int k = (x % N + N) % N;
//    //Ȼ����h�����д�h[k]��ʼ�� 
//    while (h[k] != x && h[k] != null)//������k������, ���Ҳ���������Ҫ�����, �������������null, ��һ����������
//    {
//        k++;
//        if (k == N)//ע�����±�k���ڱ߽��˲�Ҫ����, ����h[k]
//            k = 0;
//    }//�����ҵ�Ҫ����Ŀ�λ��
//    return k;
//}
//
//int main()
//{
//    int n; scanf("%d", &n);
//    memset(h, 0x3f, sizeof h);//��ʼ��, ע�����������cstring��
//    while (n--)
//    {
//        int x;
//        char op[2]; 
//        scanf("%s%d", op, &x);//ע�����������ǵ�ַ
//        if (op[0] == 'I')
//            h[fin(x)] = x;
//        else
//        {
//            if (h[fin(x)] == null)
//                puts("No");
//            else puts("Yes");
//        }
//
//    }
//
//    return 0;
//}