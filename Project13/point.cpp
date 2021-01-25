#define _CRT_SECURE_NO_WARNINGS 1
#include "point.h"

//点类
void Point::setX(int x)  //如果没有声明，则是全局函数；需要告诉他们  他们是Point作用域下的成员函数
{
	m_X = x;
}
void Point::setY(int y)
{
	m_Y = y;
}
//获取x、y
int Point::getX()
{
	return m_X;
}
int Point::getY()
{
	return m_Y;
}
