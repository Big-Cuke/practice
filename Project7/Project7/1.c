#define _CRT_SECURE_NO_WARNINGS 1

//一个数组，奇数在前，偶数在后
#include <stdio.h>
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	//前提：left<right,防止全偶或全鸡
	while (left<right)
	{
		//找到奇数
		while ((left < right) && (arr[left]%2==1))
		{
			left++;
		}
		//找到偶数
		while ((left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//找到就交换位置
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
	//创建一个数组
	int arr[] = {1,2,3,4,5,6,7,8,9};
	//计算元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	//移动
	move(arr, sz);
	//打印
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
	/*200转二进制 ->1100 1000
	* 整形提升、无符号前面补0-> 0000 0000 0000 0000 0000 0000 1100 1000 --a
	* 100转二进制 ->0110 0100
	* 整形提升、无符号前面补0-> 0000 0000 0000 0000 0000 0000 0110 0100 --b
	* c = a + b-->0010 1100|| 0000 0000 0000 0000 0000 0001 0010 1100
	* %d是有符号数的整形输出
	* a+b原符号数为0 原反补相同 转为十进制为300
	* 整形提升、无符号前面补0-> 0000 0000 0000 0000 0000 0000 0010 1100 --c
	* c原符号数为0 原反补相同 转为十进制为44
	*/

	printf("%d %d", a+b, c);

	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//x86  大端模式处理器上变量b=（）
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
	//char -128~127总共有255个

	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//杨辉三角
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
			//第一步对角线变为1
			if (i==j)
			{
				arr[i][j] = 1;
			}
			//第二步第一列变为1
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			//第四步计算内部的值
			if (i>=2 && j>=1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}

	}
	//第三步打印只显示要的部分
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
		//打印空格
		int j = 0;
		for (j=0; j<line-1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j=0; j<2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//猜杀手 a说不是我；b说是c；c说是d；d说c说假话
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

//a：b第二，我第三； b：我第二，e第四；    c：我第一，d第二；
//d：c最后，我第三； e：我第四，a第一；
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
//1、暴力求解法
void left_move(char arr[], int k)  //char arr[] == char* arr
{
	assert(arr != NULL);
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	//int len = strlen(arr);
	for (i=0; i<k; i++)
	{
		//左旋一个字符
		char tmp = arr[0];  //arr[0] == *(arr)
		int j = 0;
		for (j=0; j<len-1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[len-1] = tmp;
	}
}
//2、三步翻转法
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

	reverse(arr, arr+k-1);//逆序左边
	reverse(arr, arr+len-1);//逆序右边
	reverse(arr, arr+len-1);//逆序整体
}
int main()
{
	char arr[] = {"abcdef"};
	left_move(arr, 2);
	printf("%s", arr);

	return 0;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//给定s1=AABCD和s2=BCDAA，返回1
//给定s1=abcd和s2=ACBD，返回0
#include <string.h>
#include <stdio.h>
int is_left_move(char* str1, char* str2)
{
	//判断两个字符串长度时候相等
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//1.在str1字符串中追加一个str1字符串
	strncat(str1, str1, 6);   //abcdefabcdef
	//2.判断str2指向的字符串是否是str1指向的字符串的子串
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

