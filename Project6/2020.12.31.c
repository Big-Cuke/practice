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

int main()
{
	unsigned long arr[] = {6,7,8,9,10};
	unsigned long* parr;
	parr = arr;   //arr�׵�ַ������parr
	*(parr + 3) += 3;   //*(parr + 3) = *(parr + 3) + 3
	printf("%d, %d\n", *parr, *(parr + 3));   //6�� 12

	return 0;
}

�ַ�������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[256] = { 0 };
	scanf("%s", arr);
	get(arr);    //����пո� ����get  ���������Ƕ�ȡһ��
	//������
	reverse(arr);

	return 0;
}

ˮ�ɻ�������
#include <math.h>
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//1������i��λ�� - nλ��
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		//2������i��ÿһλ��n�η�֮�� sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3���Ƚ�i==sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

��ӡ����
#include <stdio.h>

int main()
{
	
	int line = 0;
	scanf("%d", &line);
	//�������ִ�ӡ ��ֹ����ż��������
	//��ӡ�ϰ벿��
	int i = 0;
	for (i=0; i<line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*��
		for (j=0; j<2*i+1 ; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�²���
	for (i=0; i<line-1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j=0; j<=i ; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j=0; j<2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

#include <stdio.h>
struct S
{
	int a;
	int b;
};
int main()
{
	//struct S* ����һ���ṹ��ָ�����p,p����ŵ���a�ĵ�ַ
	struct S a, *p = &a;
	a.a = 99;
	printf("%d\n", _____);   
	/*	a.a   -ok
	*	*p.a	.�����ȼ�����*
	*	p->a	-ok
	*	(*p).a	ok
	*/
	return 0;
}

struct stu
{
	int num;
	char name[10];
	int age;
};
void fun(struct stu *p)
{
	printf("%s\n", (*p).name);
	return;
}
int main()
{
	struct stu students[3] = { {9801, "zhang", 20}, 
							   {9802, "wang", 19}, 
							   {9803, "zhao", 18}};
	fun(students +1 );
	return 0;
}

��ˮ���� 1ƿ��ˮһ��Ǯ��2����ƿ��1ƿ��ˮ
#include <stdio.h>
int main()
{
	int money = 0;  //Ǯ
	int total = 0;  //�����ˮ
	int empty = 0;	//��ƿ
	scanf("%d", &money);
	//���������ˮ�ȵ�      
	total = money;
	empty = money;
	//����������ˮ
	while (empty >= 2)
	{
		//��ƿ��/2��������Ի�����ƿ��ˮ
		total = total + empty / 2;
		//���ʣ���ƿ��
		empty = empty / 2 + empty % 2;
	}
	printf("total = %d\n", total);

	//����2��
	//20/0.5 = 40 - 1 = 39
	total = 2 * money - 1;
	return 0;
}


