//#include <iostream>
//using namespace std;
//
//int jiecheng(int x)
//{
//    int c = 1;
//    for (int i = x; i > 0; i--)
//        c = c * i;
//    return c;
//}
//
//int main()
//{
//    // ���ڴ��������Ĵ���
//    int c = 0, n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        int tmp; cin >> tmp;
//        c += jiecheng(tmp);
//    }
//    //��m�Ľ׳�Ϊ�׳�֮�͵�����������m��?
//    int m,now;
//    int tmp = c / 2 + 1;
//    for (int i = tmp; i > 0; i--)
//    {
//        m = i;
//        if(now = jiecheng(m) < tmp)
//            if (c % now == 0)
//            {
//                cout << m;
//                break;
//            }
//    }
//    return 0;
//}