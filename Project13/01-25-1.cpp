#include<iostream>
#include<string>
using  namespace std;


//引用

int main()
{
	int a = 10;
	int &b = a;  //引用要初始化  错误：int &a;  一旦初始化不可更改

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pasuse");

	return 0;
}

//1.值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2.地址传递
void mySwap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用传递
void mySwap03(int &a, int &b)  //&a = a
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	mySwap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	mySwap03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}


int& test()
{
	static int a = 20;  //不能返回局部变量的引用
	return a;
}

int main()
{

	int& ref = test();  //int& ref = a
	cout << "ref = " << ref << endl;

	test() = 100;
	cout << "ref = " << ref << endl;

	system("pause");

	return 0;
}

void func(int& ref1)    //int* const ref1 = &a
{
	ref1 = 100;			//*ref1 = 100
}

int main()
{
	int a = 10;
	int& ref = a;   //int* const ref = &a
	ref = 20;		//*ref = 20

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
	return 0;
}

void showValue( int& v)  //const 防止误操作
{
	//v += 10;
	cout << v << endl;   //10
}

int main()
{
	const int& ref = 10;  //int temp = 10; const int& ref = temp;

	cout << ref << endl;

	int a = 10;
	showValue(a);

	system("pause");

	return 0;
}
