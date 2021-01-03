#define _CRT_SECURE_NO_WARNINGS 1

/*���ַ�������--strlen
* *1.�������ķ���
* 2.�ݹ�
* 3.ָ��-ָ��
* ����������size_t -> unsigned int
*/
#include <stdio.h>
#include <string.h>

int my_strlen(char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}

int my_strlen(char* s)
{
	assert(s);
	char* p = s;
	while (*p != '\0')
		p++;
	return p - s;

}

int main()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);

	const char* str1 = "abcdef";
	const char* str2 = "bbb";
	if (strlen(str2) - strlen(str1) > 0) //unsigned int -3תΪ�޷�����>0
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("srt1>str2\n");
	}

	return 0;
}

/*���� strcpy*/
char* my_strcpy(char* dest, const char* src)
{
	assert(dest); //assert(dest != NOLL)
	assert(src);
	char* ret = dest;
	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
	while (*src != '\0')   //δ�Ż�
	{
		*dest == *src;
		dest++;
		src++;
	}
	*dest = *src; //'\0'

	while (*dest++ = *src++);  //���Ż�
	//����Ŀ�Ŀռ����ʼ��ַ
	return ret;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bbb";

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}

/*׷���ַ��� strcat*/
char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	//1. �ҵ�Ŀ���ַ���'\0'
	while (*dest)
	{
		dest++;
	}
	//2.׷��
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
}

/*�Ƚ��ַ���С strcmp*/
my_strcmp(const char* str1, const char* str2) //���������ֻ�����ȴ�С
{
	assert(str1 && str2);
	//�Ƚ�
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;  //���
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
int main() 
{
	char* p1 = "abcded";
	char* p2 = "abcdq";
	int ret = my_strcmp(p1, p2);
	printf("%d\n", ret);

	return 0;
}