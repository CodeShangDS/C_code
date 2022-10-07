#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//数组储存
	int arr[10] = { 0 };
	//输入
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	//求和
	int sum = 0;
	for (i = 0;i < 10;i++)
	{
		sum = sum+arr[i];
	}
	//求平均数
	int avg = 0;
	avg = sum / 10;
	//输出
	printf("avg=%d", avg);
	return 0;
}