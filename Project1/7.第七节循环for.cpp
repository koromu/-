#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i < 10)//�ж�
//	{
//		printf("%d\n", i);
//
//		i++;//����
//	}
//	return 0;
//}

//while �б���; ��ʼ�� �ж� ����

//for (���ʽ1; ���ʽ2; ���ʽ3)
//{
//	ѭ�����;
//}

//���ʽ1: ��ʼ������,���ڳ�ʼ��ѭ��������
//���ʽ2: �����жϲ���,�����ж�ѭ������ֹ
//���ʽ3: ��������,����ѭ�������ĵ���



//int main()
//{
//	int i = 1;
//	for (i = 1;/*��1��*/  i <= 10;/*��2��*/  i++/*��4��*/)
//	{
//		if (i == 5)
//			continue;			// for�� ����������,����continueѭ������Ĵ���,��������
//								// while�� ����continueѭ������Ĵ���,���ж���
//		printf("%d\n", i);
//		printf("hehe\n");		///*��3��*/ѭ����
//	}
//	printf("%d\n", i);
//	return 0;
//
//}

//ע�� :��Ҫ��forѭ�������޸ı���,��ֹʧ�� (�޸�һ���ڵ�����)
//ע�� :forѭ���ı���,�ж��������� :ǰ�պ�
//int main()
//{
//	int tuple[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	// i ��Ϊ�±� Ϊ0 - 9
//	for (i = 0; i <= 9; i++)		//���Ƽ�<=9  �������岻��
//	{								//�Ƽ�Ϊ<10  �� "= 0" �γ�ǰ�պ�����
//		int number = tuple[i];
//		printf("%d\n", number);
//	}
//
//	return 0;
//
//}

//i ����ֵ�� '0 - n'  �жϴ� '0 <= i < n+1'	 ���� '0 <= i <= n'


//forѭ���ı���
//forѭ�����жϲ���ʡ��,�жϾͻ����� ������ѭ��


//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("hehe\n");			//c99�﷨��֧������'��ʽ��' c++��֧�������﷨
//	}								//��Щ�������������
//}

//forѭ��Ҳ�����ö����������,�ж�  &&����  ||��


/*int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0 ;i++, k++)
	{
		k++;
	}
}*/			//ѭ��0��  k = 0ֱ�Ӹ�ֵΪ0,0Ϊ�� �˳�ѭ��



//do whileѭ��


//�����﷨:
//do
//	ѭ�����(ѭ����);
//while (���ʽ;)

//int main()
//{
//	int i = 1;
//
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} 
//	
//	while (i <= 10);
//
//	return 0;
//
//}

//�ص� :����ѭ��һ�� 


//д������߼�:
//�ȷ���(���˼ά) + ��д����(�����﷨��ʽȥд)

//����n�Ľ׳�
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)		//������ֺܴ� �ͷ��ظ�0
	//{
	//	ret = ret * i;	

	//}
//	printf("%d\n", ret);
//
//		return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (; n > 0; n--)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)		//������ֺܴ� �ͷ��ظ�0
//		{
//			ret = ret * i;
//
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (; n > 0; n--)		//n >= 0������һ��0�Ľ׳� �������һ�� '1'
//	{
//		ret = 1;
//		for (i = n; i >= 1; i--)		//������ֺܴ� �ͷ��ظ�0
//		{
//			ret = ret * i;
//
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;			// �׳�
//		sum = sum + ret;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof arr / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)			//��ʹ���,Ҳ�ǿ��Բ���һ�����
//	{
//		int mid = (left + right) / 2;	//mid��Ҫ��		����left��right��һ�������ֵ ,�Ͷ�ʧ���Ҳ���ƽ��ֵ��
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//	//��һ�������������ҵ�ĳ������n(������������->���ַ�)
//
//	return 0;
//}

//���ַ�����:  ����log�Զ�Ϊ�׵�n�η� n���Ǵ���
//������: ��������
// 9 / 2 = 4 ...1������4


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof arr / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)			
//	{
//		/*int mid = (left + right) / 2;*/
//		int mid = left + (right - left) / 2;//��ֹ�Ƴ����㷨 ֻҪ����������� mid�Ͳ������
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//
//	return 0;
//}



//��д����,��ʱ����ַ��������ƶ�,���м���

