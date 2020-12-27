#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	//数组名是首元素地址
	//1、sizeof(数组名) - 数组名表示整个数组
	//2、&数组名 - 数组名表示整个数组
	//sizeof - 所占空间大小；数据类型的字节大小
	//strlen - 字符串长度 找到\0   检测地址
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

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };  
	printf("%d\n", sizeof(arr));             //6 - sizeof计算的是数组的大小
	printf("%d\n", sizeof(arr + 0));         //4/8 - 首元素地址
	printf("%d\n", sizeof(*arr));            //1 - arr是首元素地址，*arr是首元素，首元素是字符，大小是一个字节
	printf("%d\n", sizeof(arr[1]));			 //1
	printf("%d\n", sizeof(&arr));			 //&arr - 数组的地址也是地址，地址的大小4/8
	printf("%d\n", sizeof(&arr + 1));		 //&arr+1 - 跳过了整个数组的地址，数组的地址也是地址，地址的大小4/8
	printf("%d\n", sizeof(&arr[0] + 1));	 //&arr - 跳过了第一个元素的地址，数组的地址也是地址，地址的大小4/8

	printf("%d\n", strlen(arr));			 //随机值
	printf("%d\n", strlen(arr + 0));		 //随机值
	printf("%d\n", strlen(*arr));			 //err  'a' 解引用 97  ,strlen就把97当成地址往后开始数，崩溃
	printf("%d\n", strlen(arr[1]));			 //err
	printf("%d\n", strlen(&arr));			 //随机值
	printf("%d\n", strlen(&arr + 1));		 //随机值
	printf("%d\n", strlen(&arr[0] + 1));	 //随机值
	return 0;
}