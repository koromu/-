//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    while (n--)
//    {
//        int x;
//        cin >> x;
//        // cout << x << " ";
//        unordered_map<int, int> primes;
//        for (int i = 2; i <= x / i; i++)
//        {
//            while (x % i == 0)
//            {
//                // cout << i << " ";
//                primes[i]++;
//                x /= i;
//            }
//        }
//        if (x > 1) primes[x]++;
//        for (auto prime : primes) 
//            cout << prime.first << " " << prime.second << endl;
//        cout << endl;
//    }
//    return 0;
//}