//int main()
//{
//	char arr1[] = "welcome to nihao!!";		// strlen����"\0" �����ַ���19�� ���±��Ǵ�0��ʼ��18
//	char arr2[] = "##################";
//	int left = 0;//left �� right ���±��� .ע��:�±��0��ʼ
//	int right = strlen(arr1) - 1;			// ����Ҫ����-1 ����±���
//											// sizeof(arr1) ���㵽 \0 ���Եõ�20��Ԫ�� ����Ҫ��ȥ2 ,���ܵõ����±�ֵ
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);		//C�е�λ�Ǻ���
//							//�����Ļ
//							//Ӧ��system ��Ҫͷ�ļ� #include <stdlib.h>
//		system("cls");		//cls����cmd�е�ϵͳ����,������system��һ���⺯��,����ִ��ϵͳ�����е� "cls"		
//		left += 1;
//		right -= 1;
//		
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}



//��д����ʵ��,ģ���û���¼����,����ֻ�ܵ�¼����.
//(ֻ����������������,���������ȷ����ʾ��¼�ɹ�,������ξ�����������˳�����)


//int main()
//{
//	int i = 0;
//	char input_password[20] = { 0 };		//�������������ǵ�ַ
//	char user_password[20] = "abcdef";
//	//�����������ַ���: "abcdef"
//	//�Ƚ������ַ����Ƿ����,����ʹ��==  ����Ҫʹ��һ���⺯��:str cmp
//	// �������ֵ��0,��ʾ�����ַ������
//	for (i = 0; i < 3; i++)
//	{
//		printf("��������������:");
//		scanf("%s", input_password);
//		if (strcmp(input_password, user_password) == 0)
//		{
//			printf("login success\n");
//			break;
//		}
//		else
//		{
//			printf("password error\n");
//		}
//		
//	}
//	if (i == 3)
//	{
//		printf("�������붼����,�˳�����\n");
//	}
//	return 0;
//}



//���鴫�ε�ʱ�򴫵ݵ���:������Ԫ�ص�[��ַ]
//���Ե�ַ ��Ҫһ��ָ��������ܵ�ַ



//��������Ϸʵ��

//���Բ���һ������� 

//void menu()
//{
//	printf("--------------------------------\n");
//	printf("--------------------------------\n");
//	printf("--------	1.play	--------\n");
//	printf("--------	0.exit	--------\n");
//	printf("--------------------------------\n");
//	printf("--------------------------------\n");
//
//}
//
//
////����һ��������� int ret = rand(); ��0��32767 0x7fff 
////�������¿�ʼʱ, ���ɵ������ʱ,˳����һ����
////����Ҫ����һ����ʼ��������
//void game()
//{
//
//	//1.���������  ��������ܿ�ʱ�������ͬ�� ������������Ϸʱ���ɺ����Ͳ�̫��
//					//ֻҪ����������仯,�Ϳ������ɱ仯  
//					//���Կ�������һ������� :������Ҫһ��ʱ���
//					//���ʱ���:time()���� time_t(����һ������) time(time_t*)
//					//ʱ�����ͷ�ļ� #include <time.h>
//	int gs_num = 0;
//	int ret = rand()%100+1; 
//	int count = 0;
//	// Ҫ��һ��������1-100
//	//����ȡһ�����ֳ���100������(����ģ100),
//	//�κ����ֳ���100��0(û������)-99(��99) ,�ټ�һ ����1-100
//
//	//������ͨ��һ��  ģ�ټ���һ���õ���Χ
//
//	printf("��������µ�����(1-100):");
//	while(1)
//
//	{
//		scanf("%d", &gs_num);
//		if (gs_num < ret)
//		{
//			printf("С��\n");
//			printf("�������\n");
//			count++;
//		}
//		else if (gs_num > ret)
//		{
//			printf("����\n");
//			printf("�������\n");
//			count++;
//		}
//		else
//		{
//			printf("������,����%d\n", ret);
//			printf("ʹ�ô���:%d\n", count);
//			break;
//		}
//	}
//
//}
//
//
////ָ����� int *p = NULL; ����һ��ָ�������������ֵ �ǿյ�
//
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));	
//	//ֻҪ����һ��
//	//srand() ��������Ҫһ��unsigned int
//	// time����ǰ��ľ���  ����ֵ(�Դ�����ֵ)
//	//��Ҫ����һ����������ܺ�����ʱ��Ӱ��
//	//��������������ʼ��ʱ������
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("�����������Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��");
//			break;
//		}
//	}
//	while (input);
//
//	return 0;
//}