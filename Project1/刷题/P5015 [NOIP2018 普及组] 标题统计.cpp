#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
	int i= 0,c = 0;
	getline(cin, s);
		for (i = 0; i < s.size(); i++)
		{
			if (s[i] != ' ')
				c++;
		}
	cout << c;
	return 0;
}