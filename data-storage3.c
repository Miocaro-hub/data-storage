#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//浮点型在内存中的存储
//常见的浮点数：3.14159  1E10  
//浮点数家族包括：float,double,long double类型
//浮点数表示的范围：float.h中定义

//浮点数存储的例子：
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);

	*pFloat = 9.0;
	printf("num的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);
	return 0;
}
