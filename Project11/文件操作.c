#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	//size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//1.����һ���ļ����͵�ָ�����  2.���ļ�������Ƿ�򿪳ɹ�  3.�ر��ļ�  4.ֵ��λ��
//	FILE* pFile;
//	pFile = fopen("test.txt", "w");
//	if (NULL == pFile)
//	{
//		return 0;
//	}
//	else
//	{
//		fputs("fopen example", pFile); //д
//		fclose(pFile);
//		pFile = NULL;
//	}
//
//	return 0;
//}

//int main()
//{
//	FILE* pread = fopen("test.txt", "r");
//	if (NULL == pread)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//	printf("%c", fgetc(pread));
//
//	fclose(pread);
//	pread = NULL;
//	return 0;
//}

int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}