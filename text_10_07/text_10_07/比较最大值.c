#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//���鴢��
	int arr[10] = { 0 };
	//����
	int i = 0;
	for (i = 0;i < 10;i++)
		scanf("%d",&arr[i]);
	//�Ƚ����ֵ
	int max = arr[0];//��������ĵ�һ��Ԫ�ؾ������ֵ
	//��ʣ�µ�Ԫ�غ�max�Ƚϣ�����ҵ�������ֵ�͸���max��
	for(i=1;i<10;i++)
		if (arr[i] > max)
		{
			max = arr[i];
		}
	//���
	printf("max=%d", max);
	return 0;

}