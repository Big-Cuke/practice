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
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("������2������>");
			scanf("%d%d", &x, &y);
			printf("%d \n", Add(x, y));
			printf("-------------------\n");
			printf("-------------------\n");
			break;
		case 2:
			printf("������2������>");
			scanf("%d%d", &x, &y);
			printf("%d \n", Sub(x, y));
			printf("-------------------\n");
			printf("-------------------\n");
			break;
		case 3:
			printf("������2������>");
			scanf("%d%d", &x, &y);
			printf("%d \n", Mul(x, y));
			printf("-------------------\n");
			printf("-------------------\n");
			break;
		case 4:
			printf("������2������>");
			scanf("%d%d", &x, &y);
			printf("%d \n", Div(x, y));
			printf("-------------------\n");
			printf("-------------------\n");
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}

//���뺯��ָ��������÷�  -- ת�Ʊ�
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
	//pfArr - ����ָ������ 
	int (*pfArr[])(int, int) = {0, Add, Sub, Mul, Div};
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)  //�������µĺ��� ���޸ķ�Χ
		{
			printf("������������������>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
			printf("-------------------\n");
			printf("-------------------\n");
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else 
		{
			printf("ѡ�����\n");
			printf("-------------------\n");
			printf("-------------------\n");
		}
	} while (input);

	return 0;
}

//�ص�����
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
	printf("����������������:>");
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
		printf("��ѡ��:>");
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
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}