#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	//32λ�� ָ���С4���ֽ� /һ��Ԫ�صĴ�С int 4���ֽ� 
	printf("%d\n", sz);
}
int main()
{
	int arr[10] = { 0 };
	test(arr);

	return 0;
}

//�ʼ���ַ�ָ��
int main()
{
	char ch = 'w';
	//�ַ�����ch
	char* pc = &ch;
	//ȡch�ĵ�ַ�ŵ�pc --> pc�ͱ���Ϊ�ַ�ָ�� char*
	*pc = 'w';
	return 0;
}

int main()
{
	//char* p = "abcdef"; //�����ַ���"abcdef"��
	//�����ַ��������޸ģ�+ const
	const char* p = "abcdef";
	//p��������a�ĵ�ַ������\0��ӡֹͣ��*p����a
	printf("%c\n", *p); //��ӡ����ĸ'a'
	printf("%s\n", p); //��ӡһ���ַ���
	return 0;
}


//ָ������   ���ָ�������
int main()
{
	char ch[5] = {0}; // �ַ�����
	int arr[10] = {0}; //��������
	int* parr[4]; //�������ָ�������
	char* pch[2]; //����ַ�ָ�������

	return 0;
}

//ָ������ �÷�1
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
			//parr[i]+j�ǵ�ַ 
		}
		printf("\n");
	}

	return 0;
}

//����ָ��
int main()
{
	int* p = NULL; //p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
	char* pc = NULL; //pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
				//����ָ�� - ָ�������ָ�� - ���Դ������ĵ�ַ
	//int arr[10] = {0];
	//arr - ��Ԫ�ص�ַ	&arr[0] - ��Ԫ�ص�ַ		&arr - ����ĵ�ַ

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int (*p)[10] = &arr; // ����ĵ�ַ������
	//p - ����ָ��

	return 0;
}

int main()
{
	char* arr[5];
	char* (*pa)[5] = &arr;
	//pa�Ǹ�ָ�����������   *˵��pa��ָ��   [5]paָ���������5��Ԫ��
	//char* paָ��������Ԫ�������� char*

	int arr2[10] = { 0 };
	int  (*pa2)[10] = &arr2;
	return 0;
}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int(*pa)[10] = &arr;
	int i = 0;
	//��һ��
	for (i = 0; i<10; i++)
	{
		//*pa ����ĵ�ַ�����þ��൱���õ�����������
		printf("%d ", (* pa)[i]);
	}
	//�ڶ���
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*pa+i));  //*pa == arr   arr����Ԫ�ص�ַ 
	}

	return 0;
}

//������ 
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

//����ָ��һ�����ڶ�ά������
//�������������ʽ
void print1(int arr[3][5], int x, int y) //��������д�����飬�������������arr����  ������ʽ
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
//������ָ�����ʽ
void print2(int (*p)[5], int x, int y) //��һ��Ϊ����ָ��
{
	int i = 0;
	for (i=0; i<x; i++) //i=0 ����0�У� i=1 ����1��
	{
		int j = 0;
		for (j=0; j<y; j++)
		{
			printf("%d ", *(*(p + i)+j));
			printf("%d ",(*(p+i)[j]));
			printf("%d ", *(p[i] + j));
			printf("%d ", p[i][j]);
			//�������ҵ���Ӧ���е�������   *(p+i)
			//�ҵ�i�� j�е�Ԫ��
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
	print1(arr, 3, 5);
	//������arr ��������print1�Ĳ�����         ���������Σ��������
	//arr - ������ - ������������Ԫ�ص�ַ
	print2(arr, 3, 5);
	//��arr�����һά����
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
