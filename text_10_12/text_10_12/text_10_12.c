#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//操作符
//% 取魔（取余） 
//int main()
//{
//	//int a = 9 / 2;//整数除法，如果想要得到后面的小数，需要用浮点类型；
//	float a = 9 / 2.0;
//	printf("a=%.1f\n", a);
//		
//	return 0;
//}


//移位操作符
//>>  <<
//移位操作符--移动的是二进制位；
//赋值操作符

//int main()
//{
//	int a = 2;
//	//a << 1;//这么写没有效果；
//	int b = a << 1;
//	a = a + 5;
//	a += 5;	//赋值操作符这么写，求得的值与上面一样；
//	printf("%d\n", b);//或者在括号里直接写a<<1也能算出4
//	return 0;
//	//int类型是四个字节，一个字节是8个比特，int解释32个字节，2就是10.左移一位就是100，就得4；
//}

//单目操作符 ！的用法； 

//int main()
//{
//	int a = 10;
//	int b = !a;
//	// 0 表示假，非0表示真；如果已知的值是0，逻辑反操作！后，得出的值是1；
//	//它正式的用法
//	if (a)
//	{
//		//如果a为真，做事
//	}
//	if (!a)
//	{
//		//如果a为假，做事
//	}
//	printf("%d\n", b);
//	return 0;
//
//}

//sizeof是一个操作符；
//计算类型和变量的大小；
//不是函数；

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof (int) );//这里括号不能省略，语法不支持；
//	printf("%d\n", sizeof (a));
//	return 0;
//}

int main()
{
	//10*4=40,
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算数组的大小，单位是字节；
	printf("%d\n", sizeof(arr[0]));//这里就表示每一个元素都是整型；
	//计算元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	return 0; 
}