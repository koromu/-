#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

//���������Ǹ���ɶ?
//���ж�αȽ�
int main()
{
	int count = 0; //��¼ɾ����Ԫ��
	int N; cin >> N; // ��¼����
	vector<char> v1;	//������������һ���ַ���
	for (int i = 0; i < N; i++)
	{
		char temp;
		cin >> temp;
		v1.push_back(temp);
	}//����������,���ֲ��ò�����β, �����ö�̬��

	auto it_h = v1.begin();//�õ���β�ĵ�����
	auto it_e = v1.end();//�õ���β�ĵ�����
	it_e--;//ע��end()��������λ��
	while (it_h == it_e)
	{
		while (*(it_h) == *(it_e) && it_h != it_e)//�������������ָ��ͬһ��λ��, ���ܽ���ѭ��
		{
			v1.erase(it_h);//��պ�
			it_e = v1.end();//���¸�ֵ,��ע��end()��������λ��
			it_e--;
			count += 2;
			v1.erase(it_e);
			it_h = v1.begin();
			it_e = v1.end();//Ϊ�¸�ѭ��׼��������
			it_e--;
		}//��β,�����
		auto it1 = v1.begin();
		while (it1 != --(v1.end()))
		{
			//1��2�� 2��3�� 3��4�� -> 4����3��
			//1��2�� 2��3�� 3��(4�� 4��5�� -> 5����4��, ѭ����С-1��
			while (*it1 == *(++it1))
			{
				it1 = v1.erase(it1);
				it1 = v1.erase(it1);//�ѵ�һ���͵ڶ���ɾ��
				//�����ֱͬ��ɾ��
				//ע��: ɾ��֮��,ʧЧ�� 
				//it1 = v1.begin();
				count += 2;
			}//��������ֱ����һ��
			it1++;
		}//��һֱѭ��û��, ֱ��ĩβ�˳�/
	}
	cout << count;


	return 0;
}