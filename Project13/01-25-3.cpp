#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//对象的初始化和清理

//构造函数- 初始化；析构函数-清理
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//};
//
//void test()
//{
//	Person p;
//}
//int main()
//{
//	test();
//
//	system("pause");
//
//	return 0;
//}

//class Person
//{
//public:
//	//无参(默认)构造函数
//	Person()
//	{
//		cout << "无参 构造函数" << endl;
//	}
//	//有参 构造函数
//	Person(int a)
//	{
//		cout << "有参 构造函数" << endl;
//	}
//	//拷贝 构造函数
//	Person(const Person& p)
//	{
//		cout << "拷贝 构造函数" << endl;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "析构函数" << endl;
//	}
//};
//
//void test1()
//{
//	Person p;  //调用无参构造函数
//	//Person p() // 编译器认为这是一个函数声明
//}
//void test2()
//{
//	//调用有参构造函数
//	Person p1(10);			//括号法
//	Person p2 = Person(10); //显式法
//	Person p3 = 10;			//隐式转换法   Person p3 = Person(10);
//	
//	//调用拷贝构造函数
//	Person p4 = Person(p3);
//}
//
//int main()
//{
//	test1();
//	test2();
//
//	return 0;
//}

////深浅拷贝
//class Person
//{
//public:
//	//无参构造函数
//	Person()
//	{
//		cout << "无参构造函数" << endl;
//	}
//	//有参
//	Person(int age, int height)
//	{
//		cout << "有参构造函数" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//	//拷贝构造函数
//	Person(const Person& p)
//	{
//		cout << "拷贝构造函数" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//
//	//析构函数
//	~Person()
//	{
//		cout << "析构函数" << endl;
//		if (m_height != NULL)
//		{
//			delete m_height;
//		}
//	}
//
//public:
//	int m_age;
//	int* m_height;
//};
//
//void test1()
//{
//	Person p1(18, 180);
//	cout << "p1的年龄" << p1.m_age << "身高" << *p1.m_height << endl;
//}
//int main()
//{
//	test1();
//
//	system("pause");
//
//	return 0;
//}

//初始化列表
class Person
{
public:
	////传统
	//Person(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	//初始化列表方式初始化
	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
	void PrintPerson()
	{
		cout << m_A << endl;
		cout << m_B << endl;
		cout << m_C << endl;
	}
private:
	int m_A;
	int m_B;
	int m_C;
};
int main()
{
	Person p(1, 2, 3);
	p.PrintPerson();
	return 0;
}