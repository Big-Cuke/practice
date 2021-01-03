#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

/*拷贝 strncpy   不会主动加\0*/
char* my_strncpy(char* dest, char* src, size_t num)
{
	char* ret = dest;
	assert(dest && src);
	while (num && (*dest++ = *src++)) 
	{
		num--;
	}
	//当来源已经用光了，用\0填充
	if (num)
	{
		while (--num)
		{
			*dest++ = '\0';
		}
	}
	return ret;
}
int main()
{
	char arr1[] = "abcjdedij";
	char arr2[] = "bit";

	my_strncpy(arr1, arr2, 6);
	printf("%s\n", arr1);
	return 0;
}

/*追加 strncat  会主动加\0*/
my_strncat(char* str1, const char* str2, size_t num)
{
	assert(str1 && str2);
	char* ret = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (num--)
	{
		//优化前
		if ((*str1 = *str2) == 0)
		{
			return ret;
		}
		else
		{
			str1++;
			str2++;
		}
		//优化后
		if ((*str1++ = *str2++) == 0)
			return ret;
	}
	*str1 = '\0';
	return ret;
}
int main()
{
	char arr1[30] = "abcdeee";
	char arr2[] = "dssss";
	my_strncat(arr1, arr2, 4);
	printf("%s\n", arr1);
	return 0;
}

/*比较字符 strncmp*/
