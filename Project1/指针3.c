<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ָ������
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
	//ָ������
	int* arr[5];

	//��ֻ��һ������ʱ
	//����ָ��
	int (*pa)(int, int) = Add;

	//���ж������ʱ
	//����ָ������  �����С����ɲ���
	int(*pa[])(int, int) = {Add, Sub, Mul, Div};

	//����4������
	int i = 0;
	for (i=0; i<4; i++)
	{
		printf("%d ", parr[i](2, 3));
	}
	return 0;
}

/*��ϰ��1.дһ������ָ��pf���ܹ�ָ��my_strcpy
		2��дһ������ָ�����飬�ܹ�iż���4��my_strcpy�����ĵ�ַ*/
char* my_strcpy(char* dest, const char* src);

/*
	���� ָ�� - (*pf) 
	��� ���� - (char*, const char*)
	��� �������� - char*
*/
char* ((*pf)(char*, const char*));
char* ((*pfArr[4])(char*, const char*))

=======
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ָ������
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
	//ָ������
	int* arr[5];

	//��ֻ��һ������ʱ
	//����ָ��
	int (*pa)(int, int) = Add;

	//���ж������ʱ
	//����ָ������  �����С����ɲ���
	int(*pa[])(int, int) = {Add, Sub, Mul, Div};

	//����4������
	int i = 0;
	for (i=0; i<4; i++)
	{
		printf("%d ", parr[i](2, 3));
	}
	return 0;
}

/*��ϰ��1.дһ������ָ��pf���ܹ�ָ��my_strcpy
		2��дһ������ָ�����飬�ܹ�iż���4��my_strcpy�����ĵ�ַ*/
char* my_strcpy(char* dest, const char* src);

/*
	���� ָ�� - (*pf) 
	��� ���� - (char*, const char*)
	��� �������� - char*
*/
char* ((*pf)(char*, const char*));
char* ((*pfArr[4])(char*, const char*))

>>>>>>> b08927b9b7d3ce8e261a07bcf41cf2b37fe1a6b8
