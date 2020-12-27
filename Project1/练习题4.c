#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));           //48 = 3 * 4 *4
	printf("%d\n", sizeof(a[0][0]));	 //4 
	printf("%d\n", sizeof(a[0]));		 //16 a[0]相当于第一行作为一维数组的数组名
	printf("%d\n", sizeof(a[0] + 1));	 //4/8  a[0]是第一行的数组名，数组名此时是首元素地址，a[0]就是第一行一个元素的地址
	//所以a[0] + 1就算第一行第二个元素的地址 
	printf("%d\n", sizeof(*(a[0] + 1))); //4/8  *(a[0] + 1)是第一行第二个元素
	printf("%d\n", sizeof(a + 1));		 //4/8
	printf("%d\n", sizeof(*(a + 1)));	 //16   sizeof(a[1])计算第二行的大小
	printf("%d\n", sizeof(&a[0] + 1));	 //4/8    第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//16    计算第二行的大小
	printf("%d\n", sizeof(*a));			 //a是首元素地址-第一行的地址，*a就算第一行，sizeof(*a)就是计算第一行的大小
	printf("%d\n", sizeof(a[3]));		 //16   sizeof只负责计算，不管有没有

	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
	//a是二维数组的数组名，没有sizeof(a)，没有&(a)，所以a是首元素地址，
	//把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行(首元素的)的地址

	return 0;
}