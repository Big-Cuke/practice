#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////ָ�뺯��
//int* arr[10];
////���麯��
//int* (*pa)[10] = &arr;
////����ָ��
//int(*pAdd)(int, int) = Add;
////����
//int sum = (*pAdd)(1, 2);
//int sum = pAdd(1, 2);
//int sum = Add(1, 2);
////����ָ�������
//int (*pArr[5])(int, int);
////ָ����ָ�������ָ��
//int (*(*ppArr)[5])(int, int) = &pArr;


//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//void* ���͵�ָ�� ���ܽ��н����ò���
//void* ���͵�ָ�� ���ܽ���+-�����Ĳ���

#include <stdlib.h>

//qsort��ʹ��
//          Ŀ����ʼλ�ã�Ŀ��Ԫ�ظ�����ÿ��Ԫ�ش�С���ṩһ���ȽϷ���
//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void *e1, const void *e2))

int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ
	return *(int*)e1 - *(int*)e2;  //ǿ������ת��
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
	//��һ��
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
	//�ڶ���
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
	//��ͷ���ȼ�>����
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void*e1, const void*e2)
{
	//�Ƚ��ַ�������ֱ��ʹ�� > < = ���Ƚϣ�Ӧ��ʹ��strcmp����
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

//�ص����� - ���ú���ָ�����ʽ��ʵ�ֻص������Ļ��ƣ�ʵ��qsort�Ĺ���

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

//1.ÿ��Ԫ�ص����Ͳ�һ����ÿ��Ԫ�صĵ�ַҲ��һ�� -> ���ܵ�ָ��ʵ���ܽ�������Ԫ�����͵ĵ�ַ
//2.Ԫ�ظ���
//3.��֪��Ԫ������ -> ͨ����ȣ�ÿ��Ԫ�ش�С����λ�ֽ�
//4.��֪��ʹ��ʲô������������,���Ƚ�����Ԫ�ص�����Ҳ��֪��
void bubble_sort(void* base, int sz, int width, int (*cmp)(void*e1, void*e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j=0; j<sz-1-i; j++)
		{
			//����Ԫ�صıȽ�
			//��Ϊ��void���ͣ����Բ���ֱ��+1 cmp(base, base+1)
			if (cmp((char*)base+j*width, (char*)base+j*width) > 0)
			{
				//���������Ƚ�Ԫ��
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