#define _CRT_SECURE_NO_WARNINGS 1
#include "point.h"

//����
void Point::setX(int x)  //���û������������ȫ�ֺ�������Ҫ��������  ������Point�������µĳ�Ա����
{
	m_X = x;
}
void Point::setY(int y)
{
	m_Y = y;
}
//��ȡx��y
int Point::getX()
{
	return m_X;
}
int Point::getY()
{
	return m_Y;
}