#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//��ά����
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));           //48 = 3 * 4 *4
	printf("%d\n", sizeof(a[0][0]));	 //4 
	printf("%d\n", sizeof(a[0]));		 //16 a[0]�൱�ڵ�һ����Ϊһά�����������
	printf("%d\n", sizeof(a[0] + 1));	 //4/8  a[0]�ǵ�һ�е�����������������ʱ����Ԫ�ص�ַ��a[0]���ǵ�һ��һ��Ԫ�صĵ�ַ
	//����a[0] + 1�����һ�еڶ���Ԫ�صĵ�ַ 
	printf("%d\n", sizeof(*(a[0] + 1))); //4/8  *(a[0] + 1)�ǵ�һ�еڶ���Ԫ��
	printf("%d\n", sizeof(a + 1));		 //4/8
	printf("%d\n", sizeof(*(a + 1)));	 //16   sizeof(a[1])����ڶ��еĴ�С
	printf("%d\n", sizeof(&a[0] + 1));	 //4/8    �ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//16    ����ڶ��еĴ�С
	printf("%d\n", sizeof(*a));			 //a����Ԫ�ص�ַ-��һ�еĵ�ַ��*a�����һ�У�sizeof(*a)���Ǽ����һ�еĴ�С
	printf("%d\n", sizeof(a[3]));		 //16   sizeofֻ������㣬������û��

	//sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
	//a�Ƕ�ά�������������û��sizeof(a)��û��&(a)������a����Ԫ�ص�ַ��
	//�Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ��(��Ԫ�ص�)�ĵ�ַ

	return 0;
}