#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

/*���� strncpy   ����������\0*/
char* my_strncpy(char* dest, char* src, size_t num)
{
	char* ret = dest;
	assert(dest && src);
	while (num && (*dest++ = *src++)) 
	{
		num--;
	}
	//����Դ�Ѿ��ù��ˣ���\0���
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

/*׷�� strncat  ��������\0*/
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
		//�Ż�ǰ
		if ((*str1 = *str2) == 0)
		{
			return ret;
		}
		else
		{
			str1++;
			str2++;
		}
		//�Ż���
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

/*�Ƚ��ַ� strncmp*/
