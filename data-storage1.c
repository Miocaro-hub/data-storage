#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��������������ڴ��еĴ洢
//�ص�����
//1.����������ϸ����  2.�������ڴ��еĴ洢��ԭ�롢���롢����  3.��С���ֽ�����ܼ��ж�  4.���������ڴ��еĴ洢����


//C�������ͣ�1.��������(char,int,short,long,float,long long,double��)
//           2.�Զ�������


//���͵�����:1.ʹ��������Ϳ����ڴ�ռ�Ĵ�С(��С������ʹ�÷�Χ)  2.��ο����ڴ�ռ���ӽ�
int main()
{
	int a = 10;
	float f = 10.0;
	//��Ȼ��ռ���ڴ��С����4���ֽ�,���������ڴ���ӽǲ�ͬ,����ڴ�ķ�ʽ��ͬ

	short a = 10;
	short int a = 10; //����д��������
	return 0;
}


//���ͼ���
/*
char
       unsigned char(�޷���,���λ��������λ,������ֵ)
	   signed char
short
      unsigned short[int]
	  signed short[int]
int
    unsigned int
    signed int
long
     unsigned long[int]
	 signed long[int]
*/

//�����ͼ���
//float double


//��������(�Զ�������)
/*
��������
�ṹ������ - struct
ö������ - enum
�������� - union
*/


//ָ������
/*
int* pi
char* pc
float* pf
void* pv
*/

//������: void��ʾ������(������) - ͨ��Ӧ���ں����ķ�������,�����Ĳ���,ָ������
void test(void)
{
	printf("hello world\n");
}
int main()
{
	test();
	return 0;
}