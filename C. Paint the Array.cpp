//#include <iostream>
//#include <vector>
//using namespace std;
//typedef long long ll;
//
//const int N = 110;
//int a[N],b[N];
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		vector<ll> v1(N), v2(N);
//		int n, tmp; cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			if (i % 2) {
//				cin >> tmp;
//				v1.push_back(tmp);
//			}
//			else {
//				cin >> tmp;
//				v1.push_back(tmp);
//			}
//		}
//		for (ll i = 0; i < n; i+=2)
//		{
//			ll x1 = v1[i], x2 = v2[i+1], d = 1e19;
//			for (ll i = 1; i <= x1 || i <= x2; i++)
//			{ 
//				if (x1 % i == 0 && x2 % i == 0)
//				{
//					d = min(i,d);
//					continue;
//				}
//			}
//			if (d == 0) {
//				cout << d << endl;
//				continue;
//			}
//			if (v2[i] % d != 0 && v2[i + 1] % d != 0)
//			{
//				cout << d << endl;
//				continue;
//			}
//			else {
//				cout << 0 << endl;
//				continue;
//			}
//		}
//	}
//	return 0;
//}

//本题学到的东西 - 最小公约数
//#include <iostream>
//using namespace std;
//typedef long long ll;
//
//inline int read() {
//    int x = 0, f = 1; char c = getchar();
//    while (c < '0' || c>'9') { if (c == '-') f = -1; c = getchar(); }
//    while (c >= '0' && c <= '9') { x = (x << 1) + (x << 3) + c - '0'; c = getchar(); }
//    return x * f;
//}
//
//ll _gcd(ll m, ll n) 
//{
//    return n == 0 ? m : _gcd(n, m % n);
//}
//ll _lcm(ll m, ll n) {
//    return m * n / _gcd(m, n); 
//}
//ll pows(ll base, ll power, ll mod) {
//    ll result = 1;
//    while (power > 0) {
//        if (power & 1) {
//            result = result * base % mod; 
//        }
//        power >>= 1; 
//        base = (base * base) % mod; 
//    }
//    return result; 
//}
//
//ll poww(ll base, ll power) {
//    ll result = 1;
//    while (power > 0) {
//        if (power & 1) {
//            result = result * base;
//        }
//        power >>= 1;
//        base = (base * base);
//    }
//    return result;
//}