//#include "��̬ͨѶ¼�Ĺ�������.h"
//
//enum Option
//{
//	EXIT,
//	ADD,
//	DEL,
//	SEARCH,
//	MODIFY,
//	SHOW,
//	SORT
//};//��˶������,��0123456���Ӣ��, �����˿ɶ���
//
//int main()
//{
//	
//	int input = 0;
//	con con1;
//	InitContact(&con1);//��ʼ��ͨѶ¼, ����ַ���Ը�
//	do
//	{
//		menu();
//		printf("��������Ҫʹ�õĹ���:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//		{
//			AddCon(&con1);
//			break;
//		}
//		case DEL:
//		{
//			DelCon(&con1);
//			break;
//		}
//		case SEARCH:
//		{
//			SearachCon(&con1);
//			break;
//		}
//		case MODIFY:
//		{
//			ModifyCon(&con1);//�Ȳ���,Ȼ������¼ȡһ��
//			break;
//		}
//		case SHOW:
//		{
//			ShowCon(&con1);
//			break;
//		}
//		case SORT:
//		{
//			SortConName(&con1);
//			break;
//		}
//		case EXIT:
//		{
//			DestoryCon(&con1);
//			break;
//		}
//		default:
//			printf("�������, ����������\n");
//			break;
//		}
//			
//	} while (input);
// 
//	return 0;
//}