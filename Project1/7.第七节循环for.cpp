#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int i = 1;//初始化
//
//	while (i < 10)//判断
//	{
//		printf("%d\n", i);
//
//		i++;//调整
//	}
//	return 0;
//}

//while 中标配; 初始化 判断 调整

//for (表达式1; 表达式2; 表达式3)
//{
//	循环语句;
//}

//表达式1: 初始化部分,用于初始化循环变量的
//表达式2: 条件判断部分,用于判断循环的终止
//表达式3: 调整部分,用于循环条件的调整



//int main()
//{
//	int i = 1;
//	for (i = 1;/*第1步*/  i <= 10;/*第2步*/  i++/*第4步*/)
//	{
//		if (i == 5)
//			continue;			// for中 不跳过调整,跳过continue循环后面的代码,到调整中
//								// while中 跳过continue循环后面的代码,到判断中
//		printf("%d\n", i);
//		printf("hehe\n");		///*第3步*/循环体
//	}
//	printf("%d\n", i);
//	return 0;
//
//}

//注意 :不要在for循环体内修改变量,防止失控 (修改一般在调整中)
//注意 :for循环的变量,判断条件建议 :前闭后开
//int main()
//{
//	int tuple[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	// i 作为下标 为0 - 9
//	for (i = 0; i <= 9; i++)		//不推荐<=9  但是意义不大
//	{								//推荐为<10  和 "= 0" 形成前闭后开区间
//		int number = tuple[i];
//		printf("%d\n", number);
//	}
//
//	return 0;
//
//}

//i 从数值从 '0 - n'  判断从 '0 <= i < n+1'	 或者 '0 <= i <= n'


//for循环的变种
//for循环的判断部分省略,判断就会恒成立 进入死循环


//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("hehe\n");			//c99语法才支持这种'格式化' c++中支持这种语法
//	}								//有些编译器不能理解
//}

//for循环也可以用多个变量控制,判断  &&并集  ||或集


/*int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0 ;i++, k++)
	{
		k++;
	}
}*/			//循环0次  k = 0直接赋值为0,0为假 退出循环



//do while循环


//基础语法:
//do
//	循环语句(循环体);
//while (表达式;)

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

//特点 :至少循环一次 


//写代码的逻辑:
//先方法(编程思维) + 再写代码(按照语法形式去写)

//计算n的阶乘
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)		//如果数字很大 就返回个0
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
//		for (i = 1; i <= n; i++)		//如果数字很大 就返回个0
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
//	for (; n > 0; n--)		//n >= 0会多计算一个0的阶乘 即多加了一个 '1'
//	{
//		ret = 1;
//		for (i = n; i >= 1; i--)		//如果数字很大 就返回个0
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
//		ret = ret * n;			// 阶乘
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
//	while (left <= right)			//即使相等,也是可以查找一次相等
//	{
//		int mid = (left + right) / 2;	//mid需要变		而且left和right万一超出最大值 ,就丢失了找不到平均值了
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
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//	//在一个有序数组中找到某个数字n(利用有序数组->二分法)
//
//	return 0;
//}

//二分法次数:  就是log以二为底的n次方 n就是次数
//条件是: 有序数组
// 9 / 2 = 4 ...1所以是4


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
//		int mid = left + (right - left) / 2;//防止移出的算法 只要两个数不溢出 mid就不会溢出
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
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//
//	return 0;
//}



//编写代码,延时多个字符从两段移动,向中间汇聚

//int main()
//{
//	char arr1[] = "welcome to nihao!!";		// strlen不读"\0" 所以字符是19个 但下标是从0开始到18
//	char arr2[] = "##################";
//	int left = 0;//left 和 right 是下标数 .注意:下标从0开始
//	int right = strlen(arr1) - 1;			// 所以要个数-1 变成下标数
//											// sizeof(arr1) 会算到 \0 所以得到20个元素 所以要减去2 ,才能得到右下标值
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);		//C中单位是毫秒
//							//清空屏幕
//							//应用system 需要头文件 #include <stdlib.h>
//		system("cls");		//cls是在cmd中的系统命令,所以用system这一个库函数,可以执行系统命令中的 "cls"		
//		left += 1;
//		right -= 1;
//		
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}



//编写代码实现,模拟用户登录场景,并且只能登录三次.
//(只允许输入三次密码,如果密码正确则提示登录成功,如果三次均输入错误则退出程序)


//int main()
//{
//	int i = 0;
//	char input_password[20] = { 0 };		//数组名本来就是地址
//	char user_password[20] = "abcdef";
//	//假设密码是字符串: "abcdef"
//	//比较两个字符串是否相等,不能使用==  而是要使用一个库函数:str cmp
//	// 如果返回值是0,表示两个字符串相等
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入您的密码:");
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
//		printf("三次密码都错误,退出程序\n");
//	}
//	return 0;
//}



//数组传参的时候传递的是:数组首元素的[地址]
//所以地址 需要一个指针变量接受地址



//猜数字游戏实现

//电脑产生一个随机数 

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
////生成一个随机数字 int ret = rand(); 从0到32767 0x7fff 
////但是重新开始时, 生成的随机数时,顺序还是一样的
////所以要设置一个开始随机的起点
//void game()
//{
//
//	//1.生成随机数  但是如果很快时间戳是相同的 所以在启动游戏时生成函数就不太行
//					//只要这里面的数变化,就可以生成变化  
//					//所以可以生成一个随机数 :这里需要一个时间戳
//					//获得时间戳:time()函数 time_t(这是一个类型) time(time_t*)
//					//时间戳的头文件 #include <time.h>
//	int gs_num = 0;
//	int ret = rand()%100+1; 
//	int count = 0;
//	// 要求一个数字在1-100
//	//可以取一个数字除以100的余数(读作模100),
//	//任何数字除以100余0(没有余数)-99(余99) ,再加一 就是1-100
//
//	//都可以通过一个  模再加上一个得到范围
//
//	printf("请输入你猜的数字(1-100):");
//	while(1)
//
//	{
//		scanf("%d", &gs_num);
//		if (gs_num < ret)
//		{
//			printf("小了\n");
//			printf("请继续猜\n");
//			count++;
//		}
//		else if (gs_num > ret)
//		{
//			printf("大了\n");
//			printf("请继续猜\n");
//			count++;
//		}
//		else
//		{
//			printf("猜中了,答案是%d\n", ret);
//			printf("使用次数:%d\n", count);
//			break;
//		}
//	}
//
//}
//
//
////指针变量 int *p = NULL; 创建一个指针变量给他赋个值 是空的
//
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));	
//	//只要生成一次
//	//srand() 括号里需要一个unsigned int
//	// time函数前面的就是  返回值(自带返回值)
//	//需要生成一个随机数不受后来的时间影响
//	//所以在主函数开始的时候生成
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("进入猜数字游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,重新选择");
//			break;
//		}
//	}
//	while (input);
//
//	return 0;
//}