#include<iostream>
#include<string>
using namespace std;

//类和对象

////学生类
//class Stu
//{
//public:  //访问权限
//	//属性
//	string m_Name;
//	int m_Id;
//	//行为
//	void a()
//	{
//		cout << "学生的姓名:" << m_Name << " 学号:" << m_Id << endl;
//	}
//
//	//给姓名赋值
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//给学号赋值
//	void setId(int id)
//	{
//		m_Id = id;
//	}
//};
//
//int main()
//{
//	//实例化
//	Stu a1;
//	a1.m_Name = "小米";
//	a1.m_Id = 1;
//	a1.a();
//
//	Stu s1;
//	s1.setName("小麦");
//	s1.setId(1);
//
//	return 0;
//}

//class Person
//{
//public:
//	//写姓名  设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//读姓名  获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//获取年龄
//	int getAge()
//	{
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int Age)
//	{
//		if (Age < 0 || Age > 150)
//		{
//			m_Age = 0;
//			cout << "妖怪" << endl;
//			return;
//		}
//		m_Age = Age;
//	}
//
//	//设置爱人
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name; //可读可写
//	int m_Age; //可读
//	string m_Lover; //可写
//};
//
//int main()
//{
//	Person p1;
//	p1.setName("张三");
//	cout << "姓名:" << p1.getName() << endl;
//
//	p1.setAge(50);
//	cout << "年龄： " << p1.getAge() << endl;
//	
//	p1.setLover("yy");
//
//	system("pause");
//
//	return 0;
//}

////判断两个立方体是否相等
//class Cube
//{
//public:
//	//行为
//	//设置长、宽、高
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
//	//获取长、宽、高
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
//	//获取立方体面积
//	int calculateS()
//	{
//		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_H * m_W;
//	}
//	//获取立方体体积
//	int calculateV()
//	{
//		return m_L * m_H * m_W;
//	}
//
//	//用成员函数来判断两个立方体是否相等
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
////全局函数判读两个立方体是否相等
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
//	//实例化
//	Cube s1;
//	s1.setL(10);
//	s1.setH(10);
//	s1.setW(10);
//	cout << "面积为:" << s1.calculateS() << endl;
//	cout << "体积为:" << s1.calculateV() << endl;
//
//	Cube s2;
//	s2.setL(10);
//	s2.setH(10);
//	s2.setW(20);
//
//	//全局函数判断
//	bool ret = isSame(s1, s2);
//	if (ret)
//	{
//		cout << "全局函数: 相等" << endl;
//	}
//	else
//	{
//		cout << "全局函数：不相等" << endl;
//	}
//	//成员函数判断
//	ret = s1.isSameByClass(s2);
//	if (ret)
//	{
//		cout << "成员函数：相等" << endl;
//	}
//	else
//	{
//		cout << "成员函数：不相等" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

