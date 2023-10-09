#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

//1求字符串长度
//strlen   --------  size_t strlen ( const char * str );

//返回值是size_t, 无符号整型的重命名

//字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。
int main()
{
	//const char arr[] = "abcdef";
	char arr[] = { 'a', 'b', 'c' };//字符没有'\0'结尾, 所以前后不知道什么时候有'\0',得到的是随机值 
	int len = strlen(arr);
	printf("%d\n", len);
	return 0;
}

int main()
{
	//		3				6
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf(">\n");
	}
	if (strlen("abc") - strlen("abcdef") < 0)
	{
		printf("<=\n");
	}

	return 0;
}//但是无符号整型, 得到的结果是错误的

//模拟实现

//计数器方法
//size_t my_strlen1(const char* str)
{

	size_t count = 0;
	assert(str);
	//不能为无效, 空指针
	//判断是否是斜杠零
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
////指针-指针
size_t my_strlen2(const char* str1)
{
	assert(str1);
	const char* left = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	return (int)(str1 - left);
}
////递归的方法
//
//int main()
//{
//	const char arr[] = "abcdef";
//	size_t n1 = my_strlen1(arr);//字符串长度不可能是负数
//	size_t n2 = my_strlen2(arr);//字符串长度不可能是负数
//
//	printf("%u %u\n", n1, n2);//无符号整型用%u
//
//	return 0;
//}

//2长度不受限制的字符串函数
//strcpy
//char* strcpy(char* destination, const char* source);
//把右边的字符串拷贝到左边的字符串里面, 拷贝'\0'及以前的字符

//int main()
//{
//	char name[20] = {};
//	char arr[] = { 'a', 'b', 'c' };
//	strcpy(name, "nihao");
//	//strcpy(name, arr);//	1.没有斜杠0, 就会随机拷贝一定的值
//	//						2.name = "nihao", name 是地址名字, 地址名是一个常量, 不能被赋值
//	//						3.被拷贝的地方需要放的下要拷贝的字符串
//	//						4.常量字符串不能被修改, 不能作为destination(目标区)
//	printf("%s\n", name);
//
//	return 0;
//}

//模拟实现

//void my_strcpy(char* des, const char* sou) {
//    assert(des);
//    assert(sou);
//
//    while (*sou != '\0') {
//        *des++ = *sou++;
//    }
//    *des = '\0';
//}//创造函数

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest &&  src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//		;
//	return ret;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//strcat
//char * strcat ( char * destination, const char * source );
//字符串追加, 有点像cpy, 目标空间需要可修改, 需要有足够大
//

//模拟实现: 找到目标字符串的\0
//char* my_strcat(char* dest, const char* scr)
//{
//	assert(dest);
//	assert(scr);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *scr++)
//		;
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char *arr2 = my_strcat(arr1, "world");
//	//自己给自己追加
//	//覆盖是会把自己的结尾'\0'给覆盖了, 陷入死循环
//
//	//char *arr3 = my_strcat(arr1, arr1);
//	printf("%s\n", arr2);
//	//printf("%s\n", arr3);
//
//	return 0;
//}

//strcmp

//模拟实现
//int my_strcmp(const char * str1, const char * str2)
//{
//	assert(str1);
//	assert(str2);
//	//直接返回两个字符的ASCII的差值
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return *str1 - *str2;
//		}
//			str1++;
//			str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return *str1 - *str2;
//	}
//	else
//	{
//		return *str1 - *str2;
//	}
//}
//
//
//int main()
//{
//	char arr1[20] = "nihaobad";
//	char arr2[] = "nihaogood";
//	//比较两个字符串是否相等
//	//if (arr1 = arr2)
//	//{
//
//	//}使用等号判断符号判断数组名(数组首元素的地址), 所以比较的是地址是否相同
//
//
//	//两个字符串比较相等,需要使用strcmp:int strcmp(const *str1, const * str2);
//	//如果str1>str2返回大于零的值, 等于返回0,小于返回小于零的值
//	//if (strcmp(arr1, arr2)<0)
//	//{
//	//	printf("<\n");
//	//}
//	//else if (strcmp(arr1, arr2) == 0)
//	//{
//	//	printf("=\n");
//	//}
//	//else
//	//{
//	//	printf(">\n");
//	//}
//
//	if (my_strcmp(arr1, arr2)<0)
//	{
//		printf("<\n");
//	}
//	else if (my_strcmp(arr1, arr2) == 0)
//	{
//		printf("=\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;   
//}

//以上strcpy, strcat, strcmp没有长度限制,长度不受限制的字符串函数
//如果越界访问, 依旧会进行编译执行, 所以要无视危险

//3长度受限制的字符串函数介绍
//strncpy:char* strncpy(const char * str1, const char * str2, size_t num);

//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[] = "hello c";
//	char arr3[] = "ok";//如果限制长度多了, 会补充'\0'
//	//strcpy(arr1, arr2);//arr1没有足够的大小, 拷贝不安全
//	strncpy(arr1, arr2, 5);//可以限制长度, 拷贝一定量的字符
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strncat:
//int main()
//{
//	char arr1[20] = "hello \0xxxxxx";//检测到'\0'字符然后, 在后面加上目标字符串, 最后再最后一个位置后加上一个'\0', 让新的到的字符串变成一个字符串
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	strncat(arr1, arr2, 6);//这个函数不会因为限制过长, 而增加'\0'
//
//	printf("%s\n", arr1);
//	return 0;
//}



//strncmp:
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 3);//比较的是两个字符串的前三个字符, 结果是相等
//	//在vs中返回的是1 0 -1
//	if (ret == 0)
//		printf("=\n");
//	else if (ret > 0)
//		printf(">\n");
//	else 
//		printf("=\n");
//
//	return 0;
//}


