//#include "��̬ͨѶ¼�Ĺ�������.h"
//
//////��̬�汾��ʼ��ʵ��
////void InitContact(Contact* pc)
////{
////	assert(pc);
////	pc->count = 0 ;
////	memset(pc->data, 0, sizeof(pc->data));//ʹ�õĵ��ǵ�ַ, �����ü�ͷ,��ʼ��
////}
//
//
//void menu()
//{
//	printf("**********************************************************\n");
//	printf("*******   1.add                      2.del       *********\n");
//	printf("*******   3.search                   4.modify    *********\n");
//	printf("*******   5.show                     6.sort      *********\n");
//	printf("*******   0.exit                                 *********\n");
//	printf("**********************************************************\n");
//}
//
////��̬�汾
//int InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	pc->data = (pi*)calloc(3,sizeof(pi));
//	if (pc->data == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	pc->cap = DEFAULT_SZ;//����ҲҪ��ʼ��
//	return 0;
//}
//
////��̬�����Ӱ汾
////void AddCon(Contact* pc)
////{
////	assert(pc);
////
////	if (pc->count == MAX)
////	{
////
////		printf("ͨѶ¼����\n");
////		return;
////	}
////	printf("����������:");
////	scanf("%s", pc->data[pc->count].name);
////
////	printf("����������:");
////	scanf("%d", &pc->data[pc->count].age);
////
////	printf("�������Ա�:");
////	scanf("%s", pc->data[pc->count].sex);
////
////	printf("������绰:");
////	scanf("%s", pc->data[pc->count].tel);
////
////	printf("�������ַ:");
////	scanf("%s", pc->data[pc->count].addr);
////
////
////	pc->count++;
////	printf("���ӳɹ�\n");
////
////}
//
//void DestoryCon(Contact* pc)
//{
//	assert(pc);
//	free(pc->data);
//	pc->data = NULL;
//}
//
////�ж������Ƿ���Ҫ����
//void checkcap(Contact* pc)
//{
//	if (pc->count == pc->cap)
//	{
//		pi* ptr = (pi*)realloc(pc->data, (pc->cap + INC_SZ) * sizeof(pi));
//		if (ptr == NULL)
//		{
//			printf("AddCon:%s\n", strerror(errno));
//			return;
//		}//�ж��Ƿ�������
//		else
//		{
//			pc->data = ptr;
//			pc->cap += INC_SZ;//��������
//			printf("���ݳɹ�\n");
//		}
//	}
//}
//
//void AddCon(Contact* pc)
//{
//	assert(pc);
//	//����
//	checkcap(pc);
//	
//	printf("����������:");
//	scanf("%s", pc->data[pc->count].name);
//
//	printf("����������:");
//	scanf("%d", &pc->data[pc->count].age);
//
//	printf("�������Ա�:");
//	scanf("%s", pc->data[pc->count].sex);
//
//	printf("������绰:");
//	scanf("%s", pc->data[pc->count].tel);
//
//	printf("�������ַ:");
//	scanf("%s", pc->data[pc->count].addr);
//
//
//	pc->count++;
//	printf("���ӳɹ�\n");
//
//}
//
////�������ֲ���ͨѶ¼��Ϣ
//static int FindName(Contact* pc, char name[])//ֻ��������ļ�ʹ�ú�static
//{
//	assert(pc);
//	//����, �鿴�Ƿ��name��ͬ
//	int i = 0;
//	for (i = 0; i < pc->count; i++)
//	{
//		//�Ա��ַ����Ƿ���ͬ
//		if (0 == strcmp(pc->data[i].name, name))
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
////��ӡͨѶ¼
//void ShowCon(const Contact* pc)
//{
//	assert(pc);
//	int i = 0;
//	for (i = 0; i < pc->count; i++)
//	{
//		printf("%20s\t%5s\t%5s\t%12s\t%30s", "����", "����", "�Ա�", "�绰", "��ַ\n");//���Ҳ�Ǹ�ʽ��, �ұ�ֱ���Ǳ���, ֱ�Ӵ�ӡ, ע���ʱ����ȫ���ַ���, �������µĸ�ʽ������\t����
//		printf("%20s\t%5d\t%5s\t%12s\t%30s\n",	pc->data[i].name, 
//												pc->data[i].age, 
//												pc->data[i].sex, 
//												pc->data[i].tel, 
//												pc->data[i].addr);		
//	}
//}
//
//
////ɾ����ϵ��
//
//void DelCon(Contact* pc)
//{
//	int i;
//	char name[20];
//	assert(pc);
//	if (pc->count == 0)
//	{
//		printf("ͨѶ¼Ϊ��,û����Ϣ����ɾ��");
//		return;
//	}
//	printf("��������Ҫɾ�����˵�����:");
//	scanf("%s", &name);
//	//1.������Ϣ
//	int ret = FindName(pc, name);//�ҵ�����-1
//	if (ret == -1)
//	{
//		printf("�鵽���˲�����\n");
//		return;
//	}
//	//2.ɾ����Ϣ
//	//�Ѻ������Ϣ��ǰ�ƶ�����, Ȼ��count--
//	for (i = ret; i < pc->count-1/*���һ��Ԫ�ػ�Խ��*/; i++)
//	{
//		pc->data[i] = pc->data[i + 1];//���һ��Ԫ�صĺ���û��Ԫ��
//		printf("ɾ���ɹ�\n");
//	}
//		pc->count--;//���ܴ���Խ������
//}
//
////����ͨѶ¼��ʵ��
//void SearachCon(Contact* pc)
//{
//	assert(pc);
//	char name[NAME_MAX];
//	//����
//	printf("������Ҫ���ҵ��˵�����");
//	scanf("%s", &name);
//	int ret = FindName(pc,name);
//	if (ret == -1)
//	{
//		printf("���޴���\n");
//		return;
//	}
//	//�鵽�˾ʹ�ӡ
//		printf("%20s\t%5s\t%5s\t%12s\t%30s", "����", "����", "�Ա�", "�绰", "��ַ\n");//���Ҳ�Ǹ�ʽ��, �ұ�ֱ���Ǳ���, ֱ�Ӵ�ӡ, ע���ʱ����ȫ���ַ���, �������µĸ�ʽ������\t����
//		printf("%20s\t%5d\t%5s\t%12s\t%30s\n", pc->data[ret].name,
//			pc->data[ret].age,
//			pc->data[ret].sex,
//			pc->data[ret].tel,
//			pc->data[ret].addr);
//}
//
////�޸�ͨѶ¼��ʵ��
//void ModifyCon(Contact* pc)
//{
//	assert(pc);
//	char name[NAME_MAX];
//	//����
//	printf("������Ҫ�޸ĵ��˵�����");
//	scanf("%s", &name);
//	int ret = FindName(pc, name);
//	if (ret == -1)
//	{
//		printf("���޴���\n");
//		return;
//	}
//	printf("�Բ鵽��Ա%s, ���޸�\n", name);
//	//�޸�,��������һ��'
//	printf("�������޸ĺ������:");
//	scanf("%s", pc->data[ret].name);
//
//	printf("�������޸ĺ������:");
//	scanf("%d", &pc->data[ret].age);
//
//	printf("�������޸ĺ���Ա�:");
//	scanf("%s", pc->data[ret].sex);
//
//	printf("�������޸ĺ�ĵ绰:");
//	scanf("%s", pc->data[ret].tel);
//
//	printf("�������޸ĺ�ĵ�ַ:");
//	scanf("%s", pc->data[ret].addr);
//
//	printf("�޸ĳɹ�\n");
//}
//
////qsort��Ҫ�ĺ���
//int cmp_peo_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((pi*)e1)->name, ((pi*)e2)->name);
//}
//
//void SortConName(Contact* pc)
//{
//	assert(pc);
//	//������������, ʹ��qsort: void qsort (void* baseҪ�������ʼ��ַ, size_t numҪ�����Ԫ�ظ���, size_t size�����һ��Ԫ�صĴ�СҪ���,int (*compar)(const void*, const void*)Ҫ�Ƚϵ�����Ԫ�صĵ�ַ);
//	qsort(pc->data, pc->count, sizeof(pi), cmp_peo_by_name);
//	printf("����ɹ�\n");
//}