#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//深度剖析数据在内存中的存储
//重点内容
//1.数据类型详细介绍  2.整型在内存中的存储：原码、反码、补码  3.大小端字节序介绍及判断  4.浮点型在内存中的存储解析


//C语言类型：1.内置类型(char,int,short,long,float,long long,double等)
//           2.自定义类型


//类型的意义:1.使用这个类型开辟内存空间的大小(大小决定了使用范围)  2.如何看待内存空间的视角
int main()
{
	int a = 10;
	float f = 10.0;
	//虽然所占的内存大小都是4个字节,但看待的内存的视角不同,存放内存的方式不同

	short a = 10;
	short int a = 10; //两种写法都可以
	return 0;
}


//整型家族
/*
char
       unsigned char(无符号,最高位不做符号位,而是做值)
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

//浮点型家族
//float double


//构造类型(自定义类型)
/*
数组类型
结构体类型 - struct
枚举类型 - enum
联合类型 - union
*/


//指针类型
/*
int* pi
char* pc
float* pf
void* pv
*/

//空类型: void表示空类型(无类型) - 通常应用于函数的返回类型,函数的参数,指针类型
void test(void)
{
	printf("hello world\n");
}
int main()
{
	test();
	return 0;
}