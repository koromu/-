#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//C��������Ϊ����
//1.������
//2.�������
//��������Ϊ���� 
 

//3.
//4.�������
//5.�����


//C������[�ṹ��]�ĳ����������
//˳��ṹ ѡ��ṹ(if switch) ѭ���ṹ(for while do while)



//��֧
//if (���ʽ)	if����ֻ�ܸ�һ�����
	//{���1};		//���ʽ����ִ�����1
//else			else����Ҳֻ�ܸ�һ�����
	//{���2];		//���ʽ������ִ�����2



//���֧
//int main() {
//	if (���ʽ)
//	{
//		���1
//	}
//	else if (���ʽ)
//	{
//		���2
//	}
//	else if (���ʽ)
//	{
//		���3
//	}
//	else
//	{
//		���4
//	};
//	return 0;
//}
//������ʽ��0,��ִ�к�������

// else ������� if ͬһ���㼶


//��ǿ����Ĺ淶  C���Ա������п������շ� Ҳ�����»���

//if (���� == ����)�������ж� ��������Ⱥžͻᾯ��  ���򲻻ᱨ��


//int main()
//{
//	int num = 0;
//	scanf("%d\n", &num);
//
//	if (num % 2 == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("ż��\n");
//	};
//	return 0;
//}

//�ж�1-100֮�������
//int main()					
//{							
//	int num = 1;						
//	while (num <= 100)				
//	{								
//		if (num % 2 == 1)			
//		{							
//			printf("%d\n", num);	
//			num++;						
//		}								
//		else							else ��ʵ���Բ��üӾ�������
//		{							
//			num++;
//			continue;
//		}
//	}
//
//	return 0;
//}									

//switch ���ڶ��֧���
//int main()
//{
//	switch (���ͱ��ʽ)
//	{
//		case ���γ������ʽ:
//			���;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	switch (day)
//	{
//	case 1:		//������1.0,�ǳ����������� ������n,���ǳ��� !�ַ���ASCII��ֵ���Կ���
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("ѡ�����");
//		break;
//	}
//	return 0;
//}


//���� default���


//switch�ǿ���Ƕ�׵�
//break���������ڵ�switch




//ѭ�����
//while (����(���ʽ))
//{
//	ѭ�����;
//}


//int main()
//{
//	if (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}	//����Ļ��ӡ1-10

//int main()
//{
//	int i = 1;
//	while (i <= 9)
//	{
//		int j = 1;
//		while (j <= i)
//		{
//			int sum = j * i;
//			printf("%d * %d = %d ", j, i, sum);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}	//99�˷���



//continue�����������������,ֱ�ӿ�ʼ��һ��ѭ��

//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//}
//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar() != EOF))
//	//{
//	//	putchar(ch);
//	//}
//
//	//������
//	char password[20] = { 0 };
//	printf("����������");
//	scanf("%s", password);			//scanf ���ò����õ� 1.\n 2.�ո�
//	//getchar();						//��ȡ��\n
//	int ch = 0;
//	while ((ch = getchar() != '\n'))//��һ�ξ�����������
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):>\n");
//	int ret = getchar();			//getchar�ͻ���      \n
//
//		if ('Y' == ret)
//		{
//			printf("Yes\n");
//		}
//
//		else
//		{
//			printf("No\n");
//		}
//
//	return 0;
//}






#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')		// a || b   ����a����b����һ������
//			continue;
//		putchar(ch);					//�����12345678�ͻ��ӡ ������һ���ַ������ӡ����Ŀ��
//	}
//	return 0;
//}



