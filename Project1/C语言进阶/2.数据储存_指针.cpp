#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>


//�ַ�ָ��
//char* ���͵�ָ��
//int main()
//{
//	//ֵ����, ��������
//
//	//(abcdef��һ�������ַ���,���ܸ���,����һ��ָ����, �п��ܱ�����, Ȩ�ޱ����, ��Σ�ջᱨ��)
//	const char* p = "abcdef";//ʵ�ʷŵ����ַ������ַ��ĵ�ַ(����'\0'����7���ַ�, ��7���ֽ�, ��ָ��ֻ�ܴ�4���ֽ�)
//	char arr[] = "abcdef";//�����зŵ�
//	printf("%s\n", p);//����һ����ַ,printf����, %sȻ����'\0'
//
//	return 0;
//}


//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//�������������Ը���,���Դ�ŵĵ�ַ��ֻ������.ֻ��������ָ��, ָ��ͬһ���ط�,ӵ����ͬ�ĵ�ַ.
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//�����ǿ��Ը��ĵ�, ���Դ�ŵĵط��������ռ�,��ַ�ǲ���ȵ�.��������ʾ������Ԫ�صĵ�ַ.
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2");
//	}
//	if (arr1 == arr2)
//	{
//		printf("arr1 ==arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2");
//	}
//}


//ָ������:���������ָ�������
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };//�������ָ�������int* int* int* int*
//	int arr2[] = { 2, 3, 4, 5, 6 };//����ַ�ָ�������char* char* char*
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* arr[]{ arr1, arr2, arr3 };//�����Ƕ��,����ָ������
//
//	int i;
//	int j;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 5; j++)
//		{
//			//*(p + i) = p[i]
//			printf("%d ", *(arr[i]+j));//ģ���ά����, ���������ڴ治һ�����������,���Բ��Ƕ�ά����
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ�� -> ָ�� -> ָ�������ָ��

//����ָ�� - ָ�����͵�ָ��
//int*
//�ַ�ָ�� - ָ���ַ���ָ��

//int main()
//{
//	//int* p1[10];//p1��ָ������
//	//int(*p2)[10];//p2������ָ��, p2����ָ��һ������, ��������10��Ԫ��, ÿ��Ԫ����int����
//	char* arr[5] = { 0 };
//	char* (*pc) [5] = &arr;
//
//
//	return 0;
//}

//������vs

//int main()
//{
//	int arr[10] = { };
//	int* p = arr;
//	int (*p2)[10] = &arr;//����ʲô���͵�ָ��������ĵ�ַ�� - ����ָ��>���������������ĵ�ַ: int(*)[] ����������, ָ����p2
//	printf("%d\n", arr);
//	printf("%d\n", arr+1);//һ������
//
//	printf("%d\n", &arr);
//	printf("%d\n", &arr+1);//һ������
//	
//	printf("%d\n", &arr[0]);
//	printf("%d\n", &arr[0]+1);//��������������, ����40���ֽ�
//}

//������ͨ����ʾ�Ķ�����Ԫ�صĵ�ַ
//������������
//1. sizeof(������), �������������ʾ��������, ���������������Ĵ�С
//2. &������, �������������ʾ����Ȼ����������, ���� '&������' ȡ������ '��������' �ĵ�ַ

//int main()
//{
//	int arr[] = { 1, 2 ,3 ,4 ,5 ,6 ,7, 8, 9, 10 };
//	//int (*p)[10] = &arr;//����Ĭ����0
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	//printf("%d ", (*p)[i]);//p��ָ�������, *p��ʵ���൱��������, ����������������Ԫ�صĵ�ַ
//	//	//printf("%d ", *(*p + i));
//
//	//}
//
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	return 0;
//}


//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print2(int (*p)[5], int r, int c)//��ά�����һ��Ԫ��, ��һ������.����һ������ĵ�ַ, Ӧ��������ָ�����
//{
//	//��ά�������Ԫ���ǵ�һ��
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", (*(*p + i) + j));
//			//printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//}

