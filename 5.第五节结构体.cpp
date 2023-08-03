#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//多个指针的命名
// int *p1, *p2, *p3;
// int* p1, p2, p3;		这里的p1是指针变量  p2 p3 都是整型


//复杂对象 不能直接用char short int long float double 简单描述
//C语言自定义类型的能力 
//自定义类型中有一种叫:结构体 - struck

//结构体就是把多个

struct Stu
{
	//结构体的类似类
	//下面的叫做成员变量
	char name[20];
	int age;
	char sex[10];
	char tele[12];

};


void print(struct Stu* ps)//类似于命名为ps
{	
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//->
	//(结构体指针变量)变量名->成员名  前提得到指针对象
	printf("%s %d %s %d\n", ps->name, ps->age, ps->sex, ps->tele);
}


//int main()
//{
//	//struct 结构体名字 结构体名字的别名
//	struct Stu s = { "nihao",20, "男", "12345678901" };
//	
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	return 0;
//}

//define是预处理指令











