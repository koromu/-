#include <iostream> 

using namespace std;

int main()
{
	//����ʱ���, ���
	int a, b, c, d; cin >> a >> b >> c >> d;
	//a c &c d
	//��β�ͽ�λ
	int h = c-a, m = d-b;
	if (m < 0)
	{
		h -= 1;
		m += 60;
	}
	//��Ϊ�ǵ���,����ûʲô����
	if (h < 0)
	{
		h += 24;
	}//���㳬��һ���
	h %= 24; m %= 60;
	if (m == 60) m = 0;
	if (h == 24) h = 0;

	cout << h << ' ' << m;
	return 0;
}