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
//#define INC_SZ 2//增长大小
//
//
////人的类型声明
//typedef struct peo_info
//{
//	char name[NAME_MAX];
//	int age;
//	char sex[SEX_MAX];
//	char tel[TEL_MAX];
//	char addr[ADDR_MAX];//地址
//} pi;//重命名为PI
//
////通讯录的声明
//typedef struct Contact//通讯录的
//{
//	pi* data;//data存放人的信息
//	int count;//记录通讯录有多少人的信息
//	int cap;//通讯录目前的容量
//} con;
//
////菜单函数声明
//void menu();
//
////初始化函数声明
////void InitContact(Contact* pc);
//int InitContact(Contact* pc);
//
////增加联系人到通讯录
//void AddCon(Contact* pc);
//
////打印通讯录信息
//void ShowCon(const Contact* pc);
//
////删除通讯录信息
//void DelCon(Contact* pc);
//
////查找通讯录信息
//void SearachCon(Contact* pc);
//
////修改通讯录声明
//void ModifyCon(Contact* pc);
//
////排序通许录函数的声明(根据名字排序)
//void SortConName(Contact * pc);
//
////增容函数的声明
//void checkcap(Contact* pc);
//
////销毁空间函数的声明
//void DestoryCon(Contact* pc);
