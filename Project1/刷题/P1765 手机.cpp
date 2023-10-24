#include <iostream>
#include <string>
using namespace	std;

//enum eng
//{
//	a = 1,
//	d = 1,
//	g = 1,
//	j = 1,
//	m = 1,
//	p = 1,
//	t = 1,
//	w = 1,//空格额外算个一
//
//	b = 2,
//	e = 2,
//	h = 2,
//	k = 2,
//	n = 2,
//	q = 2,
//	u = 2,
//	x = 2,
//
//	c = 3,
//	f = 3,
//	i = 3,
//	l = 3,
//	o = 3,
//	r = 3,
//	v = 3,
//	y = 3,
//
//	s = 4,
//	z = 4
//};

int main()
{
	string s;
	getline(cin, s);
	int c = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'a' || s[i] == 'd' || s[i] == 'g' || s[i] == 'j' || s[i] == 'm' || s[i] == 'p' || s[i] == 't' || s[i] == 'w' || s[i] == ' ')
			c++;
		if (s[i] == 'b' || s[i] == 'e' || s[i] == 'h' || s[i] == 'k' || s[i] == 'n' || s[i] == 'q' || s[i] == 'u' || s[i] == 'x')
			c += 2;
		if (s[i] == 'c' || s[i] == 'f' || s[i] == 'i' || s[i] == 'l' || s[i] == 'o' || s[i] == 'r' || s[i] == 'v' || s[i] == 'y')
			c += 3;
		if (s[i] == 's' || s[i] == 'z')
			c += 4;
	}
	cout << c;

	return 0;
}