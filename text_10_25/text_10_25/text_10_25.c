#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//define 是一个预处理指令
//1.define定义符号
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define定义宏
//#define ADD(X,Y) X+Y
//int main()
//{
//	printf("%d\n", 4*ADD(3, 5));
//	return 0;
//}
//如果这么写输出的结果就变成了17
//因为ADD是替换的XY的，也就是这变成了4*3+5
//先算乘除后算加减结果为17

//想要把输出结果变成32

#define ADD(X,Y) ((X)+(Y))
int main()
{
	printf("%d\n", 4 * ADD(3, 5));
	return 0;
}
