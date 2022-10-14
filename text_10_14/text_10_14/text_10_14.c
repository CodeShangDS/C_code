#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//++
//int main()
//{
//	int a = 10; 
//	//int b = ++a;//前置++；先++，后使用；
//	int b = a++;//后置++，先使用，后++；
//	printf("%d\n", a);
//	printf("%d\n", b); 
//	return 0;
//}
//（类型)

//int main()
//{
//	//强制类型转换；
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//逻辑与&& 和 逻辑或||

//int main()
//{
//	int a = 2;
//	int b = 0;
//	//printf("%d\n", a && b);//两个值必须是真，输出是1；
//	printf("%d\n", a || b);//其中一个是真就可以输出1；
//	return 0;
//}

//int main()
//{
//	//先写一个比较最大值的if语句
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	/*if (a < b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);*/
//	//再用条件操作符？：写；
//	max = a < b ? a : b;
//	printf("%d\n", max);
//	//注意看这里用三目操作符就不用分别写代码给max赋值了,而是直接作为一个值返回到表达式中,这一点对于比较长的表达式是很有利的;
//	return 0;
//}

//逗号表达式

int main()
{
	int a = 3;
	int b = 2;
	int c = 5;
	int d = (a = b + a, c = a - c, b = b + c);
	printf("%d\n", d);
	return 0; 
}