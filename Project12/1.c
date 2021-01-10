#define _CRT_SECURE_NO_WARNINGS 1
//牛客网 入门训练答案 P14

///*三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。
//输出时如果月份或天数为1位数，需要在1位数前面补0。*/
//#include <stdio.h>
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//
//	int birthday = 0;
//	scanf("%d", &birthday);
//	day = birthday % 100;
//	birthday /= 100;
//	month = birthday % 100;
//	birthday /= 100;
//	printf("%d", birthday);
//	printf("%02d", month);
//	printf("%02d", day);
//
//	int value;
//	scanf("%d", &value);
//	printf("year=%d\n", value / 10000);
//	value %= 10000;
//	printf("month=%02d\n", value / 100);
//	printf("day=%02d\n", value % 100);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;  
//
//	/*a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;*/ 
//	printf("a=%d,b=%d\n", a, b);
//
//	int a, b;
//	scanf("a=%d,b=%d", &a, &b);
//	printf("a=%d,b=%d", b, a);
//	return 0;
//}

//c -> 99
//#include <stdio.h>
//int main()
//{	
//	char ch;
//	scanf("%c", &ch);
//	printf("%d", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 40, c = 212;
//    int b = ((-8 + 22) * a - 10 + c / 2);
//    printf("%d", b);
//    return 0;
//}

//15 2 -> 7 1
//#include <stdio.h>
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a / b, a % b);
//    return 0;
//}

//45 80 -> 25
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d", ((a + b) % 100));
//    return 0;
//}

//13.141 -> 3
//int main()
//{
//    float a = 0.f;
//    scanf("%f", &a);
//    int b = (int)a;
//    printf("%d", b % 10);
//    return 0;
//}

//20 -> 631200000
//#include <stdio.h>
//int main()
//{
//    long int a;
//    scanf("%d", &a);
//    printf("%d", a * 31560000);
//    return 0;
//}