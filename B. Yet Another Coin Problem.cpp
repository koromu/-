//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//// int a[15] = {0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3};
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n; cin >> n;
//        int ans = 0x3f3f3f3f;
//        for (int i = 0; i <= 2; i++)
//            for (int j = 0; j <= 1; j++)
//                for (int k = 0; k <= 5; k++)
//                    for (int l = 0; l <= 2; l++)
//                    {
//                        if (((n - i - j * 3 - k * 6 - l * 10) % 15 == 0) && (n - i - j * 3 - k * 6 - l * 10 >= 0))
//                        {
//                            ans = min(ans, i + j + k + l + (n - i - j * 3 - k * 6 - l * 10) / 15);
//                            //cout << i + j + k + l + (n - i - j * 3 - k * 6 - l * 10) / 15 << "i =  " << i << "j =  " << j << "k =  " << k << "l =  " << l << endl;
//                        }
//                        else continue;//否则不能整除
//                    }
//
//        cout << ans << endl;
//    }
//
//    return 0;
//}