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
//        for (int i = 0; i < a.size(); i++)//算出总价格
//        {
//            //记录26个字母总共出现的次数
//            arr[a[i] - 'a' + 1]++;//标记这个字母位置偏移一位
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
//                //从最贵的开始
//                while (arr[i])//如果不为0
//                {
//                    if (sum <= w) {
//                        flag = false;
//                        break;//找到答案了
//                    }
//                    sum -= i;//直接减去这个字母的序号
//                    arr[i]--;
//                    cout << i << " " << sum << " " << arr[i] << " " << w << endl;
//                }
//                if (!flag) break;
//            }
//
//            for (int i = 0; i < a.size(); i++)
//            {
//                if (arr[a[i] - 'a' + 1])//如果不是0
//                {
//                    cout << a[i];
//                    arr[a[i] - 'a' + 1]--;//能出现的次数--
//                }
//            }
//            cout << endl;
//        }
//
//    }
//    return 0;
//}