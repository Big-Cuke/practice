<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数组参数
//
//一维数组参数
void test(int arr[])  //arr[10] 数组大小可以不写  int *arr
{}
void test1(int* arr)  //int *arr[] 或 int *arr[20]  或 int **arr
{}

int main()
{
	int arr[10] = { 0 };
	int* arr1[20] = { 0 };
	test(arr);
	test1(arr);

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//二维数组参数
//
void test(int arr[3][5]) //列不可省略
{}

void test(int *arr) //err   指向整形指针
{}
void test(int* arr[5])  //err   数组名arr指向数组，数组有5个元素，整形指针类型  
{}
void test(int (*arr)[5])  //ok   指针，指向一个数组，数组有5个元素，int类型
{}
void test(int **arr)  //err  二级指针存放一级指针变量的地址；数组地址是无法放进二级指针
{}

int main()
{
	int arr[3][5] = {0};

	test(arr); //二维数组传参

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//一级指针传参
//test1函数能接收什么参数？
void test1(int* p)
{}

//test2函数能接收什么参数？
void test2(char* p)
{}

int main()
{
	int a = 10;
	int* p1 = &a;
	test1(&a);  //ok
	test1(p1); //ok

	char ch = 'w';
	char* pch = &ch;
	test2(&ch);
	test2(pch);

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//二级指针传参
void test(int **p)
{}
int main()
{
	int* ptr;
	int** pp = &ptr;
	test(&ptr);
	test(pp);
	int* arr[10];
	test(arr);  //指针数组也行    此时的数组名是首元素地址，int*的地址放入二级指针

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//函数
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("%d ", Add(a, b));
	//&函数名  和  函数名  都是函数的地址
	printf("%p ", &Add);
	printf("%p ", Add);
	return 0;
}
//函数指针 - 存放函数地址的一个指针
//
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int arr[10] = {0};
	//arr的数组指针
	int (*p)[10] = &arr;

	//函数指针
	int (*pa)(int, int) = add;
	(*pa)(2, 3);

	return 0;
}
//
void Print(char* str)
{
	printf("%s ", str);
}
int main()
{
	void (*p)(char*) = Print; //void (*)(char*)  -> 指针，指向函数，返回类型是void
	(*p)("hello");

	return 0;
}
//
//代码1
(*(void (*)())0)(); //函数调用
/*
	void(*)() --》 函数指针类型
	（void(*)()）0 --》 把0强制类型转换成 void(*)() 函数指针类型
	转换完，0就是一个函数地址 
	*(void (*)())0 --》 再进行解引用
	(*(void (*)())0) --》 找到这个函数
	（）这个函数是无参
*/
//代码2
void (*signal(int, void(*)(int)))(int); 
/*
	void (*                      )(int)
	(int, void(*)(int)) --> 第一个参数是int，第二个是void(*p)(int)
	void(*)(int)   signal(int, void(*)(int) --> 	返回类型 void(*)(int)
	void (*          signal(int, void(*)(int))           )(int)
*/
//简化
void (*signal(int, void(*)(int)))(int);

typedef unsigned int uint; //自定义函数名
typedef void(* pfun_t )(int); 

pfun_t signal(int, pfun_t);

/*
	signal是一个函数声明
	signal函数的参数有2个，第一个是int。第二个函数指针，该函数指针指向的函数的参数是int，返回类型是void
	signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
*/


int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int arr[10] = { 0 };
	//arr的数组指针
	int(*p)[10] = &arr;

	//函数指针
	int (*pa)(int, int) = add;
	(pa)(2, 3); 
	(*pa)(2, 3); //方便理解
	(**pa)(2, 3);
	add(2, 3);
	pa(2, 3); //pa -> 函数的地址
	*pa(2, 3); //err  pa会先与()结合  

	return 0;
=======
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数组参数
//
//一维数组参数
void test(int arr[])  //arr[10] 数组大小可以不写  int *arr
{}
void test1(int* arr)  //int *arr[] 或 int *arr[20]  或 int **arr
{}

int main()
{
	int arr[10] = { 0 };
	int* arr1[20] = { 0 };
	test(arr);
	test1(arr);

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//二维数组参数
//
void test(int arr[3][5]) //列不可省略
{}

void test(int *arr) //err   指向整形指针
{}
void test(int* arr[5])  //err   数组名arr指向数组，数组有5个元素，整形指针类型  
{}
void test(int (*arr)[5])  //ok   指针，指向一个数组，数组有5个元素，int类型
{}
void test(int **arr)  //err  二级指针存放一级指针变量的地址；数组地址是无法放进二级指针
{}

int main()
{
	int arr[3][5] = {0};

	test(arr); //二维数组传参

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//一级指针传参
//test1函数能接收什么参数？
void test1(int* p)
{}

//test2函数能接收什么参数？
void test2(char* p)
{}

int main()
{
	int a = 10;
	int* p1 = &a;
	test1(&a);  //ok
	test1(p1); //ok

	char ch = 'w';
	char* pch = &ch;
	test2(&ch);
	test2(pch);

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//二级指针传参
void test(int **p)
{}
int main()
{
	int* ptr;
	int** pp = &ptr;
	test(&ptr);
	test(pp);
	int* arr[10];
	test(arr);  //指针数组也行    此时的数组名是首元素地址，int*的地址放入二级指针

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//函数
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("%d ", Add(a, b));
	//&函数名  和  函数名  都是函数的地址
	printf("%p ", &Add);
	printf("%p ", Add);
	return 0;
}
//函数指针 - 存放函数地址的一个指针
//
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int arr[10] = {0};
	//arr的数组指针
	int (*p)[10] = &arr;

	//函数指针
	int (*pa)(int, int) = add;
	(*pa)(2, 3);

	return 0;
}
//
void Print(char* str)
{
	printf("%s ", str);
}
int main()
{
	void (*p)(char*) = Print; //void (*)(char*)  -> 指针，指向函数，返回类型是void
	(*p)("hello");

	return 0;
}
//
//代码1
(*(void (*)())0)(); //函数调用
/*
	void(*)() --》 函数指针类型
	（void(*)()）0 --》 把0强制类型转换成 void(*)() 函数指针类型
	转换完，0就是一个函数地址 
	*(void (*)())0 --》 再进行解引用
	(*(void (*)())0) --》 找到这个函数
	（）这个函数是无参
*/
//代码2
void (*signal(int, void(*)(int)))(int); 
/*
	void (*                      )(int)
	(int, void(*)(int)) --> 第一个参数是int，第二个是void(*p)(int)
	void(*)(int)   signal(int, void(*)(int) --> 	返回类型 void(*)(int)
	void (*          signal(int, void(*)(int))           )(int)
*/
//简化
void (*signal(int, void(*)(int)))(int);

typedef unsigned int uint; //自定义函数名
typedef void(* pfun_t )(int); 

pfun_t signal(int, pfun_t);

/*
	signal是一个函数声明
	signal函数的参数有2个，第一个是int。第二个函数指针，该函数指针指向的函数的参数是int，返回类型是void
	signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
*/


int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int arr[10] = { 0 };
	//arr的数组指针
	int(*p)[10] = &arr;

	//函数指针
	int (*pa)(int, int) = add;
	(pa)(2, 3); 
	(*pa)(2, 3); //方便理解
	(**pa)(2, 3);
	add(2, 3);
	pa(2, 3); //pa -> 函数的地址
	*pa(2, 3); //err  pa会先与()结合  

	return 0;
>>>>>>> 6f9798ff9d2bccc34b96d3e5eb0add2788a62be1
}