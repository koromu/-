//#include <iostream>
//// Nͷţ, ��ΪH, �ߺ�ΪS, ��ܸ�ΪB
//#include <set>
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//	//�Ƚ�������, ȡ��ߵļ�ͷţ, �õ��ľ������ٵ�
//	//ע����ţţ����һ���߸�Ŷ>_<
//	ll N, H, B, S;
//	multiset<ll, greater<ll>> ms;
//	cin >> N >> B;
//
//	for (; N > 0; N--)
//	{
//		cin >> H;
//		ms.insert(H);//һ��һ����ȡ,����
//	}
//	//������ɺ�õ�һ�������
//	//��multisetǰ�濪ʼ����
//	auto it = ms.begin();
//	ll count = 0; //��¼���˶���ͷţ
//	if (*(it) > B)//���һͷţ�͹���ֱ�� 1 ������
//	{
//		cout << 1;
//		return 0;
//	}
//	for (S = 0; S < B; it++)
//	{
//		S += (*it);
//		count++;
//	}
//	cout << count;
//
//	return 0;
//}