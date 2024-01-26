//#include <math.h>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//string s1;
//vector<int> v1;
//char a[2];
//char b[2];
//
//bool jud_A(char x)
//{
//	if (x >= 'A' && x <= 'Z')
//		return true;
//	else return false;
//}
//
//bool jud_num(char x)
//{
//	if (x >= '0' && x <= '9')
//		return true;
//	else return false;
//}
//
//double tr_to_k(vector<int>& v)//1, 2, 3
//{					  //0, 1, 2
//	double res = 0;
//	for (int i = v.size() - 1, j = 0; i >= 0; i--)
//	{
//		res += pow(10, j) * v[i];
//		j++;
//	}//得到res
//	if (!strcmp(a, "GB"))
//	{
//		return res * 1024 * 1024 * 1024;
//	}
//	else if (!strcmp(a, "MB"))
//	{
//		return res * 1024 * 1024;
//	}
//	else if (!strcmp(a,"KB"))
//	{
//		return res * 1024;
//	}
//	else//k不需要转换
//		return res;
//}
//
//int main()
//{
//	cin >> s1;
//	int tmp;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (jud_num(s1[i])) {
//			v1.push_back(s1[i] - '0');
//			tmp = i;
//		}
//		else break;
//	}//收入第一个数
//	for (int i = tmp+1, j = 0; i < s1.size(); i++)
//	{
//		if (jud_A(s1[i])) {
//			a[j] = s1[i];
//			j++;
//			tmp = i;
//		}
//		else break;
//	}//收入单位
//	for (int i = s1.size()-1, j = 1; i >= 0; i--)
//	{
//		if (jud_A(s1[i])) {
//			b[j] = s1[i];
//			j--;
//			tmp = i;
//		}
//		else break;
//	}//收入单位
//	
//
//	double tmp_ans = tr_to_k(v1);
//
//	if (!strcmp(b, "GB"))
//	{
//		printf("%.6lf", (tmp_ans / 1024 / 1024 / 1024));
//		return 0;
//	}
//	else if (!strcmp(b, "MB"))
//	{
//		printf("%.6lf", tmp_ans / 1024 / 1024);
//		return 0;
//	}
//	else if (!strcmp(b, "KB"))
//	{
//		printf("%.6lf", tmp_ans / 1024);
//		return 0;
//	}
//	else//k不需要转换
//		printf("%.6lf", tmp_ans);
//	return 0;
//}