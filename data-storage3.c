#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���������ڴ��еĴ洢
//�����ĸ�������3.14159  1E10  
//���������������float,double,long double����
//��������ʾ�ķ�Χ��float.h�ж���

//�������洢�����ӣ�
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n��ֵΪ:%d\n", n);
	printf("*pFloat��ֵΪ:%f\n", *pFloat);

	*pFloat = 9.0;
	printf("num��ֵΪ:%d\n", n);
	printf("*pFloat��ֵΪ:%f\n", *pFloat);
	return 0;
}