//int(*parr3[10])[5] = { &arr1, &arr2, &arr3 }; //�������ָ�������
//int* parrr2[10]; //����ָ������

//�������, ָ�����
//����ָ����Ǵ��һ��ָ��ĵ�ַ
//void test(int** arr)
//{
//
//}

//int main()
//{
//
//	int* arr[20] = { };
//	test(arr);
//}

//(�βε�)��ά�����п���ʡ��, �в���ʡ��
//void test(int arr[][5])
//{
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


//����ָ�봫��

//void  test(int** ptr)
//{
// }
//int main()
//{
//	//��ôtest()���Դ���ʲô������
//
//	//1.ָ������
//	//2.һ��ָ��
//	//3.����ָ�������һ��
//	//...
//
//}

//����ָ��:ָ������ָ����Ǻ���ָ��
//����ָ��: ָ�������ָ���������ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int arr[5] = {	};
//	//&���� - ȡ������ĵ�ַ
//	int(*p)[5] = &arr;//����ָ��
//
//	printf("%d\n", &Add);
//	//��ӡ�����ĵ�ַ, ����Ҳ���е�ַ��
//	printf("%d\n", Add);//?
//	//���ں�����˵, ȡ��ַ�������ͺ��������Ǻ����ĵ�ַ;
//
//	  int		 (*pf) (int,		 int) = &Add;
//	//����ֵ����      (��������, ��������)

// //�ͺ�����д������
//	  int ret = (*pf)(2, 3);//�����ú���ָ��, ͬ��������ʹ�ú���
//	  //int ret = (pf)(2, 3);//��дҲ��, д���ٸ��ǺŶ���, ��Ϊ������Add�������ǵ�ַ, pfҲ�Ǹ���ַ, ���Ժ�������ֱ��д, ����ָ��Ҳ��
//	  printf("%d\n", ret);
//	return 0;
//}

//void calc(int (*pf)(int , int ))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}

//int main()
//{
//	calc(Add);
//	return 0;
//}

//����ָ��Ĳ���
//int arr[5];			
//pa = &arr;			
//(*pa) = &arr;			��ַ�浽ָ������
//(*pa)[5] = &arr;		��������5��Ԫ��
//int(*pa)[5] = &arr;	ÿ��Ԫ�ص�����������

//int main()
//{
//	( *( void(*)() )0 )();
//	//void(*)( )��һ������
//	//(����)0����ǿ��ת��
//	// 
//	//( coid(*)() )0, ǿ��ת����ַ0
//	//1.��0ǿ������ת��Ϊ�޲���, ����������void�ĺ�����ַ
//	//2.����0��ַ�����������
//	//typedef unsigned int uint;
//
//	typedef void(*pf_t)(int);// ��void(*)(int)����������Ϊpf_t
//
//	void(*signal(int, void(*)(int)))(int);
//	//���ϴ�����һ�κ�������, �����ĵ�һ��������������int, �ڶ��������������Ǻ���ָ��, �ú���ָ��ָ��ĺ���������int
//	//����ֵ��void, signal�����ķ�������Ҳ��һ������ ָ������
//	pf_t signal(int, pf_t);
//	return 0;
//}

//����ָ����ô�

//������
// x&y
// x|y
// ...������� 



//void menu()
//{
//	printf("******************************\n");
//	printf("******  1.add	2.sub   ******\n");
//	printf("******  3.mul   4.div   ******\n");
//	printf("******     0.exit	******\n");
//	printf("******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//void comp(int (*pf) (int, int))
//{
//
//	printf("��ѡ������������:");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}


