#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//	int l = 0,flag=0; cin >> l;
//	string s; cin >> s;
//	//��ͷ��β
//	//�������vv ����kk�ͼ�һ Ȼ���������vv��kk
//	//˫ָ��
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
//		//�ܳ��ȴ�������ʱ,ֱ���ж����������ַ���ͬ�ͼ�һ
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
	//�ȿ�vk,�ٿ�vvkk,�ñ��¼�ù���v��k
	int l = 0; cin >> l;//����
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