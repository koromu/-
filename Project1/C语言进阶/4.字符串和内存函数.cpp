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

//1���ַ�������
//strlen   --------  size_t strlen ( const char * str );

//����ֵ��size_t, �޷������͵�������

//�ַ����Ѿ� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ������������� '\0' )��
//int main()
//{
//	//const char arr[] = "abcdef";
//	char arr[] = { 'a', 'b', 'c' };//�ַ�û��'\0'��β, ����ǰ��֪��ʲôʱ����'\0',�õ��������ֵ 
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	//		3				6
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	if (strlen("abc") - strlen("abcdef") < 0)
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}//�����޷�������, �õ��Ľ���Ǵ����

//ģ��ʵ��

//����������
//size_t my_strlen1(const char* str)
//{
//
//	size_t count = 0;
//	assert(str);
//	//����Ϊ��Ч, ��ָ��
//	//�ж��Ƿ���б����
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////ָ��-ָ��
//size_t my_strlen2(const char* str1)
//{
//	assert(str1);
//	const char* left = str1;
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	return (int)(str1 - left);
//}
////�ݹ�ķ���
//
//int main()
//{
//	const char arr[] = "abcdef";
//	size_t n1 = my_strlen1(arr);//�ַ������Ȳ������Ǹ���
//	size_t n2 = my_strlen2(arr);//�ַ������Ȳ������Ǹ���
//
//	printf("%u %u\n", n1, n2);//�޷���������%u
//
//	return 0;
//}

//2���Ȳ������Ƶ��ַ�������
//strcpy
//char* strcpy(char* destination, const char* source);
//���ұߵ��ַ�����������ߵ��ַ�������, ����'\0'����ǰ���ַ�

//int main()
//{
//	char name[20] = {};
//	char arr[] = { 'a', 'b', 'c' };
//	strcpy(name, "nihao");
//	//strcpy(name, arr);//	1.û��б��0, �ͻ��������һ����ֵ
//	//						2.name = "nihao", name �ǵ�ַ����, ��ַ����һ������, ���ܱ���ֵ
//	//						3.�������ĵط���Ҫ�ŵ���Ҫ�������ַ���
//	//						4.�����ַ������ܱ��޸�, ������Ϊdestination(Ŀ����)
//	printf("%s\n", name);
//
//	return 0;
//}

//ģ��ʵ��

//void my_strcpy(char* des, const char* sou) {
//    assert(des);
//    assert(sou);
//
//    while (*sou != '\0') {
//        *des++ = *sou++;
//    }
//    *des = '\0';
//}//���캯��

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
//�ַ���׷��, �е���cpy, Ŀ��ռ���Ҫ���޸�, ��Ҫ���㹻��
//

//ģ��ʵ��: �ҵ�Ŀ���ַ�����\0
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
//	//�Լ����Լ�׷��
//	//�����ǻ���Լ��Ľ�β'\0'��������, ������ѭ��
//
//	//char *arr3 = my_strcat(arr1, arr1);
//	printf("%s\n", arr2);
//	//printf("%s\n", arr3);
//
//	return 0;
//}

//strcmp

//ģ��ʵ��
//int my_strcmp(const char * str1, const char * str2)
//{
//	assert(str1);
//	assert(str2);
//	//ֱ�ӷ��������ַ���ASCII�Ĳ�ֵ
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
//	//�Ƚ������ַ����Ƿ����
//	//if (arr1 = arr2)
//	//{
//
//	//}ʹ�õȺ��жϷ����ж�������(������Ԫ�صĵ�ַ), ���ԱȽϵ��ǵ�ַ�Ƿ���ͬ
//
//
//	//�����ַ����Ƚ����,��Ҫʹ��strcmp:int strcmp(const *str1, const * str2);
//	//���str1>str2���ش������ֵ, ���ڷ���0,С�ڷ���С�����ֵ
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

//����strcpy, strcat, strcmpû�г�������,���Ȳ������Ƶ��ַ�������
//���Խ�����, ���ɻ���б���ִ��, ����Ҫ����Σ��

//3���������Ƶ��ַ�����������
//strncpy:char* strncpy(const char * str1, const char * str2, size_t num);

