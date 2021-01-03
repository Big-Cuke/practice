#define _CRT_SECURE_NO_WARNINGS 1

/*求字符串长度--strlen
* *1.计数器的方法
* 2.递归
* 3.指针-指针
* 返回类型是size_t -> unsigned int
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
	if (strlen(str2) - strlen(str1) > 0) //unsigned int -3转为无符号数>0
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("srt1>str2\n");
	}

	return 0;
}

/*拷贝 strcpy*/
char* my_strcpy(char* dest, const char* src)
{
	assert(dest); //assert(dest != NOLL)
	assert(src);
	char* ret = dest;
	//拷贝src指向的字符串到dest指向的空间，包括'\0'
	while (*src != '\0')   //未优化
	{
		*dest == *src;
		dest++;
		src++;
	}
	*dest = *src; //'\0'

	while (*dest++ = *src++);  //已优化
	//返回目的空间的起始地址
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

/*追加字符串 strcat*/
char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	//1. 找到目的字符串'\0'
	while (*dest)
	{
		dest++;
	}
	//2.追加
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

/*比较字符大小 strcmp*/
my_strcmp(const char* str1, const char* str2) //传入的内容只用来比大小
{
	assert(str1 && str2);
	//比较
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;  //相等
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