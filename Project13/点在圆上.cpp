#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

#include "point.h"
#include "circle.h"
//点和圆的关系

////点类
//class Point
//{
//public:
//	//设置x、y
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取x、y
//	int getX()
//	{
//		return m_X;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

////圆类
//class Circle 
//{
//public:
//	//设置半径、圆心
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取半径、圆心
//	int getR()
//	{
//		return m_R;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R; //半径
//	Point m_Center;  //圆心
//};

//判断点与圆之间的关系
void inInCircle(Circle &c, Point &p)
{
	//计算两点之间的距离 平方
	int distance = 
		(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	int rDistance = c.getR() * c.getR();
	//比较
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	//创建圆
	Circle c;
	c.setR(10);

	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setX(10);
	p.setY(10);

	//判断
	inInCircle(c, p);

	system("pause");

	return 0;
}