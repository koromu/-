//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//typedef long long ll;
//using namespace std;
//const int N = 100010;
//ll s[N], smod[N];
//ll n, k, c;
//
//int main()
//{
//	//n������
//	cin >> n >> k;
//	for (int i = 1,tmp; i <= n; i++)
//	{
//		scanf("%d", &tmp);//��ԭ����
//		s[i] = s[i - 1] + tmp;
//	}
////����ǰ׺��
//	smod[0] = 1;//����Ϊ0�����鱾����Գ�Ϊһ������
//	for (int i = 1; i <= n; i++)//Ϊʲô��0��ʼ
//		smod[s[i] % k]++;//ʲô��˼?
//		//�����������������ļ����ж��ٸ�, Ȼ���������
//	for (int i = 0; i < k; i++) c += (smod[i] * (smod[i] - 1)) / 2;//������ϼ���������
//	cout << c;
//	return 0;
//}