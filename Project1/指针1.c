#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	//32位下 指针大小4个字节 /一个元素的大小 int 4个字节 
	printf("%d\n", sz);
}
int main()
{
	int arr[10] = { 0 };
	test(arr);

	return 0;
}

//最开始的字符指针
int main()
{
	char ch = 'w';
	//字符变量ch
	char* pc = &ch;
	//取ch的地址放到pc --> pc就被定为字符指针 char*
	*pc = 'w';
	return 0;
}

int main()
{
	//char* p = "abcdef"; //常量字符串"abcdef"，
	//常量字符串不可修改，+ const
	const char* p = "abcdef";
	//p里面存的是a的地址，遇到\0打印停止，*p就是a
	printf("%c\n", *p); //打印首字母'a'
	printf("%s\n", p); //打印一段字符串
	return 0;
}


//指针数组   存放指针的数组
int main()
{
	char ch[5] = {0}; // 字符数组
	int arr[10] = {0}; //整形数组
	int* parr[4]; //存放整形指针的数组
	char* pch[2]; //存放字符指针的数组

	return 0;
}

//指针数组 用法1
int main()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {2,3,4,5,6};
	int arr3[] = {3,4,5,6,7};

	int* parr[] = { arr1, arr2, arr3 };
	int i = 0;
	for (i = 0; i< 3; i++)
	{
		int j = 0;
		for (j = 0; j<5; j++)
		{
			printf("%d ", *(parr[i] + j)); 
			//parr[i]+j是地址 
		}
		printf("\n");
	}

	return 0;
}

//数组指针
int main()
{
	int* p = NULL; //p是整形指针 - 指向整形的指针 - 可以存放整形的地址
	char* pc = NULL; //pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
				//数组指针 - 指向数组的指针 - 可以存放数组的地址
	//int arr[10] = {0];
	//arr - 首元素地址	&arr[0] - 首元素地址		&arr - 数组的地址

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int (*p)[10] = &arr; // 数组的地址存起来
	//p - 数组指针

	return 0;
}

int main()
{
	char* arr[5];
	char* (*pa)[5] = &arr;
	//pa是个指针变量的名字   *说明pa是指针   [5]pa指向的数组是5个元素
	//char* pa指向的数组的元素类型是 char*

	int arr2[10] = { 0 };
	int  (*pa2)[10] = &arr2;
	return 0;
}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int(*pa)[10] = &arr;
	int i = 0;
	//第一种
	for (i = 0; i<10; i++)
	{
		//*pa 数组的地址解引用就相当于拿到了整个数组
		printf("%d ", (* pa)[i]);
	}
	//第二种
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*pa+i));  //*pa == arr   arr是首元素地址 
	}

	return 0;
}

//第三种 
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}

//数组指针一般用在二维数组上
//参数是数组的形式
void print1(int arr[3][5], int x, int y) //参数部分写着数组，由下面的数组名arr传入  数组形式
{
	int i = 0;
	int j = 0;
	for (i=0; i<x; i++)
	{
		for (j=0; j<y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//参数是指针的形式
void print2(int (*p)[5], int x, int y) //第一个为数组指针
{
	int i = 0;
	for (i=0; i<x; i++) //i=0 跳过0行； i=1 跳过1行
	{
		int j = 0;
		for (j=0; j<y; j++)
		{
			printf("%d ", *(*(p + i)+j));
			printf("%d ",(*(p+i)[j]));
			printf("%d ", *(p[i] + j));
			printf("%d ", p[i][j]);
			//解引用找到对应的行的数组名   *(p+i)
			//找到i行 j列的元素
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
	print1(arr, 3, 5);
	//数组名arr 传到函数print1的参数中         数组名传参，数组接收
	//arr - 数组名 - 数组名就算首元素地址
	print2(arr, 3, 5);
	//把arr想象成一维数组
	return 0;
}

// arr[i] == *(arr+i) == *(p+i) == p[i]
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int* p = arr;
	for (i=0; i<10; i++)
	{
		printf("%d ", *(p+i));
		printf("%d ", *(arr+i));
		printf("%d ", arr[i]);
		printf("%d ", p[i]);
	}
	return 0;
}
