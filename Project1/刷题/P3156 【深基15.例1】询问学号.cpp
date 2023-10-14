#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
	vector<int> id;
	ll n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		id.push_back(temp);
	}
	//for (int i = 0; i < m; i++)
	//{
	//	int temp; cin >> temp;
	//	auto it = id.begin();
	//	for (int j = 1; j < temp; j++)
	//		it++;
	//	cout << *it << endl;
	//}
	for (int i = 0; i < m; i++)
	{
		int temp; cin >> temp;
		cout << id[temp - 1] << endl;
	}
	return 0;
}
