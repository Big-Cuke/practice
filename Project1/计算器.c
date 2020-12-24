#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/**/
void menu()
{
	printf("****************\n");
	printf("**1.Add  2.Sub**\n");
	printf("**3.Mul  4.Div**\n");
	printf("*****0.exit*****\n");
	printf("****************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("请输入2个数：>");
			scanf("%d%d", &x, &y);
			printf("%d \n", Add(x, y));
			printf("-------------------\n");
			printf("-------------------\n");
			break;
		case 2:
			printf("请输入2个数：>");
			scanf("%d%d", &x, &y);
			printf("%d \n", Sub(x, y));
			printf("-------------------\n");
			printf("-------------------\n");
			break;
		case 3:
			printf("请输入2个数：>");
			scanf("%d%d", &x, &y);
			printf("%d \n", Mul(x, y));
			printf("-------------------\n");
			printf("-------------------\n");
			break;
		case 4:
			printf("请输入2个数：>");
			scanf("%d%d", &x, &y);
			printf("%d \n", Div(x, y));
			printf("-------------------\n");
			printf("-------------------\n");
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}

//加入函数指针数组的用法  -- 转移表
void menu()
{
	printf("****************\n");
	printf("**1.Add  2.Sub**\n");
	printf("**3.Mul  4.Div**\n");
	printf("*****0.exit*****\n");
	printf("****************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//pfArr - 函数指针数组 
	int (*pfArr[])(int, int) = {0, Add, Sub, Mul, Div};
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)  //如果添加新的函数 需修改范围
		{
			printf("请输入两个操作数：>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
			printf("-------------------\n");
			printf("-------------------\n");
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else 
		{
			printf("选择错误\n");
			printf("-------------------\n");
			printf("-------------------\n");
		}
	} while (input);

	return 0;
}

//回调函数
void menu()
{
	printf("****************\n");
	printf("**1.Add  2.Sub**\n");
	printf("**3.Mul  4.Div**\n");
	printf("*****0.exit*****\n");
	printf("****************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

void Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}