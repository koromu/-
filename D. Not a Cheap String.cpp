//#include <iostream>
//#include <string>
//using namespace std;
//
//const int N = 2e5 + 10;
//
//
//int main()
//{
//    int T; cin >> T;
//    while (T--)
//    {
//        int arr[28] = { 0 };
//        string a;
//        cin >> a;
//        int sum = 0;
//        int w; cin >> w;
//        for (int i = 0; i < a.size(); i++)//����ܼ۸�
//        {
//            //��¼26����ĸ�ܹ����ֵĴ���
//            arr[a[i] - 'a' + 1]++;//��������ĸλ��ƫ��һλ
//            sum += (a[i] - 'a' + 1);
//        }
//        for (auto i : arr)
//            cout << i << endl;
//        cout << "sum = " << sum << endl;
//        if (sum <= w) cout << a << endl;
//        else
//        {
//            bool flag = true;
//            for (int i = 26; i >= 1; i--)
//            {
//                //�����Ŀ�ʼ
//                while (arr[i])//�����Ϊ0
//                {
//                    if (sum <= w) {
//                        flag = false;
//                        break;//�ҵ�����
//                    }
//                    sum -= i;//ֱ�Ӽ�ȥ�����ĸ�����
//                    arr[i]--;
//                    cout << i << " " << sum << " " << arr[i] << " " << w << endl;
//                }
//                if (!flag) break;
//            }
//
//            for (int i = 0; i < a.size(); i++)
//            {
//                if (arr[a[i] - 'a' + 1])//�������0
//                {
//                    cout << a[i];
//                    arr[a[i] - 'a' + 1]--;//�ܳ��ֵĴ���--
//                }
//            }
//            cout << endl;
//        }
//
//    }
//    return 0;
//}