#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//struct money {
//	struct zhao
//	{
//		char name[15] = "zhao";
//		float base_mon = 240.00;
//		float move_mon = 420.00;
//		float pay = 45.00;
//	}zhao;
//	struct qian
//	{
//		char name[15];
//		float base_mon = 360.00;
//		float move_mon = 120.00;
//		float pay = 30.00;
//	}qian;
//	struct sun
//	{
//		char name[15];
//		float base_mon = 560.00;
//		float move_mon = 0.0;
//		float pay = 180.00;
//	}sun;
//}people;
//
//int main()
//{
//	printf("zhao:%.2lf\n", people.zhao.base_mon + people.zhao.move_mon - people.zhao.pay);
//	printf("qian:%.2lf\n", people.qian.base_mon + people.qian.move_mon - people.qian.pay);
//	printf("sun:%.2lf\n", people.sun.base_mon + people.sun.move_mon - people.sun.pay);
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//struct {
//    int id;
//    char name[8];
//    char sex;
//    float score;
//}person;
//int main()
//{
//
//    char name[8];
//    int id = 0;
//    char sex;
//    float score;
//    scanf("%d %s %c %f", &id, name, &sex, &score);
//    strcpy(person.name, name);
//    person.sex = sex;
//    person.id = id;
//    person.score = score;
//
//    printf("No.:%d\n", person.id);
//    printf("name:%s\n", person.name);
//    printf("sex:%c\n", person.sex);
//    printf("score:%.2f\n", person.score);
//
//    return 0;
//}
//#include <stdio.h>
//
//
//int main()
//{
//	char ch, fname[20];
//	FILE* fp;
//	scanf("%s", fname);
//	if ((fp = fopen(fname, "w")) == NULL)
//		return(-1);
//	ch = getchar();
//	while (ch != '*')
//	{
//		fputc(ch, fp);
//		putchar(ch);
//		ch = getchar();
//	}
//	fclose(fp);
//	return(0);
//}