#include <iostream>
using namespace std;
int main()
{
	bool arr[10003] = { 0 };
	int l, m, c = 0;
	cin >> l >> m;
	for (int i = 0; i < m; i++)
	{

		int u, v; cin >> u >> v;
		for (int temp = u; temp <= v; temp++)
		{
			if (arr[temp] == 0)
			{
				arr[temp] = 1;
				l--;
			}
		}
	}
	cout << l;
	return 0;
}
