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

//比较两个数
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
	
	//&aa（数组名）取整个数组aa的地址     数组地址强转为整形地址
	int* ptr1 = (int*)(&aa + 1);

	//aa+1  第一行地址+1
	int* ptr2 = (int*)(*(aa + 1));

	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1)); //9   5

	return 0;
}

int main()
{
	unsigned long arr[] = {6,7,8,9,10};
	unsigned long* parr;
	parr = arr;   //arr首地址赋给了parr
	*(parr + 3) += 3;   //*(parr + 3) = *(parr + 3) + 3
	printf("%d, %d\n", *parr, *(parr + 3));   //6， 12

	return 0;
}

字符串逆序
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
	get(arr);    //如果有空格 加上get  她的作用是读取一行
	//逆序函数
	reverse(arr);

	return 0;
}

水仙花数不会
#include <math.h>
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为水仙花数
		//1、计算i的位数 - n位数
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		//2、计算i的每一位的n次方之和 sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3、比较i==sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

打印菱形
#include <stdio.h>

int main()
{
	
	int line = 0;
	scanf("%d", &line);
	//分两部分打印 防止输入偶数的问题
	//打印上半部分
	int i = 0;
	for (i=0; i<line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*号
		for (j=0; j<2*i+1 ; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下部分
	for (i=0; i<line-1; i++)
	{
		//打印空格
		int j = 0;
		for (j=0; j<=i ; j++)
		{
			printf(" ");
		}
		//打印*
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
	//struct S* 创建一个结构体指针变量p,p里面放的是a的地址
	struct S a, *p = &a;
	a.a = 99;
	printf("%d\n", _____);   
	/*	a.a   -ok
	*	*p.a	.的优先级高于*
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

汽水问题 1瓶汽水一块钱，2个空瓶换1瓶汽水
#include <stdio.h>
int main()
{
	int money = 0;  //钱
	int total = 0;  //买的汽水
	int empty = 0;	//空瓶
	scanf("%d", &money);
	//买回来的汽水喝掉      
	total = money;
	empty = money;
	//换回来的汽水
	while (empty >= 2)
	{
		//空瓶子/2，算除可以换多少瓶汽水
		total = total + empty / 2;
		//算出剩余的瓶子
		empty = empty / 2 + empty % 2;
	}
	printf("total = %d\n", total);

	//方法2：
	//20/0.5 = 40 - 1 = 39
	total = 2 * money - 1;
	return 0;
}


