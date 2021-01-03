#define _CRT_SECURE_NO_WARNINGS 1

/*strstr*/

#include <stdio.h>
#include <string.h>
int main()
{
	char* p1 = "abcndednde";
	char* p2 = "nde";
	char* ret = strstr(p1, p2);//返回的是字符的地址->用指针接受
	if (ret == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", ret);   //ndednde
	}
	return 0;
}

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;  //细节
	if (!*p2)
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;  //细节
		//while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		while (*s1 && *s2 && (*s1 - *s2)) 
		{
			s1++,s2++;
		}
		if (!*s2) // *s2 ==	'\0'
		{
			return cur;  //找到了
		}
		cur++;
		if (!*s1)
		{
			return NULL;
		}
	}
	return NULL; // 找不到子串
}
int main()
{
	char* p1 = "abcdnde";
	char* p2 = "nde";

	char* ret = my_strstr(p1, p2);

	if (ret == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}

/*strtok*/

int main()
{
	//192.168.01.1
	//192 168 01 1 - strtok
	//sdi@assdaij.asdi   @.
	//sdi assdaij asdi
	char arr[] = "sdi@assdaij.asdi";

	const char* p = "@.";  //条件1  分割的标记
	char buf[1024] = {0};  //条件2  创建一个新空间，复制分割原内容
	strcpy(buf, arr);      //将数据拷贝一份， 处理arr数组的内容
	
	//切割buf中的字符串
	char* ret = NULL;
	for (ret = strcpy(buf, arr); ret != NULL; ret=strtok(NULL, p))
	{
		printf("%s\n", buf);
	}
	return 0;
}

/*strerror  错误码*/
#include <errno.h>
int main()
{
	char* str = strerror(errno);
	printf("%s\n", str);

	FILE* pFile;
	pFile = fopen("unexist.ent", "r");
	if (pFile == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file  success\n");
	}
	return 0;
}
