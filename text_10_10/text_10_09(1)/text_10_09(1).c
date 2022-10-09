#include<stdio.h>
#include<string.h>
////常量
////1.字面常量
//#define max 1000
//int main()
//{
//	//3.14;//浮点常量
//	//10;//整型常量
//	//'a';//字符常量
//	//"abcd"//字符串常量
//	
//	//2.const修饰的常变量
//	
//	//const int num = 10;//此时的num为变量
//	////在加上const后num不能改变的属性，变成常变量，num不能修改
//	//num = 20;
//	//printf("num=%d\n", num);
//	//int arr[10] = { 0 };//为十个元素
//	//int n = 10;
//	//int arr2[n] = { 0 };/*n是变量，这里要求是常量，
//	//如果用const修饰为常变量也是不行的，
//	//你这里会又被定义为常变量，不是常量的话不被认可。*/
//	
//	//3.#define定义的标识符常量
//
//	int n = max;
//	printf("n=%d\n", n);
//
//
//
//	return 0;
//
//}
//4.枚举常量
//可以被一一列举

//性别
//enum Sex
//{
//	//枚举类型的变量的未来可能取值
//	male=3,//赋初值
//	female,
//	secret
//};
//int main()
//{
//	enum Sex s = male;
//	//male = 3;//err
//	printf("%d\n", s);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//		return 0;
//
//}
//int main()
//{
//	//字符数组是表示一组相同类型的元素；
//	//字符串末尾隐藏\0的字符
//	//\0是字符串的结束标志；
//	//char arr[] = "hello";
//	char arr1[] = { "abcd" };
//	char arr2[] = { 'a','b','c','d'};
//	//	求字符串长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//会打印出随机值
//	//int len=strlen("abcd"); //string length
//	//printf("%d\n", len);
//	//打印字符串；
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}

//转义字符

//int main()
//{
//	printf("c:\code\text.c");
//	return 0;
//
//}
int main()
{
	printf("%d\n", strlen("c:\text\328\text.c"));//注意转义字符要算一个字节
	//printf("%c\n",'\130');//8进制的130是88，x的ASCII码值是88；
	//printf("%c\n", '\x30');
	//printf("\a\a\a");
	//printf("(are you ok??)"); //??)--]三字母词会被解析成]
	return 0;
}


