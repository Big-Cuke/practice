#include<iostream>
#include<string>
using namespace std;

//��Ͷ���

////ѧ����
//class Stu
//{
//public:  //����Ȩ��
//	//����
//	string m_Name;
//	int m_Id;
//	//��Ϊ
//	void a()
//	{
//		cout << "ѧ��������:" << m_Name << " ѧ��:" << m_Id << endl;
//	}
//
//	//��������ֵ
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ѧ�Ÿ�ֵ
//	void setId(int id)
//	{
//		m_Id = id;
//	}
//};
//
//int main()
//{
//	//ʵ����
//	Stu a1;
//	a1.m_Name = "С��";
//	a1.m_Id = 1;
//	a1.a();
//
//	Stu s1;
//	s1.setName("С��");
//	s1.setId(1);
//
//	return 0;
//}

//class Person
//{
//public:
//	//д����  ��������
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//������  ��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//��ȡ����
//	int getAge()
//	{
//		return m_Age;
//	}
//	//��������
//	void setAge(int Age)
//	{
//		if (Age < 0 || Age > 150)
//		{
//			m_Age = 0;
//			cout << "����" << endl;
//			return;
//		}
//		m_Age = Age;
//	}
//
//	//���ð���
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name; //�ɶ���д
//	int m_Age; //�ɶ�
//	string m_Lover; //��д
//};
//
//int main()
//{
//	Person p1;
//	p1.setName("����");
//	cout << "����:" << p1.getName() << endl;
//
//	p1.setAge(50);
//	cout << "���䣺 " << p1.getAge() << endl;
//	
//	p1.setLover("yy");
//
//	system("pause");
//
//	return 0;
//}

////�ж������������Ƿ����
//class Cube
//{
//public:
//	//��Ϊ
//	//���ó�������
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//��ȡ��������
//	int getL()
//	{
//		return m_L;
//	}
//	int getH()
//	{
//		return m_H;
//	}
//	int getW()
//	{
//		return m_W;
//	}
//	//��ȡ���������
//	int calculateS()
//	{
//		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_H * m_W;
//	}
//	//��ȡ���������
//	int calculateV()
//	{
//		return m_L * m_H * m_W;
//	}
//
//	//�ó�Ա�������ж������������Ƿ����
//	bool isSameByClass(Cube &s)
//	{
//		if ((m_L == s.getL()) &&
//			(m_H == s.getH()) &&
//			(m_W == s.getW()))
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//
//private:
//	int m_L;
//	int m_H;
//	int m_W;
//};
//
////ȫ�ֺ����ж������������Ƿ����
//bool isSame(Cube &s1, Cube &s2)
//{
//	if ((s1.getL() == s2.getL()) &&
//		(s1.getH() == s2.getH()) &&
//		(s1.getW() == s2.getW()))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	//ʵ����
//	Cube s1;
//	s1.setL(10);
//	s1.setH(10);
//	s1.setW(10);
//	cout << "���Ϊ:" << s1.calculateS() << endl;
//	cout << "���Ϊ:" << s1.calculateV() << endl;
//
//	Cube s2;
//	s2.setL(10);
//	s2.setH(10);
//	s2.setW(20);
//
//	//ȫ�ֺ����ж�
//	bool ret = isSame(s1, s2);
//	if (ret)
//	{
//		cout << "ȫ�ֺ���: ���" << endl;
//	}
//	else
//	{
//		cout << "ȫ�ֺ����������" << endl;
//	}
//	//��Ա�����ж�
//	ret = s1.isSameByClass(s2);
//	if (ret)
//	{
//		cout << "��Ա���������" << endl;
//	}
//	else
//	{
//		cout << "��Ա�����������" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