//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[] = "hello c";
//	char arr3[] = "ok";//������Ƴ��ȶ���, �Ჹ��'\0'
//	//strcpy(arr1, arr2);//arr1û���㹻�Ĵ�С, ��������ȫ
//	strncpy(arr1, arr2, 5);//�������Ƴ���, ����һ�������ַ�
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strncat:
//int main()
//{
//	char arr1[20] = "hello \0xxxxxx";//��⵽'\0'�ַ�Ȼ��, �ں������Ŀ���ַ���, ��������һ��λ�ú����һ��'\0', ���µĵ����ַ������һ���ַ���
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	strncat(arr1, arr2, 6);//�������������Ϊ���ƹ���, ������'\0'
//
//	printf("%s\n", arr1);
//	return 0;
//}



//strncmp:
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 3);//�Ƚϵ��������ַ�����ǰ�����ַ�, ��������
//	//��vs�з��ص���1 0 -1
//	if (ret == 0)
//		printf("=\n");
//	else if (ret > 0)
//		printf(">\n");
//	else 
//		printf("=\n");
//
//	return 0;
//}


//4�ַ�������
//strstr:const char* strstr(const char * str1, const char* str2);
//�ҵ��˷����Ӵ����׵�ַ
//��һ���ַ���������һ���ַ���

//ģ��ʵ��
//��ȷ���׵�ַ, ƥ��ɹ�Ȼ������1ʹ�ø������ȶ�(��Ҫһ��ָ��), �ȶ�ʧ����, �ʹӱ���1(��Ҫһ��ָ��)��������, ��ȫƥ��ɹ��˾ʹ�����1�����ӡ, ����2ÿ�ζ��ӵ�һ����ʼ��ӡ(��Ҫһ����ʱָ��,ÿ�ζ���ʼ��)
//�ܽ���Ҫ����ָ��

//KMP�㷨, Ҳ������ʵ����һ���ַ����в����ַ���

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
//		printf("�Ӵ�������\n");
//	else
//	{
//		printf("%s\n", ret);//��qq��ʼ��ӡ, ֱ��'\0'
//	}
//	return 0;
//}


//strtok:char * strtok(char * str, const char * sep), ���и���ַ�, �ָ���
//���ַ������ҵ����, Ȼ���滻��'\0', Ȼ���и���ҵ����ֶε���ʼλ��,���ǻ�ı��ַ���, ���Խ��鿽��һ������
//�и��ַ���:2636254122@qq.com


//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣
//(ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ�)
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣

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
//	//char * ret = strtok(cp, sep);//�������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
//	//printf("%s\n", ret);
//	//char * ret = strtok(NULL, sep);//����ָ��, �Ǵ��ϴε�λ�ÿ�ʼ, ��һ�β�����ָ��
//	//printf("%s\n", ret);
//	//char * ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	return 0;
//}


//5������Ϣ����
//strerror:char * strerror(int errnum), ���������
//c���ԵĿ⺯��, ��ִ�д����ʱ��, �������ô�����
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	//errno ��	C�������õ�һ��ȫ�ֵĴ������ŵı���
//	FILE* pf = fopen("test.txt", "r"/*, encoding = "UTF-8"*/);
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//������һ��������, �������ֹͣ��, �������ִ��, �洢�ľ������µĴ�����
//		return 1;//���󷵻�1
//	}
//	else
//	{
//		printf("�ҵ���");
//	}
//	return 0;
//}


//�ַ����ຯ��

//int iscntrl(int c); �κο����ַ�
//isspace �հ��ַ����ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit ʮ�������� 0~9
//isxdigit ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
//islower Сд��ĸa~z
//isupper ��д��ĸA~Z
//isalpha ��ĸa~z��A~Z
//isalnum ��ĸ�������֣�a~z, A~Z, 0~9
//ispunct �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
//isgraph �κ�ͼ���ַ�
//isprint �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�

//int tolower(int c);//�Ѵ�дת����Сд, ������Ǵ�д��ĸȫ������
//int toupper(int c);//��Сдת���ɴ�д

//int main()
//{
//	int a = isspace(' ');//����ǿո��ַ��ͷ���8, ���Ƿ���0.  -> �ô��жϿո�
//	printf("%d\n", a);
//	int a = isdigit('0');//���������, ���ص��Ƿ����ֵ, �����������,����0
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

//memcpy - �ڴ濽��
//memory - �ڴ� - ����
//memcpy:void * memcpy(void * destination, const void * source, size_t num(��Ҫ�������ֽڸ���)), �����е�void�����ľ���һ��ͨ��

