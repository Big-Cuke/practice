#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////指针函数
//int* arr[10];
////数组函数
//int* (*pa)[10] = &arr;
////函数指针
//int(*pAdd)(int, int) = Add;
////调用
//int sum = (*pAdd)(1, 2);
//int sum = pAdd(1, 2);
//int sum = Add(1, 2);
////函数指针的数组
//int (*pArr[5])(int, int);
////指向函数指针数组的指针
//int (*(*ppArr)[5])(int, int) = &pArr;


//void* 类型的指针 可以接受任意类型的地址
//void* 类型的指针 不能进行解引用操作
//void* 类型的指针 不能进行+-整数的操作

#include <stdlib.h>

//qsort的使用
//          目标起始位置，目标元素个数，每个元素大小，提供一个比较方法
//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void *e1, const void *e2))

int cmp_int(const void* e1, const void* e2)
{
	//比较两个整形值
	return *(int*)e1 - *(int*)e2;  //强制类型转换
}
void test1()
{
	int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2)
{
	//第一种
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
	//第二种
	return ((int)*(float*)e1 - *(float*)e2);
}
void test2()
{
	float f[] = {9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0};
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j=0; j<sz; j++)
	{
		printf("%f ", f[j]);
	}
}

struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	//箭头优先级>括号
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void*e1, const void*e2)
{
	//比较字符串不能直接使用 > < = 来比较，应该使用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	test1;
	test2;
	test3;
	return 0;
}

//回调函数 - 利用函数指针的形式，实现回调函数的机制；实现qsort的功能

void Swap(char* buf1, char*buf2, int width)
{
	int i = 0;
	for (i=0; i<width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//1.每个元素的类型不一样，每个元素的地址也不一样 -> 接受的指针实现能接受任意元素类型的地址
//2.元素个数
//3.不知道元素类型 -> 通过宽度，每个元素大小，单位字节
//4.不知道使用什么数据类型排序,待比较两个元素的类型也不知道
void bubble_sort(void* base, int sz, int width, int (*cmp)(void*e1, void*e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j=0; j<sz-1-i; j++)
		{
			//两个元素的比较
			//因为是void类型，所以不能直接+1 cmp(base, base+1)
			if (cmp((char*)base+j*width, (char*)base+j*width) > 0)
			{
				//交换两个比较元素
				Swap((char*)base + j * width, (char*)base + j * width));
			}
		}
	}
}

void test1()
{
	int arr[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	printf("%d ", bubble_sort);
}
void test2()
{
	struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
	int sz = sizeof(s) / sizeof(s[0]);

	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	test1();
	test2();

	return 0;
}