<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�������
//
//һά�������
void test(int arr[])  //arr[10] �����С���Բ�д  int *arr
{}
void test1(int* arr)  //int *arr[] �� int *arr[20]  �� int **arr
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

//��ά�������
//
void test(int arr[3][5]) //�в���ʡ��
{}

void test(int *arr) //err   ָ������ָ��
{}
void test(int* arr[5])  //err   ������arrָ�����飬������5��Ԫ�أ�����ָ������  
{}
void test(int (*arr)[5])  //ok   ָ�룬ָ��һ�����飬������5��Ԫ�أ�int����
{}
void test(int **arr)  //err  ����ָ����һ��ָ������ĵ�ַ�������ַ���޷��Ž�����ָ��
{}

int main()
{
	int arr[3][5] = {0};

	test(arr); //��ά���鴫��

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//һ��ָ�봫��
//test1�����ܽ���ʲô������
void test1(int* p)
{}

//test2�����ܽ���ʲô������
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

//����ָ�봫��
void test(int **p)
{}
int main()
{
	int* ptr;
	int** pp = &ptr;
	test(&ptr);
	test(pp);
	int* arr[10];
	test(arr);  //ָ������Ҳ��    ��ʱ������������Ԫ�ص�ַ��int*�ĵ�ַ�������ָ��

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//����
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
	//&������  ��  ������  ���Ǻ����ĵ�ַ
	printf("%p ", &Add);
	printf("%p ", Add);
	return 0;
}
//����ָ�� - ��ź�����ַ��һ��ָ��
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
	//arr������ָ��
	int (*p)[10] = &arr;

	//����ָ��
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
	void (*p)(char*) = Print; //void (*)(char*)  -> ָ�룬ָ����������������void
	(*p)("hello");

	return 0;
}
//
//����1
(*(void (*)())0)(); //��������
/*
	void(*)() --�� ����ָ������
	��void(*)()��0 --�� ��0ǿ������ת���� void(*)() ����ָ������
	ת���꣬0����һ��������ַ 
	*(void (*)())0 --�� �ٽ��н�����
	(*(void (*)())0) --�� �ҵ��������
	��������������޲�
*/
//����2
void (*signal(int, void(*)(int)))(int); 
/*
	void (*                      )(int)
	(int, void(*)(int)) --> ��һ��������int���ڶ�����void(*p)(int)
	void(*)(int)   signal(int, void(*)(int) --> 	�������� void(*)(int)
	void (*          signal(int, void(*)(int))           )(int)
*/
//��
void (*signal(int, void(*)(int)))(int);

typedef unsigned int uint; //�Զ��庯����
typedef void(* pfun_t )(int); 

pfun_t signal(int, pfun_t);

/*
	signal��һ����������
	signal�����Ĳ�����2������һ����int���ڶ�������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
	signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
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
	//arr������ָ��
	int(*p)[10] = &arr;

	//����ָ��
	int (*pa)(int, int) = add;
	(pa)(2, 3); 
	(*pa)(2, 3); //�������
	(**pa)(2, 3);
	add(2, 3);
	pa(2, 3); //pa -> �����ĵ�ַ
	*pa(2, 3); //err  pa������()���  

	return 0;
=======
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�������
//
//һά�������
void test(int arr[])  //arr[10] �����С���Բ�д  int *arr
{}
void test1(int* arr)  //int *arr[] �� int *arr[20]  �� int **arr
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

//��ά�������
//
void test(int arr[3][5]) //�в���ʡ��
{}

void test(int *arr) //err   ָ������ָ��
{}
void test(int* arr[5])  //err   ������arrָ�����飬������5��Ԫ�أ�����ָ������  
{}
void test(int (*arr)[5])  //ok   ָ�룬ָ��һ�����飬������5��Ԫ�أ�int����
{}
void test(int **arr)  //err  ����ָ����һ��ָ������ĵ�ַ�������ַ���޷��Ž�����ָ��
{}

int main()
{
	int arr[3][5] = {0};

	test(arr); //��ά���鴫��

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//һ��ָ�봫��
//test1�����ܽ���ʲô������
void test1(int* p)
{}

//test2�����ܽ���ʲô������
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

//����ָ�봫��
void test(int **p)
{}
int main()
{
	int* ptr;
	int** pp = &ptr;
	test(&ptr);
	test(pp);
	int* arr[10];
	test(arr);  //ָ������Ҳ��    ��ʱ������������Ԫ�ص�ַ��int*�ĵ�ַ�������ָ��

	return 0;
}

/*`````````````````````````````````````````````````````````*/

//����
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
	//&������  ��  ������  ���Ǻ����ĵ�ַ
	printf("%p ", &Add);
	printf("%p ", Add);
	return 0;
}
//����ָ�� - ��ź�����ַ��һ��ָ��
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
	//arr������ָ��
	int (*p)[10] = &arr;

	//����ָ��
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
	void (*p)(char*) = Print; //void (*)(char*)  -> ָ�룬ָ����������������void
	(*p)("hello");

	return 0;
}
//
//����1
(*(void (*)())0)(); //��������
/*
	void(*)() --�� ����ָ������
	��void(*)()��0 --�� ��0ǿ������ת���� void(*)() ����ָ������
	ת���꣬0����һ��������ַ 
	*(void (*)())0 --�� �ٽ��н�����
	(*(void (*)())0) --�� �ҵ��������
	��������������޲�
*/
//����2
void (*signal(int, void(*)(int)))(int); 
/*
	void (*                      )(int)
	(int, void(*)(int)) --> ��һ��������int���ڶ�����void(*p)(int)
	void(*)(int)   signal(int, void(*)(int) --> 	�������� void(*)(int)
	void (*          signal(int, void(*)(int))           )(int)
*/
//��
void (*signal(int, void(*)(int)))(int);

typedef unsigned int uint; //�Զ��庯����
typedef void(* pfun_t )(int); 

pfun_t signal(int, pfun_t);

/*
	signal��һ����������
	signal�����Ĳ�����2������һ����int���ڶ�������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
	signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
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
	//arr������ָ��
	int(*p)[10] = &arr;

	//����ָ��
	int (*pa)(int, int) = add;
	(pa)(2, 3); 
	(*pa)(2, 3); //�������
	(**pa)(2, 3);
	add(2, 3);
	pa(2, 3); //pa -> �����ĵ�ַ
	*pa(2, 3); //err  pa������()���  

	return 0;
>>>>>>> 6f9798ff9d2bccc34b96d3e5eb0add2788a62be1
}