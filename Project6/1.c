#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//a+aa+aaa+aaaa+aaaaa
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int ret = 0;
	int sum = 0;
	int i = 0;
	for (i=0; i<n; i++)
	{
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}

//�Ƚ�������
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	if ('a' > 'b')
	{
		printf("%d", a);
	}
	else
		printf("%d", b);

	return 0;
}

int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,8,9 };
	
	//&aa����������ȡ��������aa�ĵ�ַ     �����ַǿתΪ���ε�ַ
	int* ptr1 = (int*)(&aa + 1);

	//aa+1  ��һ�е�ַ+1
	int* ptr2 = (int*)(*(aa + 1));

	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1)); //9   5

	return 0;
}
