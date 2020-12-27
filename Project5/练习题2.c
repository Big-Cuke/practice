#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "abcdef";
	//a b c d e f \0
	printf("%d\n", sizeof(arr));        //sizeof(arr)计算的是数组的大小，单位是字节：7
	printf("%d\n", sizeof(arr + 0));    //4/8  计算的是地址的大小，首元素+0还是首元素的地址
	printf("%d\n", sizeof(*arr));		//1    *arr是首元素，sizeof（*arr）计算首元素的大小
	printf("%d\n", sizeof(arr[1]));     //1    arr[1]是第二个元素，sizeof（arr[1]）计算的是第二个元素的大小
	printf("%d\n", sizeof(&arr));       //4/8  &arr取数组的地址，数组的地址也是地址
	printf("%d\n", sizeof(&arr + 1));   //4/8  跳过整个数组后的地址
	printf("%d\n", sizeof(&arr[0] + 1));//4/8  取第一个元素的地址，char*+1 指向第二个元素的地址

	printf("%d\n", strlen(arr));        //6
	printf("%d\n", strlen(arr + 0));	//6
	printf("%d\n", strlen(*arr));		//err  首地址解引用'a' -97 my_strlen(const char* str) 非法访问
	printf("%d\n", strlen(arr[1]));		//err  把'b'转成98传过去 
	printf("%d\n", strlen(&arr));		//6 &arr 数组的地址 - 数组指针  char(*p)[7] = &arr
	printf("%d\n", strlen(&arr + 1));	//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5 

	return 0;
}