#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//结构是一种集合,集合里面的是成员变量.结构的每个成员可以是不同的类型
//数组是一组相同类型的元素的集合

//struct people
//{
//	char name[10];
//	char tele[12]; //最后一位是个\0,所以要11+1
//	char sex[5];//一个汉字占两个字符,字符串还有一个\0; 所以要加一(男 女 保密)
//	int high;
//}p3, p4;//这是个类型(类),不占内存
//	//在创建结构体变量(对象)时才占用内存
//
////strcut tag
////{
////	member - list;
////}variable-list;   //variable-list 是使用该结构类型创建的变量(对象).而且是全局的结构体变量
//
//struct stu
//{
//	struct people p2;//结构体中可以包含结构体,数组,指针,标量
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
//	struct people p1 = {"你好", "12345678901", "男", 189};// 结构体变量的创建,同时初始化(完全初始化), 如果没有全部填入属性,就叫不完全初始化
//	struct stu s = { {"good", "12345678909", "女", 152}, 100, 0.3 };//浮点数在内存中不能精确保存
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p2.name, s.p2.tele, s.p2.sex, s.p2.high, s.num, s.f);//如果是地址就可以用箭头, 这里是对象用点.
//
//	print1(&p1);//首选这个,引文函数传参的时候,参数是要压栈的,节省空间
//	print2(s);//形式是实参的一份拷贝,也会占空间.
//	return 0;
//}