//int main()
//{
//	int input = 0;
//	int x;
//	int y;
//	int ret;
//	do
//	{
//		menu();
//		printf("��������Ҫ������:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			printf("��ѡ������������:");
//			scanf("%d %d", &x, &y);
//			//comp(Add);
//			break;
//		case 2:
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			printf("��ѡ������������:");
//			scanf("%d %d", &x, &y);
//			//comp(Sub);
//			break;
//		case 3:
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			printf("��ѡ������������:");
//			scanf("%d %d", &x, &y);
//			//comp(Mul);
//			break;
//		case 4:
//			ret = Div(x, y);
//			printf("%d\n", ret); 
//			printf("��ѡ������������:");
//			scanf("%d %d", &x, &y);
//			//comp(Div);
//			break;
//		case 0:
//			break;
//		default:{
//			printf("ѡ�����.\n");
//		break;
//		}
//		}//�������ظ��Ѻ�����ַ�����ȥ, ���ڲ��ҵ���Ӧ�ĺ���, ���벻ͬ�ĺ���, �õ���ͬ�Ĺ���(�ص�����)
//	}
//		while (input);
//
//		printf("�˳��ɹ�");
//		return 0;
//}

//����ָ�������÷�
//int main()
//{
//	int input;
//	int x;
//	int y;
//	int ret;
//	int (*arr[])(int, int) = {0 , Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳��ɹ�");
//			break;
//		}
//		else if (input >=1 && input <=4)
//		{
//			printf("��ѡ������������:");
//			scanf("%d %d", &x, &y);
//			printf("\n");
//			ret = arr[input](x, y);
//			printf("�����:%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//
//
//	} while (input);
//
//	return 0;
//}

//����ָ������
//��ź���ָ������� 

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int (*pf)(int, int) = Add;
//
//	//�γɹ���
//	//aee[4]:һ�������ĸ�Ԫ��(Ԫ���Ǻ����� -> ��ַ)
//	//int (*)(int, int ) �������õĲ�������, �ͷ�������
//	//����: int (*arr[4])(int, int ) -> ����ָ������
//
//	int (*arr[4])(int, int ) = {Add, Sub, Mul, Div};//����������ͬ, ����������ͬ�ĺ���, �ŵ�����ָ��������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//ֻ�뺯��ָ�������ָ��: �����õõ����Ǻ���ָ���������Ԫ�ص�ַ

//int main()
//{
//	int (*arr[])(int, int) = {0, Add, Sub, Mul, Div };
//	//����: int (*)(int,int)
//	//����: arr[4]
//	//ָ��[����ָ������]��ָ��: ��������ָ��
//	int (*(*p_arr)[5])(int, int) = &(arr);//���5��������Ϊ���ܼ�����ʵ���ж��ٸ�Ԫ��, ��Ҫ��Ӧ�ܰ����������ָ������
//	//����:int(*)(int, int) -> ����ָ������
//	//:����ָ������*arr[4] -> ������ָ�� ָ����Ǻ���ָ������
//	return 0;
//}


//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��
//�����������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú���
//��ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���������
//����Ӧ��

//ð������

