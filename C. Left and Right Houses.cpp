// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;
// typedef long long ll;

// const int N = 300010;
// int w1[N], w0[N];

// void slove()
// {
//     string str;
//     int n;cin >> n;
//     cin >> str;
//     memset(w1, 0, sizeof w1);
//     memset(w0, 0, sizeof w0);
//     for(int i = 0 ; i < n ; i ++)
//     {
//         if(str[i] - '0')//�������0
//             w1[i+1] = 1;
//         else w0[i+1] = 1;
//         w1[i+1] += w1[i];
//         w0[i+1] += w0[i];
//     }//��ʼ��ǰ׺��

//     int ans = 0, dist = 1e9;
//     for(int i = 1 ; i <= n ; i ++) 
//     {
//         //����ǰ׺��
//         if((w0[i] >= (i % 2) ? i / 2 + 1 : i / 2 ) && ((w1[n] - w1[i])>= ((n - i) % 2) ? (n-i) / 2 + 1 : ((n-i) / 2 )) && w1[i] && w0[i])//����Ƿ��ϵ�, ��ô�����������λ��
//         {
//             if(abs(n / 2.0 - i) < dist)
//                 ans = i;
//         }
//     }
//     cout << ans << endl;
//     // cout << n << endl;
// }


// int main()
// {
// 	int T;
// 	cin >> T;
// 	while (T--)
// 	{
// 		slove();
// 	}
// }
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int p;
//    cin >> p;
//    while (p--) {
//        int n;
//        cin >> n;
//        string s;
//        cin >> s;
//        int l1 = 0;
//        int r1 = 0;
//        for (int i = 0; i < n; i++) {
//            if (s[i] == '1') {
//                r1++;
//            }
//        }
//        int dist = 1e9;
//        int pos = -1;
//        if (r1 >= (n + 1) / 2) {
//            pos = 0;
//            dist = n;
//        }
//        //����֮ǰ�� r1������1�ĸ����� l1��0
//        for (int i = 1; i <= n; i++) {
//            if (s[i - 1] == '1')
//                r1--;//�����Ļ�r1����i��n��1�ĸ���
//            else
//                l1++;//1 - i ��0�ĸ���
//
//            if (l1 >= (i + 1) / 2 && r1 >= (n - i + 1) / 2) {
//                int t = abs(n - 2 * i);
//                if (dist > t) {
//                    dist = t;
//                    pos = i;
//                }
//            }
//        }
//        cout << pos << "\n";
//    }
//}