#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int input = 0;//存放输入值的一个变量；
//	printf("今天你都做什么了？:>\n");
//	printf("今天你努力了吗?(0/1)>:\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("太棒了！祝你年薪百万\n");
//	}		
//	else
//	{
//		printf("你的时间不多了，你要加油啊。\n");
//	}
//		//这就是一种选择语句，if、else语句
//	return 0;
//}
//ShangDS--30000代码--找一个不错的工作；
//int main()
//{
//	int lii = 0;//这里要赋予0这个值
//	//循环
//	while (lii < 30000)//这里不需要加“；”
//	{
//		printf("写代码:%d\n", lii);//想要显示行号，需要这样写，不要忘了:%d
//		lii++;
//	}
//	if (lii == 30000)//这里不需要加“；”是==不是=
//	{
//		printf("好offer\n");
//	}
//	return 0;
//	/*这段代码在一开始编写后，试了好多
//	遍都没有实现最后的结果，后来又写了
//	一遍，才发现是我写的代码中出现了
//	很多问题，上面注释的都是我写错的问*/
//
//}

//函数

//先写一个两个数相加的代码
/*int Add(int x,int y)*///num1和num2两个值传到这里，xy在这里接收，所以在这里创建了整型int x和int y
//Add的返回类型也是整型，所以int Add
//{
//	int z = 0;//变量z
//	z = x + y;
//	return z;//最后算出来返回到z
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);//这里不用加\n
//	//int sum = num1 + num2;
//	//再用函数的方式来解一下
//	int sum=Add(num1, num2);//num1和num2两个数委托给Add，返回来的值在放到sum里；
//	printf("sum=%d\n", sum);
//	return 0;
//}

//数组--相同类型元素的集合
//十个整型1-10存起来
//数组是用下标来访问的

int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	//这样用变量创建一组数很麻烦，用数组；
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i<10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	/*char ch[5] = { 'a','b','c' };*///不完全初始化，剩余默认为0；
	return 0;
	}