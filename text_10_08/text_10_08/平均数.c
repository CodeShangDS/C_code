#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//���鴢��
	int arr[10] = { 0 };
	//����
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	//���
	int sum = 0;
	for (i = 0;i < 10;i++)
	{
		sum = sum+arr[i];
	}
	//��ƽ����
	int avg = 0;
	avg = sum / 10;
	//���
	printf("avg=%d", avg);
	return 0;
}