//�������ڵ�Ԫ�رȽ�
//void bubble_sort(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		//�������������ź����
//		int flag = 1;
//		//һ��ð�ݺ���
//		int j = 0;
//		for (j = 0; j < len  -1 -i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
////
////qsort - ����������������������͵�����
////
////void qsort("void* base,//��Ҫ��������ݵ���ʼλ��"
////			 "size_t num,//�����������Ԫ�صĸ���"
////			 "size_t width,//�����������Ԫ�صĴ�С(��λ���ֽ�)"
////			 "int(* cmp)(const void* e1, const void* e2)//����ָ�� - �ȽϺ���"
////			 );
//
////qsort�Ĳ�������:
////�����ܲ���֪������Ĵ����������? ���� -> ��������void*����
////֪����Ԫ��������? ���� ->����Ҫ����Ԫ�ظ�����Ԫ�ؿ��, �Ϳ��Զ���ÿ��Ԫ��
////
//
//
//
////��������Ƚ���������Ԫ��
////e1ָ��һ������, �Ǹ�ָ��
////e2ָ����һ������, �Ǹ�ָ��
//int cmp_int(const void* e1, const void* e2)
//{
//	////���ǲ���ֱ�ӽ����� void*���͵�ָ��
//	//if (*(int*)e1 - *(int*)e1)
//	//{
//	//	return 1; //e1 - e2 ����0,��Ҫ���ش���0����
//	//}
//	//else if (*(int*) e1 < *(int*) e2)
//	//{
//	//	return -1;//e1 - e2 С��0,��Ҫ����С��0����
//	//}
//	//else
//	//{
//	//	return 0;//e1 == e2 ���ʱ��Ҫ����0
//	//}
//	return (*(int*)e1 - *(int*)e2);//����
//	//return (*(int*)e2 - *(int*)e1);//����
//
//}
//
//
////void�����͵�ָ��
////int main()
////{
////	int a = 10;
////	//char* pa = &a;//���Ͳ�һ��
////	void* pa = &a; // û����ȷ���͵�ָ��(void*), ���Խ����������͵ĵ�ַ
////	//void* ���޾������͵�ָ��, ���Բ��ܽ����ò���, Ҳ����+-����
////}
//
//
////int main()
////{
////	//int arr[] = {9,8,7,6,5,4,3,2,1,0};
////	int arr[] = {0,1,2,3,4,5,6,7,8,9};
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	//����
////	//bubble_sort(arr, sz);
////	qsort(arr, sz, sizeof(arr[0]), cmp_int);//��qsort��������, �ѱȽϺ�������ȥ, ��qsort���ڲ����ض���ʱ��ʹ�� -> �ص������Ķ���
////
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////
////	return 0;
////}
//
//void test1()
//{
//		//int arr[] = {9,8,7,6,5,4,3,2,1,0};
//		int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		//����
//		//bubble_sort(arr, sz);
//		qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//		int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//���ҵ�e1�ڲ�
//	//strcmp -> �պú�qsort�Ĺ�����ͬ e1, e2�ıȽϷ��ص�ֵ��>0 <0 =0	
//	return  strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//�Ƚ�����,�ǱȽ������ַ���������strcmp
//
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//���ҵ�e1�ڲ�
//	return  ((struct Stu*)e1)->age -((struct Stu*)e2)->age;//�Ƚ�����,ֱ������e1 e2�õ��ľ��Ƿ��ص�ֵ
//
//}
//
////�����Լ���ð�ݺ���
//
//void Swap(char* infort, char* after, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *after;
//		*after = *infort;
//		*infort = tmp;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))//�ο�qsort�Ĳ���, ���ĸ�����ָ���cmp
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//�����������ź����
//		int flag = 1;
//		//һ��ð�ݺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//���㴫���base��ʲô����, ����ǿ������ת��, Ȼ�󴫸�e1, e2Ȼ��Ƚ�������(���ܴ���void*), �Ƚ�ǰ����Ŀ -> ð�ݺ����ĸ���
//			//�����base�Ŀ�ͷ, �ټ����j�����, �õ��ľ��ǵ�j��Ԫ�صĿ�ͷ
//			//�����base�Ŀ�ͷ, �ټ����j+1�����, �õ��ľ��ǵ�j+1��Ԫ�صĿ�ͷ
//
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//ʹ�ô���ıȽϺ����Ƚ�
//			{
//				//��������
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			flag = 0;//�������˾���û�ź�
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void test2()
//{
//	//ʹ��qsort����ṹ����
//	struct Stu s[] = { {"nihao", 12}, {"good", 11}, {"c", 16} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);//Ĭ��������, 
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//Ĭ��������, 
//}
//
//void test3()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	//bubble_sort(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test4()
//{
//	//ʹ��qsort����ṹ����
//	struct Stu s[] = { {"nihao", 12}, {"good", 11}, {"c", 16} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);//Ĭ��������, 
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//Ĭ��������, 
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//}



