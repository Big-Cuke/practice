#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ָ��+-����, ȡ����ָ������

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;

//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�

int main()
{
	p = (struct Test*)0x100000;

	printf("%p\n", p + 0x1); //0x00100014 �ṹ��Ĵ�СΪ20���ֽ�  p+1->p+20���ֽ�
	
	printf("%p\n", (unsigned long)p + 0x1); //0x00100001
	//pǿ������ת��Ϊʮ���ƣ�0x100000 -> 1048576
	//1048576+1=1048577 -> 0x00100001

	printf("%p\n", (unsigned int*)p + 0x1); //0x00100004

	return 0;
}


int main()
{
	int a[4] = { 1, 2, 3, 4 };

	int* ptr1 = (int*)(&a + 1);

	int* ptr2 = (int*)((int)a + 1);
	//(int)a -> aǿ������תΪ����
	//a+1 -> ��ǰ�ƶ�һ���ֽ�

	printf("%x,%x", ptr1[-1], *ptr2);  //4,2000000
	//ptr1[-1] == *(ptr1+(-1)) == *(ptr1-1)

	/*  С�˴洢ģʽ
	01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
	�͵�ַ                                     �ߵ�ַ
	 *ptr1[-1] -> 00 00 00 04
	 *ptr2     -> 02 00 00 00
	*/

	return 0;
}


int main()
{
	//���ű��ʽ
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]); //1
	//p[0] == *(p+0)

	return 0;
}

int main()
{
	int a[5][5];
	int(*p)[4];  
	p = a;      
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);  
	//-4  0xFF FF FF FC
	return 0;
}