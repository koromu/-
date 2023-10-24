#include <iostream>
#include <string>

using namespace std;
string s;

void pushback(string& s)
{
	string s1;
	cin >> s1;
	s += s1;
	
}

void cut(string& s)
{
	int b, c; cin >> b >> c;
	string tmp = s;
	s.clear();
	for (int i = b; i < b + c; i++)
	{
		s += tmp[i];
	}
	cout << s << endl;
}

void insert(string& s)
{
	int x; cin >> x;//需要插入的位置
	string s2; cin >> s2;
	s.insert(x, s2);
	cout << s<<endl;
}

void my_find(string& s)
{
	string x; cin >> x;
	int n = s.find(x);
	cout << n << endl;
}

enum func
{
	pushback1 = 1,
	out2 = 2,
	insert3 = 3,
	find4 = 4
};

int main()
{
	int q; cin >> q;
	cin >> s;//初始的第一串字符串
	while (q--)
	{
		//先接收一个数字
		int x; cin >> x;
		switch (x)
		{
		case pushback1:
		{
			pushback(s);
			cout << s << endl;
			break;
		}
		case out2:
		{
			cut(s);
			break;
		}
		case insert3:
		{
			insert(s);
			break;
		}
		case find4:
		{
			my_find(s);
			break;
		}
		}
	}


	return 0;
}