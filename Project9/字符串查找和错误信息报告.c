#define _CRT_SECURE_NO_WARNINGS 1

/*strstr*/

#include <stdio.h>
#include <string.h>
int main()
{
	char* p1 = "abcndednde";
	char* p2 = "nde";
	char* ret = strstr(p1, p2);//���ص����ַ��ĵ�ַ->��ָ�����
	if (ret == NULL)
	{
		printf("������\n");
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
	char* cur = (char*)p1;  //ϸ��
	if (!*p2)
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;  //ϸ��
		//while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		while (*s1 && *s2 && (*s1 - *s2)) 
		{
			s1++,s2++;
		}
		if (!*s2) // *s2 ==	'\0'
		{
			return cur;  //�ҵ���
		}
		cur++;
		if (!*s1)
		{
			return NULL;
		}
	}
	return NULL; // �Ҳ����Ӵ�
}
int main()
{
	char* p1 = "abcdnde";
	char* p2 = "nde";

	char* ret = my_strstr(p1, p2);

	if (ret == NULL)
	{
		printf("������\n");
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

	const char* p = "@.";  //����1  �ָ�ı��
	char buf[1024] = {0};  //����2  ����һ���¿ռ䣬���Ʒָ�ԭ����
	strcpy(buf, arr);      //�����ݿ���һ�ݣ� ����arr���������
	
	//�и�buf�е��ַ���
	char* ret = NULL;
	for (ret = strcpy(buf, arr); ret != NULL; ret=strtok(NULL, p))
	{
		printf("%s\n", buf);
	}
	return 0;
}

/*strerror  ������*/
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
