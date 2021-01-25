#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

#include "point.h"
#include "circle.h"
//���Բ�Ĺ�ϵ

////����
//class Point
//{
//public:
//	//����x��y
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡx��y
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

////Բ��
//class Circle 
//{
//public:
//	//���ð뾶��Բ��
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡ�뾶��Բ��
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
//	int m_R; //�뾶
//	Point m_Center;  //Բ��
//};

//�жϵ���Բ֮��Ĺ�ϵ
void inInCircle(Circle &c, Point &p)
{
	//��������֮��ľ��� ƽ��
	int distance = 
		(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�Ƚ�
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main()
{
	//����Բ
	Circle c;
	c.setR(10);

	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);

	//�ж�
	inInCircle(c, p);

	system("pause");

	return 0;
}