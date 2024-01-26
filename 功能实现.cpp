//#include "静态通讯录的功能声明.h"
//
//////静态版本初始化实现
////void InitContact(Contact* pc)
////{
////	assert(pc);
////	pc->count = 0 ;
////	memset(pc->data, 0, sizeof(pc->data));//使用的的是地址, 所以用箭头,初始化
////}
//
//
//void menu()
//{
//	printf("**********************************************************\n");
//	printf("*******   1.add                      2.del       *********\n");
//	printf("*******   3.search                   4.modify    *********\n");
//	printf("*******   5.show                     6.sort      *********\n");
//	printf("*******   0.exit                                 *********\n");
//	printf("**********************************************************\n");
//}
//
////动态版本
//int InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	pc->data = (pi*)calloc(3,sizeof(pi));
//	if (pc->data == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	pc->cap = DEFAULT_SZ;//容量也要初始化
//	return 0;
//}
//
////静态的增加版本
////void AddCon(Contact* pc)
////{
////	assert(pc);
////
////	if (pc->count == MAX)
////	{
////
////		printf("通讯录满了\n");
////		return;
////	}
////	printf("请输入名字:");
////	scanf("%s", pc->data[pc->count].name);
////
////	printf("请输入年龄:");
////	scanf("%d", &pc->data[pc->count].age);
////
////	printf("请输入性别:");
////	scanf("%s", pc->data[pc->count].sex);
////
////	printf("请输入电话:");
////	scanf("%s", pc->data[pc->count].tel);
////
////	printf("请输入地址:");
////	scanf("%s", pc->data[pc->count].addr);
////
////
////	pc->count++;
////	printf("增加成功\n");
////
////}
//
//void DestoryCon(Contact* pc)
//{
//	assert(pc);
//	free(pc->data);
//	pc->data = NULL;
//}
//
////判断容量是否需要扩容
//void checkcap(Contact* pc)
//{
//	if (pc->count == pc->cap)
//	{
//		pi* ptr = (pi*)realloc(pc->data, (pc->cap + INC_SZ) * sizeof(pi));
//		if (ptr == NULL)
//		{
//			printf("AddCon:%s\n", strerror(errno));
//			return;
//		}//判断是否能扩容
//		else
//		{
//			pc->data = ptr;
//			pc->cap += INC_SZ;//真正扩容
//			printf("增容成功\n");
//		}
//	}
//}
//
//void AddCon(Contact* pc)
//{
//	assert(pc);
//	//增容
//	checkcap(pc);
//	
//	printf("请输入名字:");
//	scanf("%s", pc->data[pc->count].name);
//
//	printf("请输入年龄:");
//	scanf("%d", &pc->data[pc->count].age);
//
//	printf("请输入性别:");
//	scanf("%s", pc->data[pc->count].sex);
//
//	printf("请输入电话:");
//	scanf("%s", pc->data[pc->count].tel);
//
//	printf("请输入地址:");
//	scanf("%s", pc->data[pc->count].addr);
//
//
//	pc->count++;
//	printf("增加成功\n");
//
//}
//
////根据名字查找通讯录信息
//static int FindName(Contact* pc, char name[])//只能在这个文件使用后static
//{
//	assert(pc);
//	//遍历, 查看是否和name相同
//	int i = 0;
//	for (i = 0; i < pc->count; i++)
//	{
//		//对比字符串是否相同
//		if (0 == strcmp(pc->data[i].name, name))
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
////打印通讯录
//void ShowCon(const Contact* pc)
//{
//	assert(pc);
//	int i = 0;
//	for (i = 0; i < pc->count; i++)
//	{
//		printf("%20s\t%5s\t%5s\t%12s\t%30s", "姓名", "年龄", "性别", "电话", "地址\n");//左侧也是格式化, 右边直接是变量, 直接打印, 注意此时变量全是字符串, 都是上下的格式都是用\t对齐
//		printf("%20s\t%5d\t%5s\t%12s\t%30s\n",	pc->data[i].name, 
//												pc->data[i].age, 
//												pc->data[i].sex, 
//												pc->data[i].tel, 
//												pc->data[i].addr);		
//	}
//}
//
//
////删除联系人
//
//void DelCon(Contact* pc)
//{
//	int i;
//	char name[20];
//	assert(pc);
//	if (pc->count == 0)
//	{
//		printf("通讯录为空,没有信息可以删除");
//		return;
//	}
//	printf("请输入你要删除的人的姓名:");
//	scanf("%s", &name);
//	//1.查找信息
//	int ret = FindName(pc, name);//找到返回-1
//	if (ret == -1)
//	{
//		printf("查到的人不存在\n");
//		return;
//	}
//	//2.删除信息
//	//把后面的信息往前移动覆盖, 然后count--
//	for (i = ret; i < pc->count-1/*最后一个元素会越界*/; i++)
//	{
//		pc->data[i] = pc->data[i + 1];//最后一个元素的后面没有元素
//		printf("删除成功\n");
//	}
//		pc->count--;//可能存在越界问题
//}
//
////查找通讯录的实现
//void SearachCon(Contact* pc)
//{
//	assert(pc);
//	char name[NAME_MAX];
//	//查找
//	printf("请输入要查找的人的名字");
//	scanf("%s", &name);
//	int ret = FindName(pc,name);
//	if (ret == -1)
//	{
//		printf("查无此人\n");
//		return;
//	}
//	//查到了就打印
//		printf("%20s\t%5s\t%5s\t%12s\t%30s", "姓名", "年龄", "性别", "电话", "地址\n");//左侧也是格式化, 右边直接是变量, 直接打印, 注意此时变量全是字符串, 都是上下的格式都是用\t对齐
//		printf("%20s\t%5d\t%5s\t%12s\t%30s\n", pc->data[ret].name,
//			pc->data[ret].age,
//			pc->data[ret].sex,
//			pc->data[ret].tel,
//			pc->data[ret].addr);
//}
//
////修改通讯录的实现
//void ModifyCon(Contact* pc)
//{
//	assert(pc);
//	char name[NAME_MAX];
//	//查找
//	printf("请输入要修改的人的名字");
//	scanf("%s", &name);
//	int ret = FindName(pc, name);
//	if (ret == -1)
//	{
//		printf("查无此人\n");
//		return;
//	}
//	printf("以查到人员%s, 请修改\n", name);
//	//修改,重新增加一遍'
//	printf("请输入修改后的名字:");
//	scanf("%s", pc->data[ret].name);
//
//	printf("请输入修改后的年龄:");
//	scanf("%d", &pc->data[ret].age);
//
//	printf("请输入修改后的性别:");
//	scanf("%s", pc->data[ret].sex);
//
//	printf("请输入修改后的电话:");
//	scanf("%s", pc->data[ret].tel);
//
//	printf("请输入修改后的地址:");
//	scanf("%s", pc->data[ret].addr);
//
//	printf("修改成功\n");
//}
//
////qsort需要的函数
//int cmp_peo_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((pi*)e1)->name, ((pi*)e2)->name);
//}
//
//void SortConName(Contact* pc)
//{
//	assert(pc);
//	//按照名字排序, 使用qsort: void qsort (void* base要排序的起始地址, size_t num要排序的元素个数, size_t size排序的一个元素的大小要多大,int (*compar)(const void*, const void*)要比较的两个元素的地址);
//	qsort(pc->data, pc->count, sizeof(pi), cmp_peo_by_name);
//	printf("排序成功\n");
//}