#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���ָ�������
// int *p1, *p2, *p3;
// int* p1, p2, p3;		�����p1��ָ�����  p2 p3 ��������


//���Ӷ��� ����ֱ����char short int long float double ������
//C�����Զ������͵����� 
//�Զ�����������һ�ֽ�:�ṹ�� - struck

//�ṹ����ǰѶ��

struct Stu
{
	//�ṹ���������
	//����Ľ�����Ա����
	char name[20];
	int age;
	char sex[10];
	char tele[12];

};


void print(struct Stu* ps)//����������Ϊps
{	
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//->
	//(�ṹ��ָ�����)������->��Ա��  ǰ��õ�ָ�����
	printf("%s %d %s %d\n", ps->name, ps->age, ps->sex, ps->tele);
}


//int main()
//{
//	//struct �ṹ������ �ṹ�����ֵı���
//	struct Stu s = { "nihao",20, "��", "12345678901" };
//	
//	//�ṹ�����.��Ա��
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	return 0;
//}

//define��Ԥ����ָ��











