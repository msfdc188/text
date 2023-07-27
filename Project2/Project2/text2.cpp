#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;//a
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}





//void menu()
//{
//	printf("****************\n");
//	printf("**** 1.PLAY ****\n");
//	printf("**** 0.EXIT ****\n");
//	printf("****************\n");
//}
//#include<time.h>
//0-RAND_MAX(32767)
//#include<stdlib.h>
//void game()
//{
//	int guess = 0;
//	生成随机数
//	0-99->1-100
//	int ret = rand()%100+1;//rand是生成随机数的函数
//	printf("%d\n",ret);
//	while (guess!=ret)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//			printf("恭喜你，猜对了\n");
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//time_t是时间戳的值
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("猜数字\n");
//			game();//游戏函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

#include<string.h>

int main()
{
	int x = printf("abc\\");
	printf("%d", x);
}