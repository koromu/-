#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, b, c; cin >> a >> b >> c;
	double p,s;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.1lf", s);

	return 0;
}