
//д����
//1��д��������main������

//���ִ�У�c�����Ǵ���������һ��ִ�е�
//����c���Ե���main������main����� 
//����Ļ�ϴ�ӡ��ShangDS"
//printf �ǿ⺯����������Ļ�ϴ�ӡ��Ϣ�õģ�Ҫʹ������⺯����Ҫ����ͷ�ļ�����ͷ�ļ� stdio.h)
#define _CRT_SECURE_NO_WARNINGS 1
//һ��0��ʾfalse/�أ�1��ʾtrue/��

#include <stdio.h>
//int main()
//{
//	printf("ShangDS");
//	return 0;
//
//}
//����+����+���д��� 
//ctrl+F5

//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 30;
//	//������
//	short num = 17;
//	//�����ȸ�����
//	float weight = 75.5;
//	//˫���ȸ�����
//	double a = 0.0;
//	return 0;
//}
//int main()
//{
//	printf("CodeShangDS\n");  
//	printf("��һ�ڿ�\n");
//	printf("%d\n",100);//��ӡһ������--��%d��
//	sizeof-�ǹؼ���-Ҳ�ǲ�����-�����Ǽ������ͻ��߱�����ռ�ռ�Ĵ�С
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
//	//��������
//	//���� ������ =0����ֵ//�Ƽ�����д��
//	//���� ��������//���Ƽ������ǿ����ã�
//	int age = 30;
//	double weight = 75.427;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%.2lf\n", weight);
//	return 0;
//	/*ע�⣺ʹ�ñ���ʱ����ӡ����ʾ����Ļ�ϣ�������% f��% lfʱ��
//���ֱ������С��������ʾ��λС������Ҫ������λ�Ļ���
//Ҫ����д�� % .1(������λд����lf
//�����������Զ��������롣*/
//	//%d ����
//	//%f float��
//	//%lf double��
//}
//����ȫ�ֱ�����{}�ⲿ���塣
//int a = 100;
//
//int main()
//{
//	//�ֲ�������{}�ڲ�����
//	//���ֲ�������ȫ�ֱ�����ͻʱ���ֲ����ȡ�
//	//�������ȫ�ֱ����;ֲ���������д��һ���ġ�
//	int a = 10;
//	printf("%d", a);
//	return 0;
//}
int main()
{
	//scanf���������뺯��
	int a = 0;
	int b = 0;
	int sum = 0;
	/*int a��0��Щ��ֻ�Ǹ�����һ����ʼֵ0��
	��д��0��Ҳ���Եģ�scanf��������˼����
	�����г����ʱ������Լ��ֶ�����a��b����ֵ*/
	scanf("%d %d", &a, &b);//%d %d �����ڶ����ʽ��&a,&b ������ȷ������λ�õĵ�ַ��
	//& ��ȡ��ַ��
	//scanf_s ��VSƽ̨�ģ�������ȫƽ̨���Ƽ�ʹ��#define _CRT_SECURE_NO_WARNINGS 1
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;

}