//4字符串查找
//strstr:const char* strstr(const char * str1, const char* str2);
//找到了返回子串的首地址
//在一个字符串中找另一个字符串

//模拟实现
//先确定首地址, 匹配成功然后主体1使用副本来比对(需要一个指针), 比对失败了, 就从本体1(需要一个指针)继续往后, 完全匹配成功了就从主体1往后打印, 主体2每次都从第一个开始打印(需要一个临时指针,每次都初始化)
//总结需要三个指针

//KMP算法, 也是用来实现在一个字符串中查找字符串

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//
//
//int main()
//{
//	char email[] = "2636254122@qq.com";
//	char substr[] = "66";
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//char substr[] = "qq";
//
//	//char* ret = strstr(email, substr);
//	//char* ret = my_strstr(email, substr);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//	{
//		printf("%s\n", ret);//从qq开始打印, 直到'\0'
//	}
//	return 0;
//}


//strtok:char * strtok(char * str, const char * sep), 被切割的字符, 分隔符
//在字符串中找到标记, 然后替换成'\0', 然后切割返回找到的字段的起始位置,但是会改变字符串, 所以建议拷贝一份数据
//切割字符串:2636254122@qq.com


//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。
//(注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。)
//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回 NULL 指针。

//int main()
//{
//	const char* sep = "@.";
//	char email[] = "2636254122@qq.com";
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//	char* ret = NULL;
//	for (ret = strtok(cp, sep);
//		ret != NULL;
//		ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char * ret = strtok(cp, sep);//函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置
//	//printf("%s\n", ret);
//	//char * ret = strtok(NULL, sep);//传空指针, 是从上次的位置开始, 第一次不传空指针
//	//printf("%s\n", ret);
//	//char * ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	return 0;
//}


//5错误信息报告
//strerror:char * strerror(int errnum), 传入错误码
//c语言的库函数, 在执行错误的时候, 都会设置错误码
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	//errno 是	C语言设置的一个全局的错误码存放的变量
//	FILE* pf = fopen("test.txt", "r"/*, encoding = "UTF-8"*/);
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//发送了一个错误码, 按道理就停止了, 如果继续执行, 存储的就是最新的错误码
//		return 1;//错误返回1
//	}
//	else
//	{
//		printf("找到了");
//	}
//	return 0;
//}


//字符分类函数

//int iscntrl(int c); 任何控制字符
//isspace 空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
//isdigit 十进制数字 0~9
//isxdigit 十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
//islower 小写字母a~z
//isupper 大写字母A~Z
//isalpha 字母a~z或A~Z
//isalnum 字母或者数字，a~z, A~Z, 0~9
//ispunct 标点符号，任何不属于数字或者字母的图形字符（可打印）
//isgraph 任何图形字符
//isprint 任何可打印字符，包括图形字符和空白字符

//int tolower(int c);//把大写转换成小写, 如果不是大写字母全部不变
//int toupper(int c);//把小写转化成大写

