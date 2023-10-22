#include <iostream>

using namespace std;

int main()
{
	int yuan, jiao; cin >> yuan >> jiao;
	double money,n;
	money = yuan + jiao * 0.1;
	if (money == 0) { cout << 0; return 0; }
	n = money / 1.9;
	if (n * 1.9 > money)
		n++;
	cout << (int)n;
	return 0;
}