#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//�ṹ��һ�ּ���,����������ǳ�Ա����.�ṹ��ÿ����Ա�����ǲ�ͬ������
//������һ����ͬ���͵�Ԫ�صļ���

//struct people
//{
//	char name[10];
//	char tele[12]; //���һλ�Ǹ�\0,����Ҫ11+1
//	char sex[5];//һ������ռ�����ַ�,�ַ�������һ��\0; ����Ҫ��һ(�� Ů ����)
//	int high;
//}p3, p4;//���Ǹ�����(��),��ռ�ڴ�
//	//�ڴ����ṹ�����(����)ʱ��ռ���ڴ�
//
////strcut tag
////{
////	member - list;
////}variable-list;   //variable-list ��ʹ�øýṹ���ʹ����ı���(����).������ȫ�ֵĽṹ�����
//
//struct stu
//{
//	struct people p2;//�ṹ���п��԰����ṹ��,����,ָ��,����
//	int num;
//	float f;
//};
//
//void print1(struct people* s_path)
//{
//	printf("%s %s %s %d\n", s_path->name, s_path->tele, s_path->sex, s_path->high);
//}
//
//void print2(struct stu stu1)
//{
//	printf("%s %s %s %d %d %f\n", stu1.p2.name, stu1.p2.tele, stu1.p2.sex, stu1.p2.high, stu1.num, stu1.f);
//}
//
//int main()
//{
//	struct people p1 = {"���", "12345678901", "��", 189};// �ṹ������Ĵ���,ͬʱ��ʼ��(��ȫ��ʼ��), ���û��ȫ����������,�ͽв���ȫ��ʼ��
//	struct stu s = { {"good", "12345678909", "Ů", 152}, 100, 0.3 };//���������ڴ��в��ܾ�ȷ����
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p2.name, s.p2.tele, s.p2.sex, s.p2.high, s.num, s.f);//����ǵ�ַ�Ϳ����ü�ͷ, �����Ƕ����õ�.
//
//	print1(&p1);//��ѡ���,���ĺ������ε�ʱ��,������Ҫѹջ��,��ʡ�ռ�
//	print2(s);//��ʽ��ʵ�ε�һ�ݿ���,Ҳ��ռ�ռ�.
//	return 0;
//}



