#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "abcdef";
	//a b c d e f \0
	printf("%d\n", sizeof(arr));        //sizeof(arr)�����������Ĵ�С����λ���ֽڣ�7
	printf("%d\n", sizeof(arr + 0));    //4/8  ������ǵ�ַ�Ĵ�С����Ԫ��+0������Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*arr));		//1    *arr����Ԫ�أ�sizeof��*arr��������Ԫ�صĴ�С
	printf("%d\n", sizeof(arr[1]));     //1    arr[1]�ǵڶ���Ԫ�أ�sizeof��arr[1]��������ǵڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&arr));       //4/8  &arrȡ����ĵ�ַ������ĵ�ַҲ�ǵ�ַ
	printf("%d\n", sizeof(&arr + 1));   //4/8  �������������ĵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1));//4/8  ȡ��һ��Ԫ�صĵ�ַ��char*+1 ָ��ڶ���Ԫ�صĵ�ַ

	printf("%d\n", strlen(arr));        //6
	printf("%d\n", strlen(arr + 0));	//6
	printf("%d\n", strlen(*arr));		//err  �׵�ַ������'a' -97 my_strlen(const char* str) �Ƿ�����
	printf("%d\n", strlen(arr[1]));		//err  ��'b'ת��98����ȥ 
	printf("%d\n", strlen(&arr));		//6 &arr ����ĵ�ַ - ����ָ��  char(*p)[7] = &arr
	printf("%d\n", strlen(&arr + 1));	//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5 

	return 0;
}