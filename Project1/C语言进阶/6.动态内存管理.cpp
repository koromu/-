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

//int main()
//{
//	int a = 10;//4���ֽ�
//	int arr[10];//40���ֽ�
//	//���Ͽ��ٺ��޷��ı�
//
//	return 0;
//}

//��̬�ڴ����

//�Ĵ�������Ŀռ䶼�洢�ڶ���
//malloc�����﷨: void* malloc (size_t size);//��Ҫ�ĳߴ��ֽڸ���

//������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ��
//�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ�����
//����ֵ�������� void* ������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ�
//������� size Ϊ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�����������

//���ٿռ�ʧ�ܷ��ؿ�ָ��

//int main()
//{
//	int* p_int1 = (int*)malloc(40);
//	//int* p_int2 = (int*)malloc(INT_MAX);//����ʧ��
//	if (p_int1 == NULL)
//	{
//		printf("%s\n", strerror(errno));//����errno
//		return 1;
//	}
//	//ʹ���ڴ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p_int1 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p_int1 +i));
//	}
//	//û��free, 
//	//�������ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��,���������ʱ��ͻ�������
//	//�ͷ�����
//	free(p_int1);//������p_int���Ǽǵõ�ַ
//	//��ȫ��ȫ����
//	p_int1 = NULL;
//	return 0;
//}

//int main()
//{
//	
//	//malloc();
////������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ��
////�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ�����
////����ֵ�������� void* ������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ�
////������� size Ϊ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�����������
//
//	//free();//���ܵ�һ����malloc�õ����ڴ治��ʲôָ�붼���Դ���ȥ, ����ǿ�ָ��,ʲô��������
//
//
//
//	return 0;
//}

//calloc�Ļ����﷨
//void* calloc(size_t num��Ҫ��С�ռ����, size_t sizeÿ��С�ռ�Ĵ�С(��λ�ֽ�));


//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//�˴��������,calloc���Զ���ʼ��, malloc�����ʼ��
//		//calloc = malloc + menset��ʼ��
//	}
//	free(p);//���ٿռ���Ҫ���ͷŵ�ϰ��
//	p = NULL;
//
//	return 0;
//}


//�����ռ�Ļ����﷨:
//void* realloc(void* ptr��Ҫ�޸ĵĿռ����ʼ��ַ, size_t size��Ҫ�޸ĺ�Ŀռ��С);

//int main()
//{
//	int* p_int = (int*)malloc(40);
//	if (p_int == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p_int+ i) = i + 1;
//	}
//	
//	//����:�޸�p_int���ڴ�ռ�
//	//���1:ԭ�ռ���㹻, ֱ�����������ڴ�
//	int* ptr = (int*)realloc(p_int, 80);//ע��ǿ�뷨ת��
//	//���2:ԭ�ռ��ռ䲻��,��һ���㹻��λ��, ����һ���ԭ���ݿ���һ��, Ȼ���ͷ�ԭ�ڴ�
//	if (ptr != NULL)
//	{
//		p_int = ptr;
//	}
//	free(p_int);
//	p_int = NULL;
//
//	return 0;
//}


//realloc(NULL, 40) �ȼ��� malloc(40)


//��̬�ڴ�������Ĵ���

//1.�Զ�̬�ռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	*p = 20;//ֱ�ӽ����û������, ����ǿ�ָ��
//	free(p);
//	return 0;
//}

//�Զ�̬�ڴ�Ŀ��ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i <= 10/*��ʱ����Խ�����*/; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);//freeʱ,p����ָ���ʼλ��, freeҪ�����ڴ����λ��->����ʹ��p[i]/*(p+i)���иı�,�Ͳ���ı�p,����ʹ��i�ı�һ��ָ�����ָ���λ��
//	p = NULL;
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//
//	free(p);
//	//���Դ˴���Ҫ����Ϊ��ָ��
//	p = NULL;//��ȷ��
//
//	free(p);//Ұָ���ٱ��ͷ�,��������
//
//	return 0;
//}

//6.��̬�����ڴ������ͷ�(�ڴ�й©)

