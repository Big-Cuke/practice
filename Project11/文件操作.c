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
//	//1.创建一个文件类型的指针变量  2.打开文件并检测是否打开成功  3.关闭文件  4.值制位空
//	FILE* pFile;
//	pFile = fopen("test.txt", "w");
//	if (NULL == pFile)
//	{
//		return 0;
//	}
//	else
//	{
//		fputs("fopen example", pFile); //写
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
//	//读
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