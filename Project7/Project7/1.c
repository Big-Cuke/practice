#define _CRT_SECURE_NO_WARNINGS 1

//һ�����飬������ǰ��ż���ں�
#include <stdio.h>
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	//ǰ�᣺left<right,��ֹȫż��ȫ��
	while (left<right)
	{
		//�ҵ�����
		while ((left < right) && (arr[left]%2==1))
		{
			left++;
		}
		//�ҵ�ż��
		while ((left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//�ҵ��ͽ���λ��
		if (left<right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	//����һ������
	int arr[] = {1,2,3,4,5,6,7,8,9};
	//����Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�ƶ�
	move(arr, sz);
	//��ӡ
	print(arr, sz);

	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;

	c = a + b; 
	/*200ת������ ->1100 1000
	* �����������޷���ǰ�油0-> 0000 0000 0000 0000 0000 0000 1100 1000 --a
	* 100ת������ ->0110 0100
	* �����������޷���ǰ�油0-> 0000 0000 0000 0000 0000 0000 0110 0100 --b
	* c = a + b-->0010 1100|| 0000 0000 0000 0000 0000 0001 0010 1100
	* %d���з��������������
	* a+bԭ������Ϊ0 ԭ������ͬ תΪʮ����Ϊ300
	* �����������޷���ǰ�油0-> 0000 0000 0000 0000 0000 0000 0010 1100 --c
	* cԭ������Ϊ0 ԭ������ͬ תΪʮ����Ϊ44
	*/

	printf("%d %d", a+b, c);

	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//x86  ���ģʽ�������ϱ���b=����
int main()
{
	unsigned int a = 0x1234;  // 0x1234 == 0x00 00 12 34
	unsigned char b = *(unsigned char*)&a;
	printf("%d\n", b);   //0x00

	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int main()
{
	char a[1000] = { 0 };
	int i = 0;
	for (i=0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	//-1 -2 ... -128 127 126 ... 3 2 1 0 -1 -2 ...
	printf("%d ", strlen(a));
	//char -128~127�ܹ���255��

	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//�������
#include <stdio.h>
int main()
{
	int arr[10][10] = {0};
	int i = 0;
	int j = 0;
	for (i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			//��һ���Խ��߱�Ϊ1
			if (i==j)
			{
				arr[i][j] = 1;
			}
			//�ڶ�����һ�б�Ϊ1
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			//���Ĳ������ڲ���ֵ
			if (i>=2 && j>=1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}

	}
	//��������ӡֻ��ʾҪ�Ĳ���
	for (i=0; i<10; i++)
	{
		for (j=0; j<=i; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//   *
//  ***
// *****
//*******
int main()
{
	int i = 0;
	int line = 5;
	for (i=0; i<line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j=0; j<line-1-i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j=0; j<2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//��ɱ�� a˵�����ң�b˵��c��c˵��d��d˵c˵�ٻ�
#include <stdio.h>
int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("%c", killer);
		}
	}
	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//a��b�ڶ����ҵ����� b���ҵڶ���e���ģ�    c���ҵ�һ��d�ڶ���
//d��c����ҵ����� e���ҵ��ģ�a��һ��
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a=1; a<=5; a++)
	{
		for (b=1; b<=5; b++)
		{
			for (c=1; c<=5; c++)
			{
				for (d=1; d<=5; d++)
				{
					for (e=1; e<=5; e++)
					{
						if (((b == 2) + (a == 3)==1)&&
							((b == 2) + (e == 4)==1)&&
							((c == 1) + (d == 2)==1)&&
							((c == 5) + (d == 3)==1)&&
							((e == 4) + (a == 1)==1))
						{
							if(a*b*c*d*e == 120)
								printf("%d,%d,%d,%d,%d", a, b, c, d, e);
						}
					}
				}
			}
		}
	}

	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <stdio.h>
#include <assert.h>
//1��������ⷨ
void left_move(char arr[], int k)  //char arr[] == char* arr
{
	assert(arr != NULL);
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	//int len = strlen(arr);
	for (i=0; i<k; i++)
	{
		//����һ���ַ�
		char tmp = arr[0];  //arr[0] == *(arr)
		int j = 0;
		for (j=0; j<len-1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[len-1] = tmp;
	}
}
//2��������ת��
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);

	reverse(arr, arr+k-1);//�������
	reverse(arr, arr+len-1);//�����ұ�
	reverse(arr, arr+len-1);//��������
}
int main()
{
	char arr[] = {"abcdef"};
	left_move(arr, 2);
	printf("%s", arr);

	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//����s1=AABCD��s2=BCDAA������1
//����s1=abcd��s2=ACBD������0
#include <string.h>
#include <stdio.h>
int is_left_move(char* str1, char* str2)
{
	//�ж������ַ�������ʱ�����
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//1.��str1�ַ�����׷��һ��str1�ַ���
	strncat(str1, str1, 6);   //abcdefabcdef
	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}	
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}

