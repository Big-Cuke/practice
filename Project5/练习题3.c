#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char* p = "abcdef"; //�����ַ��������ַ��ĵ�ַ����p����

	printf("%d\n", sizeof(p));			//4/8 ����ָ�����p�Ĵ�С
	printf("%d\n", sizeof(p + 1));		//4/8 p+1 �õ������ַ�'b'�ĵ�ַ
	printf("%d\n", sizeof(*p));			//1   *p�����ַ����ĵ�һ���ַ�'a'
	printf("%d\n", sizeof(p[0]));		//1   int arr[10] - > arr[0] == *(arr+0) p[0] == *(p+0) == 'a'
	printf("%d\n", sizeof(&p));			//4/8 ��ַ
	printf("%d\n", sizeof(&p + 1));		//4/8 
	printf("%d\n", sizeof(&p[0] + 1));	//4/8 

	printf("%d\n", strlen(p));          //6
	printf("%d\n", strlen(p + 1));		//5
	printf("%d\n", strlen(*p));			//err
	printf("%d\n", strlen(p[0]));		//err
	printf("%d\n", strlen(&p));			//���ֵ 
	printf("%d\n", strlen(&p + 1));		//���ֵ
	printf("%d\n", strlen(&p[0] + 1));	//5  &p[0]�ó���һ��Ԫ�صĵ�ַ+1 == �ڶ���Ԫ�صĵ�ַ

	return 0;
}