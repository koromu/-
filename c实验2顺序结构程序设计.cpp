//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	char ch1, ch2, ch3;
//	scanf("%d,%d", &x, &y);
//	getchar();                           //�õ�scanf�������Ļس���
//	printf("x=%d,y=%d\n", x, y);
//	scanf("%c%c%c", &ch1, &ch2, &ch3);
//	printf("ch1=%c,ch2=%c,ch3=%c\n", ch1, ch2, ch3);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char X;
//	scanf("%c", &X);
//	X -= 32;
//	printf("%c\n", X);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c, S = 0;	scanf("%d %d %d", &a, &b, &c);
//	int s = (a + b + c) / 2;
//	S = sqrt(s*((s - a) * (s - b) * (s - c)));
//	printf("%d", S);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	float r = 0.0, h = 0.0, PI = 3.14, S1, S2, V;
//	scanf("%f %f", &r, &h);
//	S1 = PI * r * r;//�����
//	S2 = S1 + 2*PI*r*h; //�����
//	V = S1 * h; // ���
//	printf("Բ������� = %.2f, Բ������� = %.2f, Բ����� = %.2f\n", S1, S2, V);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <math.h>
//int main()
//{//���һ��Xλ��
//	int x; scanf("%d", &x);
//	int temp = 0;
//	while (x != 0)
//	{
//		temp = x % 10;
//		printf("%d", temp);
//		x /= 10;
//	}
//		return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <math.h>
//void swap1(int* a, int* b)
//{
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//void swap2(int* a,int* b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a, b; scanf("%d %d", &a, &b);
//	swap1(&a, &b);//��������������
//	//swap2(&a, &b);//������������
//	printf("a = %d b = %d", a, b);
//	return 0;
//}