#include <iostream> 

using namespace std;
double PI = 3.14;
int main()
{
	double h, r, v, c;//��λ����Ҳ���Ƕ�Ӧ�������
	cin >> h >> r;
	v = PI * r * r * h;
	//����1Ͱ��һͰ��
	c = 20.0 * 1000 / v;
	if (v * c != 20.0)
		c++;
	cout << (int)c;
	return 0;
}