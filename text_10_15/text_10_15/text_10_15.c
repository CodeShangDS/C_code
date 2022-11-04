#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////下标引用操作符；
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	return 0;
//}
//int main()
//{
//	//大量频繁被使用的数据，想放在寄存器中，提升效率；
//	register int num = 100;//建议num的值存放到寄存器中去；
//	return 0;
//}

//typedef 类型定义
//类型重命名

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 200;
//	return 0;
//}

//static 静态的 

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;		
//	}
//	return 0;
//}

extern int g_val;
int main()
{
	printf("%d", g_val);
	return 0;
}