//void test()
//{
//	//int* p = (int*)malloc(40);
//	//pass;
//
//	return;//�˴�������, free�п��ܲ���ִ��
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//int* test()
//{
//	int* p = (int*)malloc(40);
//
//	if (p == NULL)
//	{
//		return p;
//	}
//
//	return p;
//	//û���ͷ�
//}
//������ʹ��ʱҲ��֪��Ҫ�ͷ�


//��Ŀ
//void GetMemory(char** p/*��ŵ���str�ĵ�ַ*/)
//{
//	*p/*�õ�str�ĵ�ַ*/ = (char*)malloc(100);
//	//str��ŵľ��Ƕ�̬���ٵ�100���ֽڵĵ�ַ
//}
////p����ʱ����, �ı�p��strû��Ӱ��
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//��ʱstr���ǿ�ָ��
//	strcpy(str, "hello world");
//	printf(str);
//	//�ǵ��ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int * test()
//{
//	//����ջ�ռ�ĵ�ַ
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);//������Զ�ĵ�����ԭֵ, �����������,�Ͳ���ԭֵ��
//	return 0;
//
//}

//��Ŀ3

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}//���Դ�ӡ, ����û���ͷ��ڴ�
//
//int main()
//{
//	Test();
//	return 0;
//}

//��Ŀ4

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;//�������, ��ָ��ʧ��
//	if (str != NULL)
//	{
//		//Ұָ��, ���ǵõ�ַ,���ǲ�������Ӧ��֪���ĵ�ַ�Ϳռ�
//		strcpy(str, "world");//Ұָ������޸�
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��������

//typedef struct st_type
//{
//	int i;
//	//int a[0];//��ʽ1:���������Ա
//	int a[];//��ʽ2
//}type_a;

//1.�ṹ�е����������Աǰ��"����"����һ��������Ա�����ұ��������һ����Ա
//2.sizeof ���ص����ֽṹ��С����������������ڴ�
//3.�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С

//struct S
//{
//	int i;
//	int arr[];
//};
//
//int main()
//{
//	//int sz = sizeof(struct S);;
//	//printf("%d\n", sz);//4
//	struct S s;//4,û��arr�Ŀռ�
//
//	//���������ʹ��
//	struct S* ps = (struct S*)/*ע��ǿ������ת��*/malloc(sizeof(struct S/*�����������鿪�ٵ�*/) + 40/*���������鿪�ٵ�*/);
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	ps->i = 100;
//	int n = 0;
//	for (n = 0; n < 10; n++)
//	{
//		ps->arr[n] = n;
//	}
//
//	for (n = 0; n < 10; n++)
//	{
//		printf("%d ", ps->arr[n]);
//	}//��ʱ�ڴ������, ��Ϊ������������ٿ���
//	struct S* ret = (struct S*)/*��������Ҫ��ͬ*/realloc(ps, sizeof(struct S) + 80);
//	if (ret != NULL)
//	{
//		ps = ret;//�����ʹ������ʧ����
//		ret = NULL;//�������ͷ�,��Ϊָ��ĵ�ַ�ռ���һ����
//	}
//
//	free(ps);
//	ps = NULL;
//	return 0;
//}//һ��malloc,һ���ͷ�


//ָ�뷽��
//struct  S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));//��һ��malloc
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//			return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int *)/*��Ϊarr�Ǹ�����ָ��*/malloc(40);//�ڶ���malloc
//	if (ps->arr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//����
//	int* ret = (int*)realloc(ps->arr, 80);
//	if (ret != NULL)
//	{
//		ps->arr = ret;
//		ret = NULL;
//	}
//
//	free(ps->arr);//���ͷ��ڲ���,�Է�ֹ�Ҳ����ڲ����ڴ���
//		free(ps);
//	return 0;
//}//malloc����(���ײ���������ڴ���Ƭ), �ͷ����� -> �����ʴ�

//��һ���ô��ǣ������ڴ��ͷ�
//�ڶ����ô��ǣ����������ڷ����ٶ�

//�Ĵ�������Ŀռ䶼�洢�ڶ���,Ϊ�˷��ڶ���,�����Ķ�������