#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////�±����ò�������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	return 0;
//}
//int main()
//{
//	//����Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч�ʣ�
//	register int num = 100;//����num��ֵ��ŵ��Ĵ�����ȥ��
//	return 0;
//}

//typedef ���Ͷ���
//����������

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 200;
//	return 0;
//}

//static ��̬�� 

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