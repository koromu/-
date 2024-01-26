//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//每个字母向后移动一位,特殊z后面是a
//	int n; cin >> n;
//	string s; cin >> s;
//	n = n % 26;//范围是0 - 25,如果是26就等于没变
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] + n > 'z')//先加,再减去26
//			s[i] = s[i] + n - 26;
//		else
//			s[i] += n;
//	}
//	cout << s;
//	return 0;
//}