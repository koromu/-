//#pragma once
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#include <assert.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <ctype.h>
//#define MAX 100
//#define NAME_MAX 20
//#define SEX_MAX 5
//#define TEL_MAX 12
//#define ADDR_MAX 30
//#define DEFAULT_SZ 3
//#define INC_SZ 2//������С
//
//
////�˵���������
//typedef struct peo_info
//{
//	char name[NAME_MAX];
//	int age;
//	char sex[SEX_MAX];
//	char tel[TEL_MAX];
//	char addr[ADDR_MAX];//��ַ
//} pi;//������ΪPI
//
////ͨѶ¼������
//typedef struct Contact//ͨѶ¼��
//{
//	pi* data;//data����˵���Ϣ
//	int count;//��¼ͨѶ¼�ж����˵���Ϣ
//	int cap;//ͨѶ¼Ŀǰ������
//} con;
//
////�˵���������
//void menu();
//
////��ʼ����������
////void InitContact(Contact* pc);
//int InitContact(Contact* pc);
//
////������ϵ�˵�ͨѶ¼
//void AddCon(Contact* pc);
//
////��ӡͨѶ¼��Ϣ
//void ShowCon(const Contact* pc);
//
////ɾ��ͨѶ¼��Ϣ
//void DelCon(Contact* pc);
//
////����ͨѶ¼��Ϣ
//void SearachCon(Contact* pc);
//
////�޸�ͨѶ¼����
//void ModifyCon(Contact* pc);
//
////����ͨ��¼����������(������������)
//void SortConName(Contact * pc);
//
////���ݺ���������
//void checkcap(Contact* pc);
//
////���ٿռ亯��������
//void DestoryCon(Contact* pc);
