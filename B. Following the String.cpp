#include <iostream>
#include <cstring>
using namespace std;

const int N = 200010;
string tmp = "0abcdefghigklmnopqrstuvwxyz0";
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int v[26];
		memset(v, -1, sizeof v);
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a; cin >> a;
			for (int j = 0; j < 26; j ++)
			{
				if (a - 1 == v[j])
				{
					cout << tmp[j + 1];
					v[j]++;
					break;
				}
			}
		}
		//如果是0, 那就用第一个指针
		cout << endl;
	}
	return 0;
}