//int main()
//{
//	int a = isspace(' ');//如果是空格字符就返回8, 不是返回0.  -> 用处判断空格
//	printf("%d\n", a);
//	int a = isdigit('0');//如果是数字, 返回的是非零的值, 如果不是数字,返回0
//	printf("%d\n", a);
//	int a = isxdigit('0');
//	printf("%d\n", a);
//	int a = islower('0');
//	printf("%d\n", a);
//	int a = isupper('0');
//	printf("%d\n", a);
//	int a = isalnum('0');
//	printf("%d\n", a);
//	int a = ispunct('0');
//	printf("%d\n", a);
//	int a = isgraph('0');
//	printf("%d\n", a);
//	int a = isprint('0');
//	printf("%d\n", a);
//	int a = iscntrl('0');
//	printf("%d\n", a);
//	return 0;
//}

//memcpy - 内存拷贝
//memory - 内存 - 记忆
//memcpy:void * memcpy(void * destination, const void * source, size_t num(需要拷贝的字节个数)), 参数中的void讲究的就是一个通用

//模拟实现

//void* my_memcpy(void* dest, const void* source, size_t num)
//{
//	assert(dest && source);
//	//最后的结果是要返回原始的首地址, 所以需要在拷贝的数据上操作(一个指针), 目标的拷贝(一个指针), 源头的拷贝(一个指针)
//	void* ret = dest;
//
//	while (num--)//循环次数
//	{
//		*(char*)dest = *(char*)source;//将权限设置成一个字节, 就可以读到所有的字节
//		dest = (char*)dest + 1;//void不能++,因为不知道权限
//		source = (char*)source + 1;
//	}
//	return ret;
//}
//
////模拟实现memmove
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	//最后的结果是要返回原始的首地址, 所以需要在拷贝的数据上操作(一个指针), 目标的拷贝(一个指针), 源头的拷贝(一个指针), 但是不节约
//	//有时候需要从前往后处理数据
//	//有时候有需要从后往前处理数据
//
//
//
//	//				低地址			高地址
//	//观察dest的起始位置和src的起始位置
//	//1:dest起始地址在src起始地址前, 从前向后
//	//2.dest的起始地址在src的起始地址之后, 从后向前
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前向后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后向前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//	
//}
//
////strcpy, strncpy只能拷贝字符串
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	//int arr2[10] = { 0 };
//	////memcpy(arr2, arr1, 28);//不在乎类型, 只在乎内存
//	//my_memcpy(arr2, arr1, 28);
//	int tuple[] = { 1,2,3,4,5,6,7,8,9,10 };//目标{1,2,1,2,3,4,5,8,9,10};
//
//	//my_memcpy(arr3+2, arr3, 20);//等想要拷贝重叠的时候, 前面改变了数据, 影响了后面拷贝.
//	//momcpy 负责拷贝两块独立内存空间中的数据
//	//如果重叠感觉需要再来一个拷贝, 可以防止本体被改变而导致原方案被改变
//
//	//memmove 负责重叠内存的拷贝
//	//void * memmove ( void * destination, const void * source, size_t num );
//
//	//float arr3[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
//	//float arr4[10] = { 0.0 };
//	////memcpy(arr4, arr3, 20);//不在乎类型, 只在乎内存
//	//my_memcpy(arr4, arr3, 20);
//
//
//	//memmove基础语法:void* memcpy(void* destination, const void* source, size_t num);
//	//memmove(arr3 + 2, arr3, 20);
//	//memcpy(arr3 + 2, arr3, 20);//在vs中也可以实现重叠, 我们的实现的my_strcpy的是c语言的标准 
//
//
//	my_memmove(tuple, tuple + 2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", tuple[i]);
//	}
//	return 0;
//}

//memcmp, 比较内存是否相同
//基础语法:int memcmp ( const void * ptr1, const void* ptr2,size_t num );

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 }; //01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1,3,2 };		//01 00 00 00 03 00 00 00 02 00 00 00 
//	int i = memcmp(arr1, arr2, 12);
//	//比较到内存有差异处就结束了
//	printf("%d\n", i);// '<' 所以arr1 < arr2 
//
//	return 0;
//
//}

//memset, 设置内存
//基础语法:void * memset ( void * ptr, int value(如果是传入字符, 也是变成ASCII值), size_t num );

//int main()
//{
//	//char arr[] = "hello world";
//	//memset(arr, 'x', 5);//从左参数(起始地址)修改五个字节, 改成中间参数
//	//memset(arr+6, 'x', 5);//从左参数(起始地址)修改五个字节, 改成中间参数
//	//printf("%s\n", arr);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	memset(arr, 1, 40);//这个函数是以字节为单位改变, 把每一个字节(四个比特位)改变成中间参数
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
