#include <iostream> 

using namespace std;
double PI = 3.14;
int main()
{
	double h, r, v, c;//单位厘米也就是对应体积毫升
	cin >> h >> r;
	v = PI * r * r * h;
	//不满1桶按一桶算
	c = 20.0 * 1000 / v;
	if (v * c != 20.0)
		c++;
	cout << (int)c;
	return 0;
}