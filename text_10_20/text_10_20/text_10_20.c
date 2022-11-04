#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//声明
//extern int g_val;
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}
//声明
extern int Add(int x, int y);//x和y可以加也可以不加；

int main()
{
	int a = 20;
	int b = 30;
	int sum = Add(a, b);
	printf("%d", sum);
	return 0;
}