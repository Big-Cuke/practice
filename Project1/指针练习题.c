#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	//����������Ԫ�ص�ַ
	//1��sizeof(������) - ��������ʾ��������
	//2��&������ - ��������ʾ��������
	//sizeof - ��ռ�ռ��С���������͵��ֽڴ�С
	//strlen - �ַ������� �ҵ�\0   ����ַ
	//һά����
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));         //16 = 4��Ԫ��*4���ֽڣ�int���ͣ�
	printf("%d\n", sizeof(a + 0));     //4/8 = ��������ʾ��Ԫ�ص�ֵ �� a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8�ֽ�
	printf("%d\n", sizeof(*a));        //4 - ������������Ԫ�ص�ַ��*a������Ԫ��
	printf("%d\n", sizeof(a + 1));     //4/8 - a+1 --> 2 
	printf("%d\n", sizeof(a[1]));      //4 - �ڶ���Ԫ�صĵ�ַ��С 
	printf("%d\n", sizeof(&a));        //4/8 &aȡ����������ĵ�ַ������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8�ֽ�
	printf("%d\n", sizeof(*&a));       //16  &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof�����������Ĵ�С
	printf("%d\n", sizeof(&a + 1));    //4/8 &a������ĵ�ַ��&a+1�����������飬�����ǵ�ַ��4/8�ֽ�
	printf("%d\n", sizeof(&a[0]));     //4/8 &a[0]��һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0] + 1)); //4/8 &a[0]+1 �ڶ���Ԫ�صĵ�ַ

	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };  
	printf("%d\n", sizeof(arr));             //6 - sizeof�����������Ĵ�С
	printf("%d\n", sizeof(arr + 0));         //4/8 - ��Ԫ�ص�ַ
	printf("%d\n", sizeof(*arr));            //1 - arr����Ԫ�ص�ַ��*arr����Ԫ�أ���Ԫ�����ַ�����С��һ���ֽ�
	printf("%d\n", sizeof(arr[1]));			 //1
	printf("%d\n", sizeof(&arr));			 //&arr - ����ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С4/8
	printf("%d\n", sizeof(&arr + 1));		 //&arr+1 - ��������������ĵ�ַ������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С4/8
	printf("%d\n", sizeof(&arr[0] + 1));	 //&arr - �����˵�һ��Ԫ�صĵ�ַ������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С4/8

	printf("%d\n", strlen(arr));			 //���ֵ
	printf("%d\n", strlen(arr + 0));		 //���ֵ
	printf("%d\n", strlen(*arr));			 //err  'a' ������ 97  ,strlen�Ͱ�97���ɵ�ַ����ʼ��������
	printf("%d\n", strlen(arr[1]));			 //err
	printf("%d\n", strlen(&arr));			 //���ֵ
	printf("%d\n", strlen(&arr + 1));		 //���ֵ
	printf("%d\n", strlen(&arr[0] + 1));	 //���ֵ
	return 0;
}