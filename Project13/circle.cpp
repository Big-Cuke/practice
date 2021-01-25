#define _CRT_SECURE_NO_WARNINGS 1
#include "circle.h"

	//设置半径、圆心
	void Circle::setR(int r)
	{
		m_R = r;
	}
	void Circle::setCenter(Point center)
	{
		Circle::m_Center = center;
	}
	//获取半径、圆心
	int Circle::getR()
	{
		return m_R;
	}
	Point Circle::getCenter()
	{
		return m_Center;
	}
