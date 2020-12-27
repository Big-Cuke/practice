<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//指针+-整数, 取决于指针类型

//由于还没学习结构体，这里告知结构体的大小是20个字节
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;

//假设p 的值为0x100000。 如下表表达式的值分别为多少？

int main()
{
	p = (struct Test*)0x100000;

	printf("%p\n", p + 0x1); //0x00100014 结构体的大小为20个字节  p+1->p+20个字节
	
	printf("%p\n", (unsigned long)p + 0x1); //0x00100001
	//p强制类型转换为十进制，0x100000 -> 1048576
	//1048576+1=1048577 -> 0x00100001

	printf("%p\n", (unsigned int*)p + 0x1); //0x00100004

	return 0;
}


int main()
{
	int a[4] = { 1, 2, 3, 4 };

	int* ptr1 = (int*)(&a + 1);

	int* ptr2 = (int*)((int)a + 1);
	//(int)a -> a强制类型转为整形
	//a+1 -> 向前移动一个字节

	printf("%x,%x", ptr1[-1], *ptr2);  //4,2000000
	//ptr1[-1] == *(ptr1+(-1)) == *(ptr1-1)

	/*  小端存储模式
	01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
	低地址                                     高地址
	 *ptr1[-1] -> 00 00 00 04
	 *ptr2     -> 02 00 00 00
	*/

	return 0;
}


int main()
{
	//逗号表达式
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]); //1
	//p[0] == *(p+0)

	return 0;
}

int main()
{
	int a[5][5];
	int(*p)[4];  
	p = a;      
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);  
	//-4  0xFF FF FF FC
	return 0;
=======
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
>>>>>>> b08927b9b7d3ce8e261a07bcf41cf2b37fe1a6b8
}