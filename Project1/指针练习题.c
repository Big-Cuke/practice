#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	//数组名是首元素地址
	//1、sizeof(数组名) - 数组名表示整个数组
	//2、&数组名 - 数组名表示整个数组
	//sizeof - 数据类型的字节大小
	//一维数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));         //16 = 4个元素*4个字节（int类型）
	printf("%d\n", sizeof(a + 0));     //4/8 = 数组名表示首元素的值 ， a+0 还是首元素地址，地址的大小就是4/8字节
	printf("%d\n", sizeof(*a));        //4 - 数组名就是首元素地址，*a就是首元素
	printf("%d\n", sizeof(a + 1));     //4/8 - a+1 --> 2 
	printf("%d\n", sizeof(a[1]));      //4 - 第二个元素的地址大小 
	printf("%d\n", sizeof(&a));        //4/8 &a取出的是数组的地址，数组的地址也是地址，地址的大小就是4/8字节
	printf("%d\n", sizeof(*&a));       //16  &a数组的地址，数组的地址解引用访问的数组，sizeof计算的是数组的大小
	printf("%d\n", sizeof(&a + 1));    //4/8 &a是数组的地址，&a+1跳过整个数组，但还是地址，4/8字节
	printf("%d\n", sizeof(&a[0]));     //4/8 &a[0]第一个元素的地址
	printf("%d\n", sizeof(&a[0] + 1)); //4/8 &a[0]+1 第二个元素的地址

	return 0;
}