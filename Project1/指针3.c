<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数指针数组
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	//指针数组
	int* arr[5];

	//当只有一个函数时
	//函数指针
	int (*pa)(int, int) = Add;

	//当有多个函数时
	//函数指针数组  数组大小可填可不填
	int(*pa[])(int, int) = {Add, Sub, Mul, Div};

	//调用4个函数
	int i = 0;
	for (i=0; i<4; i++)
	{
		printf("%d ", parr[i](2, 3));
	}
	return 0;
}

/*练习：1.写一个函数指针pf，能够指向my_strcpy
		2、写一个函数指针数组，能够i偶存放4个my_strcpy函数的地址*/
char* my_strcpy(char* dest, const char* src);

/*
	首先 指针 - (*pf) 
	其次 函数 - (char*, const char*)
	最后 返回类型 - char*
*/
char* ((*pf)(char*, const char*));
char* ((*pfArr[4])(char*, const char*))

=======
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数指针数组
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	//指针数组
	int* arr[5];

	//当只有一个函数时
	//函数指针
	int (*pa)(int, int) = Add;

	//当有多个函数时
	//函数指针数组  数组大小可填可不填
	int(*pa[])(int, int) = {Add, Sub, Mul, Div};

	//调用4个函数
	int i = 0;
	for (i=0; i<4; i++)
	{
		printf("%d ", parr[i](2, 3));
	}
	return 0;
}

/*练习：1.写一个函数指针pf，能够指向my_strcpy
		2、写一个函数指针数组，能够i偶存放4个my_strcpy函数的地址*/
char* my_strcpy(char* dest, const char* src);

/*
	首先 指针 - (*pf) 
	其次 函数 - (char*, const char*)
	最后 返回类型 - char*
*/
char* ((*pf)(char*, const char*));
char* ((*pfArr[4])(char*, const char*))

>>>>>>> b08927b9b7d3ce8e261a07bcf41cf2b37fe1a6b8
