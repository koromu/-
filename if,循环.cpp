#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//if�����.0�Ǽ�,��0����

//switch��default����������λ��,����ӦΪ��caseǰ�����ж�

//case��ı��ʽ,ֻ�������α��ʽ:char-Ҳ��������,��Ϊ�ַ��洢��,�洢����ASCIIֵ
//switch()������ֻ��������

//void Swap(int* px, int* py)
//{
//	int tmp = *px;//��px��py����
//	*px = *py;
//	*py = tmp;
//
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����
//	int tmp = 0;
//	if (a < b)
//	{//��С�Ļ����������
//	//	int tmp = a;
//	//	a = b;
//	//	b = tmp;
//	//
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		//tmp = a;
//		//a = c;
//		//c = tmp;
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		//tmp = b;
//		//b = c;
//		//c = tmp;
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



//����������,���������������Լ��
//������������С����,Ȼ��--����,�ҵ��ĵ�һ���������Լ��


//�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a, &b);
//	int min = (a < b ? a : b);
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			break;
//		}
//		min--;
//	}
//	printf("%d\n", min);
//}

//շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	//��a%b������ 
//	//����������b,��b����a
//	while(c = a%b)
//	{
//		a = b;
//		b = c;
//		//c = 0 Ҳ����������ʱ��,�õ�0Ϊ��,�˳�ѭ��
//	}
//	printf("%d\n", b);
//}



//a*b/���Լ��=��󹫱���

//��д������һ�� 1 �� 100 �����������г��ֶ��ٸ�����9

//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�жϸ�λ�ǲ���9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//
//		//�ж�ʮλ�ǲ���9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//������� 1-1/2+1/3-...+1/99-1/100��ֵ

//����ȡ����,���ǳ���������һ��������

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%f\n", sum);
//
//	return 0;
//}


// ���Ǹ������е����ֵ

