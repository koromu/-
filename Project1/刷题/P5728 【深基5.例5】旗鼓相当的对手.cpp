#include <iostream> 
# include <math.h>
using namespace std;

int main()
{
	int n,c = 0; cin >> n;
	int chi[1000], ma[1000], eng[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> chi[i] >> ma[i] >> eng[i];//��¼�����˵ķ���
	}
	for (int i = 0; i < n; i++)//ǰһ��ͬѧ
	{
		for (int j = i+1; j < n; j++)//��һ��ͬѧ
		{
			//ͬʱ�����ĸ�����
			if (abs(chi[i] - chi[j]) <= 5 && abs((chi[i] + ma[i] + eng[i]) - (chi[j] + ma[j] + eng[j])) <= 10 && abs(ma[i] - ma[j]) <= 5 && abs(eng[i] - eng[j]) <= 5)
			{
				c++;
			}
		} 
	}
	cout << c;

	return 0;
}