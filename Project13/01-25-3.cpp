#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//����ĳ�ʼ��������

//���캯��- ��ʼ������������-����
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
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
//	//�޲�(Ĭ��)���캯��
//	Person()
//	{
//		cout << "�޲� ���캯��" << endl;
//	}
//	//�в� ���캯��
//	Person(int a)
//	{
//		cout << "�в� ���캯��" << endl;
//	}
//	//���� ���캯��
//	Person(const Person& p)
//	{
//		cout << "���� ���캯��" << endl;
//	}
//	//��������
//	~Person()
//	{
//		cout << "��������" << endl;
//	}
//};
//
//void test1()
//{
//	Person p;  //�����޲ι��캯��
//	//Person p() // ��������Ϊ����һ����������
//}
//void test2()
//{
//	//�����вι��캯��
//	Person p1(10);			//���ŷ�
//	Person p2 = Person(10); //��ʽ��
//	Person p3 = 10;			//��ʽת����   Person p3 = Person(10);
//	
//	//���ÿ������캯��
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

////��ǳ����
//class Person
//{
//public:
//	//�޲ι��캯��
//	Person()
//	{
//		cout << "�޲ι��캯��" << endl;
//	}
//	//�в�
//	Person(int age, int height)
//	{
//		cout << "�вι��캯��" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//	//�������캯��
//	Person(const Person& p)
//	{
//		cout << "�������캯��" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//
//	//��������
//	~Person()
//	{
//		cout << "��������" << endl;
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
//	cout << "p1������" << p1.m_age << "���" << *p1.m_height << endl;
//}
//int main()
//{
//	test1();
//
//	system("pause");
//
//	return 0;
//}

//��ʼ���б�
class Person
{
public:
	////��ͳ
	//Person(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	//��ʼ���б�ʽ��ʼ��
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