#include <iostream> 
# include <math.h>
using namespace std;

int main()
{
	int n,c = 0; cin >> n;
	int chi[1000], ma[1000], eng[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> chi[i] >> ma[i] >> eng[i];//记录所有人的分数
	}
	for (int i = 0; i < n; i++)//前一个同学
	{
		for (int j = i+1; j < n; j++)//后一个同学
		{
			//同时满足四个条件
			if (abs(chi[i] - chi[j]) <= 5 && abs((chi[i] + ma[i] + eng[i]) - (chi[j] + ma[j] + eng[j])) <= 10 && abs(ma[i] - ma[j]) <= 5 && abs(eng[i] - eng[j]) <= 5)
			{
				c++;
			}
		} 
	}
	cout << c;

	return 0;
}