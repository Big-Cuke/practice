#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char* p = "abcdef"; //常量字符串把首字符的地址放入p里面

	printf("%d\n", sizeof(p));			//4/8 计算指针变量p的大小
	printf("%d\n", sizeof(p + 1));		//4/8 p+1 得到的是字符'b'的地址
	printf("%d\n", sizeof(*p));			//1   *p就是字符串的第一个字符'a'
	printf("%d\n", sizeof(p[0]));		//1   int arr[10] - > arr[0] == *(arr+0) p[0] == *(p+0) == 'a'
	printf("%d\n", sizeof(&p));			//4/8 地址
	printf("%d\n", sizeof(&p + 1));		//4/8 
	printf("%d\n", sizeof(&p[0] + 1));	//4/8 

	printf("%d\n", strlen(p));          //6
	printf("%d\n", strlen(p + 1));		//5
	printf("%d\n", strlen(*p));			//err
	printf("%d\n", strlen(p[0]));		//err
	printf("%d\n", strlen(&p));			//随机值 
	printf("%d\n", strlen(&p + 1));		//随机值
	printf("%d\n", strlen(&p[0] + 1));	//5  &p[0]拿出第一个元素的地址+1 == 第二个元素的地址

	return 0;
}