#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//define ��һ��Ԥ����ָ��
//1.define�������
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define�����
//#define ADD(X,Y) X+Y
//int main()
//{
//	printf("%d\n", 4*ADD(3, 5));
//	return 0;
//}
//�����ôд����Ľ���ͱ����17
//��ΪADD���滻��XY�ģ�Ҳ����������4*3+5
//����˳�����Ӽ����Ϊ17

//��Ҫ�����������32

#define ADD(X,Y) ((X)+(Y))
int main()
{
	printf("%d\n", 4 * ADD(3, 5));
	return 0;
}
