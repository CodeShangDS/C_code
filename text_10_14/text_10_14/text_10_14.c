#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//++
//int main()
//{
//	int a = 10; 
//	//int b = ++a;//ǰ��++����++����ʹ�ã�
//	int b = a++;//����++����ʹ�ã���++��
//	printf("%d\n", a);
//	printf("%d\n", b); 
//	return 0;
//}
//������)

//int main()
//{
//	//ǿ������ת����
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//�߼���&& �� �߼���||

//int main()
//{
//	int a = 2;
//	int b = 0;
//	//printf("%d\n", a && b);//����ֵ�������棬�����1��
//	printf("%d\n", a || b);//����һ������Ϳ������1��
//	return 0;
//}

//int main()
//{
//	//��дһ���Ƚ����ֵ��if���
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	/*if (a < b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);*/
//	//������������������д��
//	max = a < b ? a : b;
//	printf("%d\n", max);
//	//ע�⿴��������Ŀ�������Ͳ��÷ֱ�д�����max��ֵ��,����ֱ����Ϊһ��ֵ���ص����ʽ��,��һ����ڱȽϳ��ı��ʽ�Ǻ�������;
//	return 0;
//}

//���ű��ʽ

int main()
{
	int a = 3;
	int b = 2;
	int c = 5;
	int d = (a = b + a, c = a - c, b = b + c);
	printf("%d\n", d);
	return 0; 
}