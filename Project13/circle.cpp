#define _CRT_SECURE_NO_WARNINGS 1
#include "circle.h"

	//���ð뾶��Բ��
	void Circle::setR(int r)
	{
		m_R = r;
	}
	void Circle::setCenter(Point center)
	{
		Circle::m_Center = center;
	}
	//��ȡ�뾶��Բ��
	int Circle::getR()
	{
		return m_R;
	}
	Point Circle::getCenter()
	{
		return m_Center;
	}
