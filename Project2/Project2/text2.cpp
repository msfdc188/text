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
//	���������
//	0-99->1-100
//	int ret = rand()%100+1;//rand������������ĺ���
//	printf("%d\n",ret);
//	while (guess!=ret)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//			printf("��ϲ�㣬�¶���\n");
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//time_t��ʱ�����ֵ
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������\n");
//			game();//��Ϸ����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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