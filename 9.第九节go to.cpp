#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>



// goto ����
//����ʹ��: ����:
//ֻҪ�к��ʵķ���,�Ϳ���������ת
//goto ���ܿ纯����ת

//�ʺϳ���:��ֹ������ĳЩ���Ƕ�׵�ѭ��,���ѭ���������ʹ��break��̫����
//int main()
//{
//again:
//
//	printf("nihao\n");
//		
//	goto again;
//		
//	return 0;
//}

//�ػ����� 
//1.��������������, 1�����ڹػ�
//2.�������; ȡ��,��ȡ���ػ�

//cmd�еĹػ�shutdown -s(���ùػ�) -t(��Ƶ���ʱ�ػ�) 60(��λ��s)
//shutdown -a(ȡ���ػ�)



//int main()
//{
//	char input[20] = { 0 };
//
//	system(" shutdown -s -t 60");
//again:
//	printf("��ע��!!��ĵ�����60���ڹػ�,�������:ȡ��,��ȡ���ػ�");
//	scanf("%s", input);
//
//	if (strcmp(input, "ȡ��") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//����Ч����ͬ
//int main()
//{
//	char input[20] = { 0 };
//
//	while (1)
//	{
//		system(" shutdown -s -t 600");
//
//		printf("��ע��!!��ĵ�����600���ڹػ�,�������:ȡ��,��ȡ���ػ�");
//		scanf("%s", input);
//
//		if (strcmp(input, "ȡ��") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//}
//
//	return 0;
//}





