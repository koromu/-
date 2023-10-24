#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//	int l = 0,flag=0; cin >> l;
//	string s; cin >> s;
//	//从头到尾
//	//如果出现vv 或者kk就加一 然后跳过这个vv或kk
//	//双指针
//	int c = 0;
//	for (int i = 0, j=1; j < l;)
//	{
//		if (l == 1)
//		{
//			cout << 0;
//			return 0;
//		}
//		if (l == 2 && s[i] == s[j])
//		{
//			cout << 1;
//			return 0;
//		}
//		//总长度大于三个时,直接判断连续三个字符相同就加一
//		if (s[i] == 'V' && s[j] == 'K')
//		{
//			c++;
//			i++;
//			j = i + 1;
//			continue;
//		}
//		if (s[i] == s[j]&&l>=3&&flag ==0)
//		{
//			int tmp = j+1;
//			if (s[i] == s[tmp])
//			{
//				c++;
//				i = tmp + 1;
//				j = i + 1;
//				flag++;
//			}
//			continue;
//		}
//		i++;
//		j++;
//	}
//	cout << c;
//	return 0;
//}
const int N = 1010;
int q[N], flag = 0;

int main()
{
	//先看vk,再看vvkk,用表记录用过的v和k
	int l = 0; cin >> l;//长度
	string s; cin >> s;
	int c = 0;
	for (int i = 0, j = 1; j < l;)
	{
		if (l == 1)
		{
			cout << 0;
			return 0;
		}
		if (l == 2 && s[i] == s[j] &&s[i] == 'V' && s[j] == 'K')
		{
			cout << 1;
			return 0;
		}
		if (s[i] == 'V' && s[j] == 'K')
		{
			c++;
			i++;
			j = i + 1;
			q[i] == 1, q[j] == 1;
			continue;
		}
		i++; j++;
	}
	for (int i = 0, j = 1; j < l;)
	{
		if (s[i] == s[j]&&q[i]!=1&&q[j]!=1)
		{
			c++;
			i += 2;
			j += 2;
			break;
		}
		i++; j++;
	}
	cout << c;
	return 0;
}