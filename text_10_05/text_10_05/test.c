
//写代码
//1，写主函数（main函数）

//如何执行，c语言是从主函数第一行执行的
//所以c语言得有main函数，main是入口 
//在屏幕上打印“ShangDS"
//printf 是库函数，是在屏幕上打印信息用的，要使用这个库函数需要引用头文件；（头文件 stdio.h)
#define _CRT_SECURE_NO_WARNINGS 1
//一般0表示false/关，1表示true/开

#include <stdio.h>
//int main()
//{
//	printf("ShangDS");
//	return 0;
//
//}
//编译+链接+运行代码 
//ctrl+F5

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 30;
//	//短整型
//	short num = 17;
//	//单精度浮点型
//	float weight = 75.5;
//	//双精度浮点型
//	double a = 0.0;
//	return 0;
//}
//int main()
//{
//	printf("CodeShangDS\n");  
//	printf("第一节课\n");
//	printf("%d\n",100);//打印一个整数--“%d”
//	sizeof-是关键字-也是操作符-作用是计算类型或者变量所占空间的大小
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long long));
//}
//int main()
//{
//	//创建变量
//	//类型 变量名 =0；赋值//推荐这样写；
//	//类型 变量名；//不推荐，但是可以用；
//	int age = 30;
//	double weight = 75.427;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%.2lf\n", weight);
//	return 0;
//	/*注意：使用变量时，打印（显示到屏幕上）变量用% f或% lf时，
//如果直接输入小数点后会显示六位小数，想要保留几位的话，
//要这样写： % .1(保留几位写几）lf
//并且这样会自动四舍五入。*/
//	//%d 整型
//	//%f float型
//	//%lf double型
//}
//这是全局变量，{}外部定义。
//int a = 100;
//
//int main()
//{
//	//局部变量，{}内部定义
//	//当局部变量与全局变量冲突时，局部优先。
//	//不建议把全局变量和局部变量名字写成一样的。
//	int a = 10;
//	printf("%d", a);
//	return 0;
//}
int main()
{
	//scanf函数是输入函数
	int a = 0;
	int b = 0;
	int sum = 0;
	/*int a＝0那些，只是给变量一个初始值0，
	不写＝0，也可以的，scanf（）的意思是你
	在运行程序的时候可以自己手动输入a和b的数值*/
	scanf("%d %d", &a, &b);//%d %d 这是在定义格式，&a,&b 这是在确定内容位置的地址。
	//& 是取地址符
	//scanf_s 是VS平台的，不适用全平台。推荐使用#define _CRT_SECURE_NO_WARNINGS 1
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;

}
