#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//������<>


// main ǰ���int ��˼��ʾmain �������÷���һ������ֵ
//int main()
//{
//	printf("hello world\n");
//		return 0; // ����0
//}

//f ���� function

//printf-��ӡ����	�⺯��-C���Ա����ṩ�������ṩ������ʹ�õĺ���	���˵Ķ���-Ҫ���к�
//�к�����#include-����		����stdio.h = std-��׼standard. i = input .out = output.	ȫ������ͷ�ļ�

// һ��Ϊ��ʱ�Ĵ���
//void main()


//��������
//char		�ַ�����
//short		������
//int		����
//long		������
//long long ����������  c99
//float		�����ȸ�����
//double	˫���ȸ�����
// ��ʽ������
//%d -		��ӡ����
//%c -		��ӡ�ַ���
//%f -		��ӡ��������- ��С��	С�������5λ��
//%p -		�Ե�ַ����ʽ��ӡ
//%x -		��ӡ16��������
//%o -		...
//int main()
//{
//	//char ch = 'A';//���ڴ�����һ���ռ�
//	//printf("%c\n", ch);//%c == ��ӡ�ַ���ʽ������
//
//	//int age = 20;
//	//printf("%d", age);//%d --��ӡ����10��������
//	double d = 6.111;
//	printf("%lf\n", d);//˫���� doubleҪ��%lf
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));		//1 ��λ���ֽ� 
//	printf("%d\n", sizeof(short));		//2
//	printf("%d\n", sizeof(int));		//4
//	printf("%d\n", sizeof(long));		//������4Ҳ������8
//	printf("%d\n", sizeof(long long));	//8
//	printf("%d\n", sizeof(float));		//4
//	printf("%d\n", sizeof(double));		//8
//	return 0;
//}

//bit - ���ر�					�������Ӳ��--ͨ��
//byte - �ֽ�(�˸�����λ)		���� ����
//kb	 1024���ֽ�				 1     0
//mb	1024��kb				һ��1����һ��0���Ǳ���λ
//gb	1024��mb					10����	0 1 2 3 4 5 6 7 8 9 
//tb	1024��gb					2����	0 1 
//pb	1024��tb					8����	0 1 2 3 4 5 6 7
//123 = 1*10^2 + 2*10^1 + 3*10^0
//010 = 0*2^2 + 1*2^1 + 0*2^0 = 0+2+0 = 2
//һ��short��16���ֽ� ���Ա�ʾ����� 2^16-1 = 65535 
// 'short int' �� 'int' ��ʡ�ռ�


//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ� = 16bitλ,�������20
//	float weight = 95.6;//���ڴ�����4���ֽ������洢
//	return 0;
//}

//C���Ա�׼�涨
//sizeof(long) >=sizeof(int)�͹���






//�����ͳ���
//int num2 = 20;//ȫ�ֱ���-�����ڴ����({})֮��ı���
//int main()
//{
//	int num2 = 10;//�ֲ����� - �ڴ����֮�еı���
//	printf("%d\n", num2);
//	return 0;			//�ֲ�������ȫ�ֱ������ֲ�Ҫ��ͬ
//						//�ֲ�������ȫ�ֱ���������ͬʱ,�ֲ���������
//}

//int main()
//{
//		int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//������ʹ��
//int main()
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//�������� - scanf
//	scanf("%d%d", &num1, &num2);
//	//int num1 = 0; ��4���Լ��Ŀռ� &xxx ��xxx��λ�÷���ǰ��
//	//C�����﷨�涨, ����Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//�ֲ�������������,���ڵĴ�������涼��������
//	int num = 0;
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}
//int global = 2023;


//void test()
//{
//	printf("%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}
//int main()
//{	//ȫ�ֱ�����Ҫ��ʹ�õ��ļ�������������ʹ���������̵ı���
//	extern int global_char;
//	printf("global_char = %d\n", global_char);
//
//	return 0;
//}

// ������������		�ֲ�����:�������ſ�ʼ�������Ž���
//					ȫ�ֱ���:�����������������