//ģ��ʵ��

//void* my_memcpy(void* dest, const void* source, size_t num)
//{
//	assert(dest && source);
//	//���Ľ����Ҫ����ԭʼ���׵�ַ, ������Ҫ�ڿ����������ϲ���(һ��ָ��), Ŀ��Ŀ���(һ��ָ��), Դͷ�Ŀ���(һ��ָ��)
//	void* ret = dest;
//
//	while (num--)//ѭ������
//	{
//		*(char*)dest = *(char*)source;//��Ȩ�����ó�һ���ֽ�, �Ϳ��Զ������е��ֽ�
//		dest = (char*)dest + 1;//void����++,��Ϊ��֪��Ȩ��
//		source = (char*)source + 1;
//	}
//	return ret;
//}
//
////ģ��ʵ��memmove
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	//���Ľ����Ҫ����ԭʼ���׵�ַ, ������Ҫ�ڿ����������ϲ���(һ��ָ��), Ŀ��Ŀ���(һ��ָ��), Դͷ�Ŀ���(һ��ָ��), ���ǲ���Լ
//	//��ʱ����Ҫ��ǰ����������
//	//��ʱ������Ҫ�Ӻ���ǰ��������
//
//
//
//	//				�͵�ַ			�ߵ�ַ
//	//�۲�dest����ʼλ�ú�src����ʼλ��
//	//1:dest��ʼ��ַ��src��ʼ��ַǰ, ��ǰ���
//	//2.dest����ʼ��ַ��src����ʼ��ַ֮��, �Ӻ���ǰ
//	void* ret = dest;
//	if (dest < src)
//	{
//		//ǰ���
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//����ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//	
//}
//
////strcpy, strncpyֻ�ܿ����ַ���
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	//int arr2[10] = { 0 };
//	////memcpy(arr2, arr1, 28);//���ں�����, ֻ�ں��ڴ�
//	//my_memcpy(arr2, arr1, 28);
//	int tuple[] = { 1,2,3,4,5,6,7,8,9,10 };//Ŀ��{1,2,1,2,3,4,5,8,9,10};
//
//	//my_memcpy(arr3+2, arr3, 20);//����Ҫ�����ص���ʱ��, ǰ��ı�������, Ӱ���˺��濽��.
//	//momcpy ���𿽱���������ڴ�ռ��е�����
//	//����ص��о���Ҫ����һ������, ���Է�ֹ���屻�ı������ԭ�������ı�
//
//	//memmove �����ص��ڴ�Ŀ���
//	//void * memmove ( void * destination, const void * source, size_t num );
//
//	//float arr3[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
//	//float arr4[10] = { 0.0 };
//	////memcpy(arr4, arr3, 20);//���ں�����, ֻ�ں��ڴ�
//	//my_memcpy(arr4, arr3, 20);
//
//
//	//memmove�����﷨:void* memcpy(void* destination, const void* source, size_t num);
//	//memmove(arr3 + 2, arr3, 20);
//	//memcpy(arr3 + 2, arr3, 20);//��vs��Ҳ����ʵ���ص�, ���ǵ�ʵ�ֵ�my_strcpy����c���Եı�׼ 
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

//memcmp, �Ƚ��ڴ��Ƿ���ͬ
//�����﷨:int memcmp ( const void * ptr1, const void* ptr2,size_t num );

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 }; //01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1,3,2 };		//01 00 00 00 03 00 00 00 02 00 00 00 
//	int i = memcmp(arr1, arr2, 12);
//	//�Ƚϵ��ڴ��в��촦�ͽ�����
//	printf("%d\n", i);// '<' ����arr1 < arr2 
//
//	return 0;
//
//}

//memset, �����ڴ�
//�����﷨:void * memset ( void * ptr, int value(����Ǵ����ַ�, Ҳ�Ǳ��ASCIIֵ), size_t num );

//int main()
//{
//	//char arr[] = "hello world";
//	//memset(arr, 'x', 5);//�������(��ʼ��ַ)�޸�����ֽ�, �ĳ��м����
//	//memset(arr+6, 'x', 5);//�������(��ʼ��ַ)�޸�����ֽ�, �ĳ��м����
//	//printf("%s\n", arr);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	memset(arr, 1, 40);//������������ֽ�Ϊ��λ�ı�, ��ÿһ���ֽ�(�ĸ�����λ)�ı���м����
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}