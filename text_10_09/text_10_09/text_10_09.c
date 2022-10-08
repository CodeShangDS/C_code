#include <stdio.h>
//作用域和生命周期
//局部变量的作用域只能在变量所在的局部范围内起作用
//全局变量在整个工程都是可用
//int g_val = 2022;
//
//int main()
//{
//	printf("1:=%d\n", g_val);
//	printf("ShangDS\n");
//	{
//		int a = 10;
//		printf("a=%d\n", a);//局部变量的作用域只会在这个打括号内有效。
//		printf("2:=%d\n", g_val);//全局变量
//	}
//	printf("3:=%d\n", g_val);
//	return 0;
//}
//不能直接用需要声明一下
//局部变量的生命周期： 进入局部范围生命开始， 出局部范围生命结束
//全局变量的生命周期： 程序的生命周期
extern int g_val;
int main()
{
	printf("%d\n", g_val);
	return 0;

}


